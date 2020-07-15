#include "Library.h"

#include <iostream>



Library::Library() {


}

Library::~Library() {

}

void Library::print() {
    std::cout << "Working!" << std::endl;

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
