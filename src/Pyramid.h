/*
 * Pyramid.h
 *
 *  Created on: Apr 27, 2016
 *      Author: lucfons
 */

#ifndef PYRAMID_H_
#define PYRAMID_H_
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/ShapeDrawable>
#include "Main.h"
#include "Misc.h"
using namespace osg;

class Pyramid {
public:
	Pyramid();
	virtual ~Pyramid();
	void drawPyramid(Group* main);
private:
	ref_ptr<Geode> geo = new Geode;
	Misc misc = Misc();
};

#endif /* PYRAMID_H_ */
