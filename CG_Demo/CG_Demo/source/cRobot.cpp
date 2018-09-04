#include "cCube.h"
#include "cRobot.h"

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

}
void Robot::leg(float _x){

}
void Robot::torso(){

}
void Robot::draw(){
	torso();
	arm(1.0);
	arm(-1.0);
	leg(1.0);
	leg(-1.0);
}