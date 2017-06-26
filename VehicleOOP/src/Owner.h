/*
 * Owner.h
 *
 *  Created on: Jun 27, 2017
 *      Author: Daniel
 */
#include <iostream>
#ifndef OWNER_H_
#define OWNER_H_

class Owner : public IOwner{
public:

	Owner(string name)
	{
		this-> name = name;

	};
	virtual ~Owner();

private:
	string name;
	vector<IVehicle> vehicles;
};

#endif /* OWNER_H_ */
