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
    int getRightNumber(uint32_t ID);
    int getRoleNumber(uint32_t ID);
    int getUserNumber(uint32_t ID);
    void removeRight(uint32_t ID);
    void removeRole(uint32_t ID);
    std::vector<Right> getListOfRights();
    std::vector<Role> getListOfRoles();
    std::vector<User> getListOfUsers();
    Library();
    ~Library();
    void print();

};


#endif //SEVENTEST_LIBRARY_H