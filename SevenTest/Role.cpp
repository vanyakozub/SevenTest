//
// Created by Ivan on 10.07.2020.
//

#include "Role.h"

Role::Role() {

}

Role::~Role() {

}

uint32_t Role::getNumID() {
    return numID;
}

std::string Role::getName() {
    return name;
}

std::string Role::getDescription() {
    return description;
}

void Role::setNumID(uint32_t numID) {
    this->numID = numID;
}

void Role::setName(std::string name) {
    this->name = name;
}

void Role::setDescription(std::string description) {
    this->description = description;
}

std::set<Right>& Role::getListOfRights() {
    return listOFRights;
}

void Role::removeRight(Right &right) {
    std::set<Right>::iterator it = listOFRights.find(right);
    if(it != listOFRights.end())
    {
        listOFRights.erase(it);
    }

}

void Role::addRight(Right &right) {
    listOFRights.insert(right);

}
