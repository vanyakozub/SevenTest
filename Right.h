//
// Created by Ivan on 10.07.2020.
//

#ifndef SEVENTEST_RIGHT_H
#define SEVENTEST_RIGHT_H
#include <iostream>



class Right {
private:
    uint32_t numID;
    std::string name;
    std::string description;
public:
    Right();
    ~Right();
    uint32_t getNumID();
    std::string getName();
    std::string getDescription();
    void setNumID(uint32_t numID);
    void setName(std::string name);
    void setDescription(std::string description);
};


#endif //SEVENTEST_RIGHT_H
