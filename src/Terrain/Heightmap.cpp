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
	float map[128*128];
	radGrad(map);
	for (int x = 0; x < 128; x++) {
		for (int y = 0; y < 128; y++) {
			std::cout << map[x+y*128] << ',';
		}
		std::cout << std::endl;
	}
}
Heightmap::Heightmap() {
	// TODO Auto-generated constructor stub

}

Heightmap::~Heightmap() {
	// TODO Auto-generated destructor stub
}

void Heightmap::radGrad(float* map) {
	int cx = (int) std::round(128/2);
	int cy = (int) std::round(128/2);
	float pi = 3.141592653589793238;
	int r1 = cx;
	int r2 = cy;
	int c1 = 0;
	int c2 = 128;
	int ang = 0;
	for (int px = 0; px < 128; px++) {
		for (int py = 0; py < 128; py++) {
			if( (px^2 + py^2 <= r2^2) && (px^2 + py^2 >= r1^2)  ) {
				float t= atan2(py-cy,px-cx)+ang;
				t= t+ pi;
				if (t > 2* pi) {
					t=t-2*pi;
				}
				t=t/(2*pi);
				map[px+py*128] = (c1 * t) + (c2 * (1 - t));
			}
		}
	}
}
