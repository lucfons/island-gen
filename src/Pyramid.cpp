/*
 * Pyramid.cpp
 *
 *  Created on: Apr 27, 2016
 *      Author: lucfons
 */

#include "Pyramid.h"
using namespace osg;
Pyramid::Pyramid() {

	/*
	pyramidGeode = new Geode();
	pyramidGeometry = new Geometry();
	pyramidGeode->addDrawable(pyramidGeometry);
	main->addChild(pyramidGeode);
	Vec3Array* pyramidVertices = new osg::Vec3Array;
	pyramidVertices->push_back( osg::Vec3( 0, 0, 0) ); // front left
	pyramidVertices->push_back( osg::Vec3(10, 0, 0) ); // front right
	pyramidVertices->push_back( osg::Vec3(10,10, 0) ); // back right
	pyramidVertices->push_back( osg::Vec3( 0,10, 0) ); // back left
	pyramidVertices->push_back( osg::Vec3( 5, 5,10) ); // peak
	pyramidGeometry->setVertexArray( pyramidVertices );
	osg::DrawElementsUInt* pyramidBase =
	new osg::DrawElementsUInt(osg::PrimitiveSet::QUADS, 0);
	pyramidBase->push_back(3);
	pyramidBase->push_back(2);
	pyramidBase->push_back(1);
	pyramidBase->push_back(0);
	pyramidGeometry->addPrimitiveSet(pyramidBase);
	osg::DrawElementsUInt* pyramidFaceOne =
	new osg::DrawElementsUInt(osg::PrimitiveSet::TRIANGLES, 0);
	pyramidFaceOne->push_back(0);
	pyramidFaceOne->push_back(1);
	pyramidFaceOne->push_back(4);
	pyramidGeometry->addPrimitiveSet(pyramidFaceOne);
	osg::DrawElementsUInt* pyramidFaceTwo =
	    new osg::DrawElementsUInt(osg::PrimitiveSet::TRIANGLES, 0);
	pyramidFaceTwo->push_back(1);
	pyramidFaceTwo->push_back(2);
	pyramidFaceTwo->push_back(4);
	pyramidGeometry->addPrimitiveSet(pyramidFaceTwo);
	osg::DrawElementsUInt* pyramidFaceThree =
	   new osg::DrawElementsUInt(osg::PrimitiveSet::TRIANGLES, 0);
	pyramidFaceThree->push_back(2);
	pyramidFaceThree->push_back(3);
	pyramidFaceThree->push_back(4);
	pyramidGeometry->addPrimitiveSet(pyramidFaceThree);
	osg::DrawElementsUInt* pyramidFaceFour =
	new osg::DrawElementsUInt(osg::PrimitiveSet::TRIANGLES, 0);
	pyramidFaceFour->push_back(3);
	pyramidFaceFour->push_back(4);
	pyramidGeometry->addPrimitiveSet(pyramidFaceFour);
	osg::Vec4Array* colors = new osg::Vec4Array;
	colors->push_back(osg::Vec4(1.0f, 0.0f, 0.0f, 1.0f) ); //index 0 red
	colors->push_back(osg::Vec4(0.0f, 1.0f, 0.0f, 1.0f) ); //index 1 green
	colors->push_back(osg::Vec4(0.0f, 0.0f, 1.0f, 1.0f) ); //index 2 blue
	colors->push_back(osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f) ); //index 3 white
	colors->push_back(osg::Vec4(1.0f, 0.0f, 0.0f, 1.0f) ); //index 4 red
	pyramidGeometry->setColorArray(colors);
	pyramidGeometry->setColorBinding(osg::Geometry::BIND_PER_VERTEX);
	osg::PositionAttitudeTransform* pyramidTwoXForm =
	new osg::PositionAttitudeTransform();
	main->addChild(pyramidTwoXForm);
	*/
}
void Pyramid::drawPyramid(Group* Main) {

	geo->addDrawable(new ShapeDrawable(new Sphere()));
	/*
	osg::StateSet* brickState = geo->getOrCreateStateSet();

	       osg::Program* brickProgramObject = new osg::Program;
	       osg::Shader* brickVertexObject =
	          new osg::Shader( osg::Shader::VERTEX );
	       osg::Shader* brickFragmentObject =
	          new osg::Shader( osg::Shader::FRAGMENT );
	       brickProgramObject->addShader( brickFragmentObject );
	       brickProgramObject->addShader( brickVertexObject );
	       misc.loadShaderSource( brickVertexObject, "RWTBase.vsh" );
	       misc.loadShaderSource( brickFragmentObject, "RWTBase.fsh" );
	       osg::Uniform* resolutionU = new osg::Uniform("uResolution", osg::Vec2(480, 1000));
	       brickState->addUniform(resolutionU);

	      brickState->setAttributeAndModes(brickProgramObject, osg::StateAttribute::ON);
	*/
	Main->addChild(geo);

}
Pyramid::~Pyramid() {
	// TODO Auto-generated destructor stub
}

