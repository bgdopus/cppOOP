/*
 * IChassis.h
 *
 *  Created on: Jun 26, 2017
 *      Author: Daniel
 */

#ifndef ICHASSIS_H_
#define ICHASSIS_H_

class IChassis {
public:
	IChassis();
	virtual ~IChassis();

private:
	virtual void abstraction() = 0;
};

#endif /* ICHASSIS_H_ */
