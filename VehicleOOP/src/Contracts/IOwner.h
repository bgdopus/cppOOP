/*
 * IOwner.h
 *
 *  Created on: Jun 27, 2017
 *      Author: Daniel
 */

#ifndef IOWNER_H_
#define IOWNER_H_

class IOwner {
public:
	IOwner();
	virtual ~IOwner();

private:
	virtual void abstraction() = 0;
};

#endif /* IOWNER_H_ */
