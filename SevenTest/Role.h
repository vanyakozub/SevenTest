#ifndef SEVENTEST_ROLE_H
#define SEVENTEST_ROLE_H
#include "Right.h"
#include <vector>

class Role {
private:
    uint32_t numID;                                             //Id роли
    std::string name;                                           //Имя роли
    std::string description;                                    //Описание роли
    std::vector<Right> listOFRights;                            //Список прав роли
public:
    Role();                                                     //Создание роли
    Role(uint32_t numID, std::string name, std::string description); //Создание роли с заданными ID, именем и описанием
    ~Role();                                                    //Удаление роли
    /*!
        \brief Получение Id роли
        \param void
        \return int Id роли
     */
    uint32_t getNumID();                                        //Получение Id роли
    /*!
        \brief Получение имени роли
        \param void
        \return std::string имя роли
     */
    std::string getName();                                      //Получение имени роли
    /*!
       \brief Получение описания роли
       \param void
       \return std::string описание роли
    */
    std::string getDescription();                               //Получение описания роли
    /*!
       \brief Назначение роли Id
       \param int Id
       \return void
    */
    void setNumID(uint32_t numID);                              //Назначение роли Id
    /*!
       \brief Назначение роли имя
       \param std::string имя роли
       \return void
    */
    void setName(std::string name);                             //Назначение роли имя
    /*!
      \brief Назначение роли описания
      \param std::string описание роли
      \return void
   */
    void setDescription(std::string description);               //Назначение роли описание
    /*!
      \brief Добавление права роли
      \param Right право
      \return void
   */
    void addRight(Right &right);                                //Добавление права роли
    /*!
      \brief Удаление права роли
      \param Right право
      \return void
   */
    void removeRight(Right &right);                             //Удаление права у роли
    bool operator==(Role &role);                                //Оператор ==
    /*!
      \brief Получение списка прав роли
      \param void
      \return std::vector<Right>
   */
    std::vector<Right>& getListOfRights();                      //Получение списка прав роли
    friend std::ostream& operator<<(std::ostream& out,  Role  &r); //Оператор вывода


};


#endif //SEVENTEST_ROLE_H