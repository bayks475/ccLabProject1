//
//  fireFly.h
//  fireFlies
//
//  Created by Selin Baykal on 10/22/12.
//
//
#pragma once

#include "ofMain.h"

class fireFly {
public:
    
    //variables
	float xPos;
	float yPos;
    

	float transparent;
    float inc;
    float sz;
    float pos;
    float angle;
    float freq;
    float amp;
    
    
    float radius;
    float speedX;
    float speedY;
    int directionX;
    int directionY;
    

    //methods
	void setup();
	void update(float mx, float my);
    void draw();

    
    ofImage spark2;

 
};
