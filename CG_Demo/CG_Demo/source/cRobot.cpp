#include "cCube.h"
#include "cRobot.h"
#include <stdio.h>
#include <math.h>

Cube* head;
Cube* neck;
Cube* chest;
Cube* belly;
Cube* pelvis;
Cube* shoulder;
Cube* biceps;
Cube* forearm;
Cube* hand;
Cube* thigh;
Cube* shin;
Cube* foot;
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
    shoulder = new Cube(_x, y + 2.2f, z, 1.0f, 0, 0);
    biceps = new Cube(_x, y + 1.5f, z, 1.0f, 1.0f, 1.0f);
    forearm = new Cube(_x, y + 0.6f, z, 1.0f, 0, 0);
    hand = new Cube(_x, y - 0.2f, z, 0, 0, 1.0f);
    
    shoulder->draw(0.7f);
    biceps->draw(0.7f);
    forearm->drawPrism2f(1.0f, 1.3f);
    hand->draw(0.7f);
    
}
void Robot::leg(float _x){
    thigh = new Cube(_x, y - 1.0f, z, 1.0f, 1.0f, 1.0f);
    shin = new Cube(_x, y - 2.2f, z, 0, 0, 1.0f);
    foot = new Cube(_x, y - 2.8f, z + 0.3f, 0, 0, 1.0f);
    
    thigh->drawPrism3f(0.7f, 1.3f, 0.7f);
    shin->drawPrism3f(0.85f, 1.5f, 0.85f);
    foot->drawPrism3f(1.0f, 0.3f, 1.1f);
}
void Robot::torso(){
    glPushMatrix();
    {
        pelvis = new Cube(x, y + 0.2f, z, 0.78f, 0.78f, 0.78f);
        belly = new Cube(x, y + 1.1f, z, 1.0f, 1.0f, 1.0f);
        chest = new Cube(x, y + 2, z, 1.0f, 0, 0);
        neck = new Cube(x, y + 2.5f, z, 1.0f, 1.0f, 1.0f);
        head = new Cube(x, y + 3.0f, z, 0.0f, 0, 1.0f);
        
        pelvis->drawPrism2f(1.5f, 1.0f);
        belly->drawPrism2f(1.2f, 0.8f);
        chest->drawPrism2f(2.0f, 1.0f);
        neck->draw(0.5f);
        head->draw(0.7f);
    }
    glPopMatrix();
}
void Robot::draw(){
    glPushMatrix();
    {
        torso();
        arm(1.35f);
        arm(-1.35f);
        leg(0.5f);
        leg(-0.5f);
    }
    glPopMatrix();
}


