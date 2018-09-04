#include "cCube.h"

Cube::Cube(float _x, float _y, float _z, float _r, float _g, float _b)
{
	x = _x;
	y = _y;
	z = _z;
	r = _r;
	g = _g;
	b = _b;
	rotX = 0;
	rotY = 0;
	rotZ = 0;
}

Cube::~Cube()
{
}

void Cube::draw()
{
	glPushMatrix();
	{
		flTranslatef(x, y, z);
		glRotatef(rotX, 1, 0, 0);
		glColorf(r, g, b);
		glutWireCube(1);
	}
	glPopMatrix();
}

void Cube::drawRectangle()
{
	glPushMatrix();
	{
		glScalef(1.5f,1.0f,1.0f);
		flTranslatef(x, y, z);
		glRotatef(rotX, 1, 0, 0);
		glColorf(r, g, b);
		glutWireCube(1);
	}
	glPopMatrix();
}