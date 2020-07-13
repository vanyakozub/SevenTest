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
    for (size_t i = 0; i < list_of_roles.size(); i++) {
        if (list_of_roles[i] == role)
            list_of_roles.remove(i);
    }
}

bool User::check_Right(uint32_t &numID)
{
    for (size_t i = 0; i < list_of_roles.size(); i++) {
        std::set<Right> listOFRights = list_of_roles[i].getListOfRights();
        for (size_t j = 0; j < listOFRights.size(); j++) {
            if (numID == listOFRights[j])
                return true;
        }
    }
    return false;
}
