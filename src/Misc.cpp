/*
 * Misc.cpp
 *
 *  Created on: Apr 29, 2016
 *      Author: lucfons
 */

#include "Misc.h"

Misc::Misc() {
	// TODO Auto-generated constructor stub

}

Misc::~Misc() {
	// TODO Auto-generated destructor stub
}

bool Misc::loadShaderSource(osg::Shader* obj, const std::string& fileName )
   {
      std::string fqFileName = osgDB::findDataFile(fileName);
      if( fqFileName.length() == 0 )
      {
         std::cout << "File \"" << fileName << "\" not found." << std::endl;
         return false;
      }
      bool success = obj->loadShaderSourceFromFile( fqFileName.c_str());
      if ( !success  )
      {
         std::cout << "Couldn't load file: " << fileName << std::endl;
         return false;
      }
      else
      {
         return true;
      }
   }
