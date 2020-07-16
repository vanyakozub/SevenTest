#include <iostream>
#include <ctime>
#include "Library.h"
int main(int argc, char *argv[]) {
    Library library;
    char first;
    char second;
    while(first != '4'){
        std::cout<<"1.Rights functions" << std::endl;
        std::cout<<"2.Roles functions" << std::endl;
        std::cout<<"3.Users functions" << std::endl;
        std::cout<<"4.Exit"<< std::endl;
        std::cin >> first;
        second = 'o';
        Right *tmpRight;
        Role *tmpRole;
        User *tmpUser;
        uint32_t firstID;
        uint32_t secondID;
        std::string name;
        std::string description;
        std::vector<Right> curRights;
        std::vector<Role> curRoles;
        int index = 0;
        int index2 = 0;
        int length = 0;
        switch (first) {
            case '1':
                while (second !='7') {
                    std::cout << "1.Add Right" << std::endl;
                    std::cout << "2.Change Right's ID" << std::endl;
                    std::cout << "3.Change Right's name" << std::endl;
                    std::cout << "4.Change Right's description" << std::endl;
                    std::cout << "5.Remove Right" << std::endl;
                    std::cout << "6.Print list of Rights" << std::endl;
                    std::cout << "7.Back" << std::endl;
                    std::cin >> second;
                    switch (second) {
                        case '1':
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> firstID;
                            std::cout << "Write Right name" << std::endl;
                            std::cin >> name;
                            std::cout << "Write Right description" << std::endl;
                            std::cin >> description;
                            tmpRight = new Right(firstID,name,description);
                            library.addRight(*tmpRight);
                            break;
                        case '2':
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRightNumber(firstID);
                            if(index == -1){
                                std::cout << "There is no such Right" << std::endl;
                                break;
                            }
                            std::cout << "Write Right new ID" << std::endl;
                            std::cin >> secondID;
                            if(library.getRightNumber(secondID) ==-1)
                            library.rights[index].setNumID(secondID);
                            else
                                std::cout << "This ID is already taken" << std::endl;
                            break;
                        case '3':
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRightNumber(firstID);
                            if(index == -1){
                                std::cout << "There is no such Right" << std::endl;
                                break;
                            }
                            std::cout << "Write Right new name" << std::endl;
                            std::cin >> name;
                            library.rights[index].setName(name);
                            break;
                        case '4':
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRightNumber(firstID);
                            if(index == -1){
                                std::cout << "There is no such Right" << std::endl;
                                break;
                            }
                            std::cout << "Write Right new description" << std::endl;
                            std::cin >> description;
                            library.rights[index].setDescription(description);
                            break;
                        case '5':
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRightNumber(firstID);
                            if(index == -1){
                                std::cout << "There is no such Right" << std::endl;
                                break;
                            }
                            library.removeRight(firstID);
                            break;
                        case '6':
                            curRights= library.getListOfRights();
                            for(int i = 0; i < curRights.size(); i ++)
                            {
                                std::cout << curRights[i] << std::endl;
                            }
                            break;
                        case '7':
                            break;
                        default:
                            std::cout << "Write correct number" << std::endl;
                            break;
                    }
                }
                break;
            case '2':
                while (second !='0') {
                    std::cout << "1.Add Role" << std::endl;
                    std::cout << "2.Change Role's ID" << std::endl;
                    std::cout << "3.Change Role's name" << std::endl;
                    std::cout << "4.Change Role's description" << std::endl;
                    std::cout << "5.Remove Role" << std::endl;
                    std::cout << "6.Print list of Roles" << std::endl;
                    std::cout << "7.Add Right to Role" << std::endl;
                    std::cout << "8.Remove Right from Role" << std::endl;
                    std::cout << "9.Print Role's list of Rights" << std::endl;
                    std::cout << "0.Back" << std::endl;
                    std::cin >> second;
                    switch (second) {
                        case '1':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            std::cout << "Write Role name" << std::endl;
                            std::cin >> name;
                            std::cout << "Write Role description" << std::endl;
                            std::cin >> description;
                            tmpRole = new Role(firstID, name, description);
                            library.addRole(*tmpRole);
                            break;
                        case '2':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRoleNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            std::cout << "Write Role new ID" << std::endl;
                            std::cin >> secondID;
                            if (library.getRoleNumber(secondID) == -1)
                                library.roles[index].setNumID(secondID);
                            else
                                std::cout << "This ID is already taken" << std::endl;
                            break;
                        case '3':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRoleNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            std::cout << "Write Role new name" << std::endl;
                            std::cin >> name;
                            library.roles[index].setName(name);
                            break;
                        case '4':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRoleNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            std::cout << "Write Role new description" << std::endl;
                            std::cin >> description;
                            library.roles[index].setDescription(description);
                            break;
                        case '5':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRoleNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            library.removeRole(firstID);
                            break;
                        case '6':
                            curRoles = library.getListOfRoles();
                            for (int i = 0; i < curRoles.size(); i++) {
                                std::cout << curRoles[i] << std::endl;
                            }
                            break;
                        case '7':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRoleNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> secondID;
                            index2 = library.getRightNumber(secondID);
                            if(index2 == -1){
                                std::cout << "There is no such Right" << std::endl;
                                break;
                            }
                            library.roles[index].addRight(library.rights[index2]);
                            break;
                        case '8':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRoleNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> secondID;
                            index2 = library.getRightNumber(secondID);
                            if(index2 == -1){
                                std::cout << "There is no such Right" << std::endl;
                                break;
                            }
                            library.roles[index].removeRight(library.getListOfRights()[index2]);
                            break;
                        case '9':
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getRoleNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            curRights = library.roles[index].getListOfRights();
                            for(int i = 0; i < curRights.size(); i ++)
                            {
                                std::cout << curRights[i] << std::endl;
                            }
                            break;
                        case '0':
                            break;
                        default:
                            std::cout << "Write correct number" << std::endl;
                            break;
                    }
                }
            case '3':
                while (second !='6') {
                    std::cout << "1.Add User" << std::endl;
                    std::cout << "2.Add Role" << std::endl;
                    std::cout << "3.Remove Role" << std::endl;
                    std::cout << "4.Set list of Role" << std::endl;
                    std::cout << "5.Check Right" << std::endl;
                    std::cout << "6.Back" << std::endl;
                    std::cin >> second;
                    switch (second) {
                        case '1':
                            std::cout << "Write User ID" << std::endl;
                            std::cin >> firstID;
                            tmpUser = new User(firstID);
                            library.addUser(*tmpUser);
                            break;
                        case'2':
                            std::cout << "Write User ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getUserNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such User" << std::endl;
                                break;
                            }
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> secondID;
                            index2 = library.getRoleNumber(secondID);
                            if (index2 == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            library.users[index].add_user_role(library.roles[index2]);
                            break;
                        case'3':
                            std::cout << "Write User ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getUserNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such User" << std::endl;
                                break;
                            }
                            std::cout << "Write Role ID" << std::endl;
                            std::cin >> secondID;
                            index2 = library.getRoleNumber(secondID);
                            if (index2 == -1) {
                                std::cout << "There is no such Role" << std::endl;
                                break;
                            }
                            library.users[index].remove_user_role(library.roles[index2]);
                            break;
                        case'4':
                            std::cout << "Write User ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getUserNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such User" << std::endl;
                                break;
                            }
                            std::cout << "Write length of list" << std::endl;
                            std::cin>>length;
                            curRoles.resize(0);
                            for(int i = 0; i < length; i++)
                            {
                                std::cout << "Write Role ID" << std::endl;
                                std::cin >> secondID;
                                index2 = library.getRoleNumber(secondID);
                                if (index2 == -1) {
                                    std::cout << "There is no such Role" << std::endl;
                                    break;
                                }
                                library.users[index].add_user_role(library.roles[index2]);
                            }
                            break;
                        case'5':
                            std::cout << "Write User ID" << std::endl;
                            std::cin >> firstID;
                            index = library.getUserNumber(firstID);
                            if (index == -1) {
                                std::cout << "There is no such User" << std::endl;
                                break;
                            }
                            std::cout << "Write Right ID" << std::endl;
                            std::cin >> secondID;
                            index2 = library.getRightNumber(secondID);
                            if(index2 == -1){
                                std::cout << "There is no such Right" << std::endl;
                                break;
                            }
                            if(library.users[index].check_Right(library.rights[index2].getNumID()))
                                std::cout << "Found!" << std::endl;
                            break;
                        case '6':
                            break;
                        default:
                            std::cout << "Write correct number" << std::endl;
                        break;
                    }

                }
        }
    }
    return 0;
}
