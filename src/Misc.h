/*
 * Misc.h
 *
 *  Created on: Apr 29, 2016
 *      Author: lucfons
 */

#ifndef MISC_H_
#define MISC_H_
#include <osgDB/ReadFile>
#include <osgDB/FileUtils>
#include <osg/Shader>

class Misc {
public:
	Misc();
	virtual ~Misc();
	bool loadShaderSource(osg::Shader* obj, const std::string& fileName );
};

#endif /* MISC_H_ */
