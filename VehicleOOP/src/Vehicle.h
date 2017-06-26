/*
 * Vehicle.h
 *
 *  Created on: Jun 26, 2017
 *      Author: Daniel
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_

class Vehicle : public IVehicle {
public:
	Vehicle();
	virtual ~Vehicle();

private:
	virtual void abstraction() = 0;
};

#endif /* VEHICLE_H_ */
