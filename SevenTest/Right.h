#ifndef SEVENTEST_RIGHT_H
#define SEVENTEST_RIGHT_H
#include <iostream>

class Right {
private:
    uint32_t numID;                                                 //Id права
    std::string name;                                               //Имя права
    std::string description;                                        //Описание права
public:
    Right();                                                        //Создание права
    Right(uint32_t numID, std::string name, std::string description); //Создание права с заданными параметрами
    ~Right();                                                       //Удаление права
    /*!
        \brief Получение Id права
        \param void
        \return int Id права
     */
    uint32_t getNumID();                                            //Получение Id права
    /*!
        \brief Получение имени права
        \param void
        \return std::string имя права
     */
    std::string getName();                                          //Получение имени права
    /*!
        \brief Получение описания права
        \param void
        \return std::string описание права
     */
    std::string getDescription();                                   //Получение описания права
    /*!
       \brief Назначение Id права
       \param uint32_t Id права
       \return void
    */
    void setNumID(uint32_t numID);                                  //Назначение Id
    /*!
       \brief Назначение имени
       \param std::string имя права
       \return void
    */
    void setName(std::string name);                                 //Назначение имени
    /*!
       \brief Назначение описания
       \param std::string описание права
       \return void
    */
    void setDescription(std::string description);                   //Назначение описания
    friend std::ostream& operator<<(std::ostream& out,  Right  &r); //Оператор вывода
};


#endif //SEVENTEST_RIGHT_H