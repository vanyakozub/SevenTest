//
// Created by Ivan on 10.07.2020.
//

#include "Right.h"

Right::Right() {
}

Right::~Right() {
}

uint32_t Right::getNumID() {
    return numID;
}

std::string Right::getName() {
    return name;
}

std::string Right::getDescription() {
    return description;
}

void Right::setNumID(uint32_t numID) {
    this->numID = numID;

}

void Right::setName(std::string name) {
    this->name = name;

}

void Right::setDescription(std::string description) {
    this->description = description;

}

Right::Right(uint32_t numID, std::string name, std::string description) {
    this->numID = numID;
    this->name = name;
    this->description = description;

}

std::ostream &operator<<(std::ostream &out, Right &r) {
    out << r.getNumID() <<"\t";
    out << r.getName();
    return out;
}



