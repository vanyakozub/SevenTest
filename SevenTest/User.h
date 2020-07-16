
#include "Role.h"
#include <vector>

#ifndef SEVENTEST_USER_H
#define SEVENTEST_USER_H

class User {
private:
    uint32_t userID;                            //Id пользователя

public:
    User();                                     //Создание пользователя
    std::vector<Role> list_of_roles;            //Список ролей пользователя
    User(uint32_t id);                          //Создание пользователя с данным Id
    User(std::vector<Role> initial_list);       //Создание пользователя со списком ролей
    /*!
        \brief Получение Id пользователя
        \param void
        \return int Id пользователя
     */
    int getID();                                //Получение Id пользователя
    ~User();                                    //Удаление пользователя
    /*!
        \brief Добавление роли пользователю
        \param Role
        \return void
     */
    void add_user_role(Role &role);             //Добавление роли пользователю
    /*!
       \brief Удаление роли у пользователя
       \param Role
       \return void
    */
    void remove_user_role(Role &role);          //Удаление роли у пользователя
    /*!
       \brief Проверка права у пользователя
       \param Id права
       \return true, если найдено, иначе false
    */
    bool check_Right(uint32_t numID);           //Проверка права у пользователя
    friend std::ostream& operator<<(std::ostream& out,  User  &user); //Оператор вывода

};
#endif