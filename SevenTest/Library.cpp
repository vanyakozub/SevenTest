#include "Library.h"

#include <iostream>



Library::Library() {


}

Library::~Library() {

}


void Library::addRight(Right & right) {
    Right r(right);
    rights.push_back(r);
}

std::vector<Right> Library::getListOfRights() {
    return rights;
}

void Library::addRole(Role &role) {
    Role r(role);
    roles.push_back(r);

}

std::vector<Role> Library::getListOfRoles() {
    return roles;
}

void Library::addUser(User &user) {
    User u(user);
    users.push_back(u);

}

std::vector<User> Library::getListOfUsers() {
    return users;
}

int Library::getRightNumber(uint32_t ID) {
    for(int i = 0; i <rights.size(); i++)
    {
        if(rights[i].getNumID()==ID)
        {
            return i;
        }
    }
    return -1;
}

void Library::removeRight(uint32_t ID) {
    std::vector<Right>::iterator it = rights.begin();
    for(;it != rights.end(); ++it) {
        if (it->getNumID() == ID) {
            rights.erase(it);
        }
    }

}

int Library::getRoleNumber(uint32_t ID) {
    for(int i = 0; i <roles.size(); i++)
    {
        if(roles[i].getNumID()==ID)
        {
            return i;
        }
    }
    return -1;

}

void Library::removeRole(uint32_t ID) {
    std::vector<Role>::iterator it = roles.begin();
    for(;it != roles.end(); ++it) {
        if (it->getNumID() == ID) {
            roles.erase(it);
        }
    }
}

int Library::getUserNumber(uint32_t ID) {
    for(int i = 0; i <users.size(); i++)
    {
        if(users[i].getID()==ID)
        {
            return i;
        }
    }
    return -1;
}
