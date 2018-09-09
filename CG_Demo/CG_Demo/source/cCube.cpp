#include "cCube.h"
#include <stdio.h>
#include <math.h>

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
        glTranslatef(x, y, z);
        glRotatef(rotX, 1, 0, 0);
        glColor3f(r, g, b);
        glutSolidCube(_x);
    }
    glPopMatrix();
}

void Cube::drawPrism2f(float _x, float _y)
{
    glPushMatrix();
    {
        glTranslatef(x, y, z);
        glScalef(_x,_y,1.0f);
        glColor3f(r, g, b);
        glutSolidCube(1);
    }
    glPopMatrix();
}

void Cube::drawPrism3f(float _x, float _y, float _z)
{
    glPushMatrix();
    {
        glTranslatef(x, y, z);
        glScalef(_x, _y, _z);
        glColor3f(r, g, b);
        glutSolidCube(1);
    }
    glPopMatrix();
}
