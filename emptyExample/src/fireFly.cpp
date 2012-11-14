//
//  fireFly.cpp
//  fireFlies
//
//  Created by Selin Baykal on 10/22/12.
//
//

#include "fireFly.h"

void fireFly::setup() {
    
  
	xPos = ofRandom(0,ofGetScreenWidth());
	yPos = ofRandom(0,ofGetScreenHeight());
	sz = ofRandom(10,30);
    
	pos = ofRandom(50,100);
    radius= 15;
    inc= ofRandom(3,9);
    
    speedX=2;
    speedY=1.7;
    
    directionX=1;
    directionY= -1;
	
    angle = ofRandom(0.0,2*PI);
    freq = ofRandom(0.05, 0.2);
    
    spark2.loadImage("spark2.png");


}
//----------------------------------------------------------
void fireFly::update(float mx, float my) {
 
    angle = angle + freq;
    amp = 200;
    transparent = (sin(angle + (2*PI)) * amp);

    
    if (transparent>=255){
        inc*=-1;
    }
    
    if (transparent <= 0) {
        inc *= -1;
        xPos = xPos + (mx - xPos) / ofRandom (3, 5);
        yPos = yPos + (my - yPos) / ofRandom (3, 7);
    
        
        if (xPos <= mx + 50 && xPos >= mx -50 && yPos <= my + 50 && xPos >= my -50){
            
            xPos = mx + ofRandom (-pos, pos);
            yPos = my + ofRandom (-pos, pos);

        }
        
    }
   
    if((xPos> ofGetWidth()-radius)||(xPos<radius)){
         xPos+= speedX * directionX;
    }
    

    if((yPos> ofGetHeight()-radius)|| (yPos<radius)){
        
           yPos+=speedY* directionY;
    }


}
//----------------------------------------------------------
void fireFly::draw() {
    
    //spark
    ofFill();
    ofSetColor(255,255,255,transparent);
    spark2.draw(xPos, yPos,sz,sz);
    
		
	}
//----------------------------------------------------------

