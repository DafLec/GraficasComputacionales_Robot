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

class Cube
{
public:
	Cube(float _x, float _y, float _z, float _r, float _g, float _b);
	~Cube();

	void draw(float _x);
	void drawRectangle(float _x);

	float x;
	float y;
	float z;

	float r, g, b;
	float rotX;
	float rotY;
	float rotZ;
};
