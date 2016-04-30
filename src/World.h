/*
 * World.h
 *
 *  Created on: Apr 29, 2016
 *      Author: lucfons
 */

#ifndef WORLD_H_
#define WORLD_H_
#include <osg/Group>
#include "Pyramid.h"
using namespace osg;

class World {
public:
	World();
	virtual ~World();
	Group* world = new Group();
};

#endif /* WORLD_H_ */
