#ifndef SEVENTEST_LIBRARY_H
#define SEVENTEST_LIBRARY_H
#include "User.h"
#include <thread>


class Library {
public:
    std::vector<Right> rights;                  //Список прав в библиотеке
    std::vector<Role> roles;                    //Список ролей в библиотеке
    std::vector<User> users;                    //Список пользователей в библиотеке
    /*!
        \brief Добавление права
        \param Right
        \return void
     */
    void addRight(Right & right);               //Добавление права
    /*!
        \brief Добавление роли
        \param Role
        \return void
     */
    void addRole(Role & role);                  //Добавление роли
    /*!
        \brief Добавление пользователя
        \param User
        \return void
     */
    void addUser(User & user);                  //Добавление пользователя
    /*!
        \brief Получение номера права
        \param uint32_t Id права
        \return int номер в списке
     */
    int getRightNumber(uint32_t ID);            //Получение номера права
    /*!
        \brief Получение номера роли
        \param uint32_t Id роли
        \return int номер в списке
     */
    int getRoleNumber(uint32_t ID);             //Получение номера роли
    /*!
        \brief Получение номера пользователя
        \param uint32_t Id пользователя
        \return int номер в списке
     */
    int getUserNumber(uint32_t ID);             //Получение номера пользователя
    /*!
        \brief Удаление права
        \param uint32_t Id права
        \return void
     */
    void removeRight(uint32_t ID);              //Удаление права
    /*!
        \brief Удаление роли
        \param uint32_t Id роли
        \return void
     */
    void removeRole(uint32_t ID);               //Удаление роли
    /*!
      \brief Получение списка прав роли
      \param void
      \return std::vector<Right>
   */
    std::vector<Right> getListOfRights();       //Получение списка прав
    /*!
      \brief Получение списка ролей
      \param void
      \return std::vector<Role>
   */
    std::vector<Role> getListOfRoles();         //Получение списка ролей
    /*!
      \brief Получение списка пользователей
      \param void
      \return std::vector<User>
   */
    std::vector<User> getListOfUsers();         //Получение списка пользователей
    Library();
    ~Library();

};


#endif //SEVENTEST_LIBRARY_H