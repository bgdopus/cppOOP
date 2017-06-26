/*
 * GroundVehicle.h
 *
 *  Created on: Jun 26, 2017
 *      Author: Daniel
 */

#ifndef GROUNDVEHICLE_H_
#define GROUNDVEHICLE_H_

class GroundVehicle {
public:

	GroundVehicle(IChassis &chassis, ITire &tire)
	{
		this->chassis = &chassis;
		this->tire = &tire;
	};

	ITire getTire()
	{
		return this->tire;
	}

	void setTire(ITire &tire)
	{
		this->tire = tire;
	}


	virtual ~GroundVehicle();

private:
	IChassis chassis;
	ITire tire;
	virtual void abstraction() = 0;
};

#endif /* GROUNDVEHICLE_H_ */
