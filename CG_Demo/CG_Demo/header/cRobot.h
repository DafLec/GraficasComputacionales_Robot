#pragma once	// Compiler directive
#ifdef __APPLE__
// See: http://lnx.cx/docs/opengl-in-xcode/
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <stdlib.h>
#else
#include "freeglut.h"
#endif
#include <stdio.h>
#include <math.h>

class Robot
{
public:
	Robot(float _x, float _y, float _z);
	~Robot();

	void arm(float _x);
	void leg(float _x);
	void torso();
	void draw();

	float x;
	float y;
	float z;
};