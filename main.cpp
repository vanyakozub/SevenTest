#include <iostream>
#include <ctime>
#include "Library.h"
int main() {
    Library library;
    Right *arrayOfRights = new Right[25];
    std::string name;
    for(int i = 0; i <  25; i++) {
        name = "Right " +  std::to_string(i);
        arrayOfRights[i].setNumID(uint32_t (i));
        arrayOfRights[i].setDescription(name);
        arrayOfRights[i].setName(name);
        library.addRight(arrayOfRights[i]);
    }
    std::vector<Right> curRights= library.getListOfRights();
    for(int i = 0; i < curRights.size(); i ++)
    {
        std::cout << curRights[i] << std::endl;
    }


    //Role role;
    Role *roles = new Role[10];
    for(int j = 0; j < 10; j++) {
        name = "Role " + std::to_string(j);
        roles[j].setNumID(uint32_t (j));
        roles[j].setName(name);
        for (int i = 0; i < 25; i++) {
            roles[j].addRight(arrayOfRights[i]);
        }
        library.addRole(roles[j]);
    }
    std::vector<Role> curRoles= library.getListOfRoles();
    for(int i = 0; i < curRoles.size(); i ++)
    {
        std::cout << curRoles[i] << std::endl;
    }

    User firstUser;
    for(int j = 0; j < 10; j++) {
        firstUser.add_user_role(roles[j]);
    }
    User *users = new User[1000];
    for(int i = 0; i < 1000; i++) {
        for (int j = 0; j < 10; j++) {
            users[i].add_user_role(roles[j]);
        }
        //library.addUser(users[i]);
        //std::cout << i << std::endl;
    }


    /*std::vector<User> curUsers = library.getListOfUsers();
    for(int i = 0; i < curRoles.size(); i ++)
    {
        std::cout << curUsers[i] << std::endl;
    }*/
    clock_t t3 = clock();
    for(int i = 0; i < 500; i++) {
        for(int j = 0; j < 1000; j++) {
            if (users[j].check_Right(i / 25 + 5)){
                //std::cout << "Found!" << std::endl;
            }
        }
        /*if (firstUser.check_Right(uint32_t(i/25))){
            //std::cout << "Found!" << std::endl;
        }*/

    }
    clock_t t4 = clock();
    //firstUser.add_user_role(role);
    std::cout <<"In: " << (double)(t4 - t3) / CLOCKS_PER_SEC << std::endl;
    return 0;
}
