/*
 * Main.cpp
 *
 *  Created on: Apr 27, 2016
 *      Author: lucfons
 */

#include "Main.h"
using namespace osg;

Main::Main() {
	World world = World();
	node = world.world;
	viewer.setSceneData(node);
	viewer.setCameraManipulator(new osgGA::TrackballManipulator());
	viewer.realize();
	Heightmap test = Heightmap(128, 128);

	while (!viewer.done()) {
		viewer.frame();
	}
}

Main::~Main() {
	// TODO Auto-generated destructor stub
}
