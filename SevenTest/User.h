#include "Role.h"
#include <vector>

#ifndef SEVENTEST_USER_H
#define SEVENTEST_USER_H

class User {
private:
	uint32_t userID;
	std::vector<Role> list_of_roles ;


public:
	User(std::vector<Role> initial_list);
	~User();
	void add_user_role(Role &role);
	void remove_user_role(Role &role);
	bool check_Right(uint32_t &numID);

};
#endif
