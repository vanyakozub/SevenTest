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

std::vector<Right>& Role::getListOfRights() {
    return listOFRights;
}

void Role::removeRight(Right &right) {
    std::vector<Right>::iterator it = listOFRights.begin();
    for(;it != listOFRights.end(); ++it) {
        if (it != listOFRights.end()) {
            listOFRights.erase(it);
        }
    }

}

void Role::addRight(Right &right) {
    listOFRights.push_back(right);

}

bool Role::operator==(Role &role) {
    if(this->numID == role.numID)
        return true;
    return false;
}

std::ostream &operator<<(std::ostream &out, Role &r) {
    out << r.getNumID() <<"\t";
    out << r.getName() <<std::endl;
    for(int i = 0; i < r.listOFRights.size(); i++)
    {
        out<<r.listOFRights[i] << std::endl;
    }
    out << std::endl;
    return out;
}
