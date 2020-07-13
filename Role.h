//
// Created by Ivan on 10.07.2020.
//

#ifndef SEVENTEST_ROLE_H
#define SEVENTEST_ROLE_H
#include "Right.h"
#include <set>

class Role {
private:
    uint32_t numID;
    std::string name;
    std::string description;
    std::set<Right> listOFRights;
    // add data structure to describe a list of rights
public:
    Role();
    ~Role();
    uint32_t getNumID();
    std::string getName();
    std::string getDescription();
    void setNumID(uint32_t numID);
    void setName(std::string name);
    void setDescription(std::string description);
    void addRight(Right &right);
    void removeRight(Right &right);
    std::set<Right>& getListOfRights();


};


#endif //SEVENTEST_ROLE_H
