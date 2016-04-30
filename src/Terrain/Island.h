/*
 * Island.h
 *
 *  Created on: Apr 29, 2016
 *      Author: lucfons
 */

#ifndef TERRAIN_ISLAND_H_
#define TERRAIN_ISLAND_H_
#include <osg/Group>
using namespace osg;

class Island {
public:
	Island();
	virtual ~Island();
	void makeIsland(Group* group);
};

#endif /* TERRAIN_ISLAND_H_ */
