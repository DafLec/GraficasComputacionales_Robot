#include "cCube.h"

Cube::Cube(float _x, float _y, float _z, float _r, float _g, float _b)
{
	x = _x;
	y = _y;
	z = _z;
	r = _r;
	g = _g;
	b = _b;
}

Cube::~Cube()
{
}

void Cube::draw(float _x)
{
	glPushMatrix();
	{
		flTranslatef(x, y, z);
		glRotatef(rotX, 1, 0, 0);
		glColorf(r, g, b);
		glutWireCube(_x);
	}
	glPopMatrix();
}

void Cube::drawRectangle(float _x)
{
	glPushMatrix();
	{
		glScalef(_x,1.0f,1.0f);
		flTranslatef(x, y, z);
		glColorf(r, g, b);
		glutWireCube(1);
	}
	glPopMatrix();
}