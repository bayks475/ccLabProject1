#pragma once

#include "ofMain.h"
#include "fireFly.h"
#include "eye.h"

# define NUM 400


class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);

    fireFly fireFlies[NUM];
    eye eyes1;
    
    //images
    ofImage fairy;
    ofImage woods;
    ofImage balloon;
    
    //sound
    ofSoundPlayer GeanJenie;
    ofSoundPlayer owl;
    ofSoundPlayer forest;

};
