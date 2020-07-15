#ifndef SEVENTEST_LIBRARY_H
#define SEVENTEST_LIBRARY_H
#include "User.h"
#include <thread>


class Library {
private:


public:
    std::vector<Right> rights;
    std::vector<Role> roles;
    std::vector<User> users;
    void addRight(Right & right);
    void addRole(Role & role);
    void addUser(User & user);
    std::vector<Right> getListOfRights();
    std::vector<Role> getListOfRoles();
    std::vector<User> getListOfUsers();
    Library();
    ~Library();
    void print();

};


#endif //SEVENTEST_LIBRARY_H