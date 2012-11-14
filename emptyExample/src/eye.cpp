//
//  fireFly.cpp
//  fireFlies
//
//  Created by Selin Baykal on 10/22/12.
//
//

#include "eye.h"


//----------------------------------------------------------
void eye::setup(){

}

void eye::draw() {
    
    x=832;
    y=105;
    s=15;
    eyeDistance=10;
    
   if ( ofGetFrameNum() % 90 > 8 ) {
       
       //left eye
       ofFill();
       ofSetColor(255);
       ofEllipse(x-eyeDistance, y, s, s/1.2); //white
       
       ofFill();
       ofSetColor(0);
       ofEllipse (x-eyeDistance, y, s/2.5, s/2.4); //pupil
       
       //right eye
       ofFill();
       ofSetColor(255);
       ofEllipse(x+eyeDistance, y, s, s/1.2); //white
       
       ofFill();
       ofSetColor(0);
       ofEllipse(x+eyeDistance, y, s/2.5, s/2.4); //pupil
       
        }else{
       ofFill();
       ofSetColor(255);
       ofEllipse(x-eyeDistance, y, s, 1.5);//narrowed left
       
       ofFill();
       ofSetColor(255);
       ofEllipse(x+eyeDistance, y, s, 1.5);//narrowed right

        }
    
    
}
//----------------------------------------------------------