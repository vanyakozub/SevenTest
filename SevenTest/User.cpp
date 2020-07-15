#include "User.h"

User::User(std::vector<Role> initial_list)
{
    for (size_t i = 0; i < initial_list.size(); i++) {
        list_of_roles.push_back(initial_list[i]);
    }
}

User::~User() {

}

void User::add_user_role(Role &role)
{
    list_of_roles.push_back(role);
}

void User::remove_user_role(Role &role)
{
    std::vector<Role>::iterator it = list_of_roles.begin();
    for(; it !=list_of_roles.end(); ++it) {

        if (it->getNumID() == role.getNumID())
            list_of_roles.erase(it);
    }
}

bool User::check_Right(uint32_t numID)
{
    for (size_t i = 0; i < list_of_roles.size(); i++) {
        std::vector<Right> listOFRights = list_of_roles[i].getListOfRights();
        for (size_t j = 0; j < listOFRights.size(); j++) {
            if (numID == listOFRights[j].getNumID())
                return true;
        }
    }
    return false;
}

User::User() {

}

std::ostream &operator<<(std::ostream &out, User &user) {
    for(int i = 0; i < user.list_of_roles.size(); i++)
    {
        out << user.list_of_roles[i].getNumID() <<"\t";
        out << user.list_of_roles[i].getName() <<std::endl;
        for(int j = 0; i < user.list_of_roles[i].getListOfRights().size(); j++)
        {
            out<<user.list_of_roles[i].getListOfRights()[j] << std::endl;
        }
        out << std::endl;
    }
    return out;
}


