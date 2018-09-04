#include "cCube.h"
#include "cRobot.h"

Cube* head;
Cube* neck;
Cube* chest;
Cube* belly;
Cube* pelvis;
Robot::Robot(float _x, float _y, float _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Robot::~Robot()
{
}

void Robot::arm(float _x){
	print("holi");
}
void Robot::leg(float _x){
	print("holi");
}
void Robot::torso(){
	glPushMatrix();
	{
		pelvis = new Cube(x, y, z, 0.78f, 0.78f, 0.78f);
		belly = new Cube(x, y + 1, z, 1.0f, 1.0f, 1.0f);
		chest = new Cube(x, y + 2, z, 1.0f, 0, 0);
		neck = new Cube(x, y + 3, z, 1.0f, 1.0 f, 1.0f);
		head = new Cube(x, y + 4, z, 1.0f, 0, 0);

		pelvis->drawRectangle(1.5f);
		belly->draw(1.0f);
		chest->drawRectangle(2.0f);
		neck->draw(0.5f);
		head->draw(0.7f);
	}
	glPopMatrix();
}
void Robot::draw(){
	glPushMatrix();
	{
		torso();
		arm(1.0);
		arm(-1.0);
		leg(1.0);
		leg(-1.0);
	}
	glPopMatrix();
}