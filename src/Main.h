/*
 * Main.h
 *
 *  Created on: Apr 27, 2016
 *      Author: lucfons
 */

#ifndef MAIN_H_
#define MAIN_H_
#include <osg/Group>
#include <osgViewer/viewer>
#include "Pyramid.h"
#include <osgGA/TrackballManipulator>
#include "World.h"
using namespace osg;

class Main {
public:
	Main();
	virtual ~Main();
private:
	Group* node;
	osgViewer::Viewer viewer;
};

#endif /* MAIN_H_ */
