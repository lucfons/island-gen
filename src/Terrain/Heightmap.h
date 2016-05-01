/*
 * Heightmap.h
 *
 *  Created on: Apr 30, 2016
 *      Author: lucafonstad
 */

#ifndef TERRAIN_HEIGHTMAP_H_
#define TERRAIN_HEIGHTMAP_H_
#include <math.h>
#include <vector>
#include <osg/Geometry>
#include <osg/Geode>

class Heightmap {
public:
	Heightmap(int w, int h);
	Heightmap();
	virtual ~Heightmap();
private:
	void radGrad(float* map);
};

#endif /* TERRAIN_HEIGHTMAP_H_ */
