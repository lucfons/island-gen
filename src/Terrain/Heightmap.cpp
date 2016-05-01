/*
 * Heightmap.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: lucafonstad
 */

#include "Heightmap.h"

Heightmap::Heightmap(int w, int h) {
	osg::Geode* islandGeode = new osg::Geode();
	osg::Geometry* islandGeometry = new osg::Geometry();
	islandGeode->addDrawable(islandGeometry);
	float map[][] = new float[128][128];
	radGrad(map);
}
Heightmap::Heightmap() {
	// TODO Auto-generated constructor stub

}

Heightmap::~Heightmap() {
	// TODO Auto-generated destructor stub
}

void Heightmap::radGrad(float* map) {
	int cx = (int) std::round(sizeof(map)/2);
	int cy = (int) std::round(sizeof(map[0])/2);
	float pi = 3.141592653589793238;
	int r1 = cx;
	int r2 = cy;
	int c1 = 0;
	int c2 = 128;
	int ang = 0;
	for (int px = 0; px < sizeof(map); px++) {
		for (int py = 0; py < sizeof(map[0]); py++) {
			if( (px^2 + py^2 <= r2^2) && (px^2 + py^2 >= r1^2)  ) {
				float t= atan2(py-cy,px-cx)+ang;
				t= t+ pi;
				if (t > 2* pi) {
					t=t-2*pi;
				}
				t=t/(2*pi);
				map[px][py] = (c1 * t) + (c2 * (1 - t));
			}
		}
	}
}
