#include "testApp.h"

int balloonX;
int balloonY;

//--------------------------------------------------------------
void testApp::setup(){
	
    ofSetFrameRate(30); // framerate

    ofEnableSmoothing();
    ofSetVerticalSync(true);
    
    ofBackground(100);
    ofEnableAlphaBlending(); //for the transparency


    woods.loadImage("woods3.jpg");
    fairy.loadImage("fairy.png");
    balloon.loadImage("balloon.png");
    
    
    //fireflies
    for (int i = 0; i < NUM; i++) {
		fireFlies[i].setup();
	}
   
    //balloon
    balloonX = 530;
    balloonY = 20;
    
    //fairy sound
    GeanJenie.loadSound("Fairy.aif");
       
    //owl sound
    owl.loadSound("BirdOwl.aif");
    
    //forest sound
    forest.loadSound("ForestNight.aif");
    forest.play();
    forest.setVolume(0.75f);
    
}

//--------------------------------------------------------------
void testApp::update(){

	//fireflies
      for (int i = 0; i < NUM; i++) {
		fireFlies[i].update(mouseX,mouseY);
   }
   
 	// update the sound playing system:
	ofSoundUpdate();
}


//--------------------------------------------------------------

void testApp::draw(){

    
    //woods
    ofFill();
    ofSetColor(255,255,255,250);
    woods.draw(0,0);
    
    //eyes
    eyes1.draw();
    
    //fireflies
    for (int i = 0; i < NUM; i++) {
    fireFlies[i].draw();
    }
	
    //balloon
    if(mouseX>800 && mouseY<150){
        ofFill();
        ofSetColor(255,255,255);
        balloon.draw(balloonX,balloonY);
        owl.play();
  
    }
    
    //Fairy
    ofFill();
    ofSetColor(255,255,255);
    fairy.draw(mouseX,mouseY,100,100);
    
    
  }
//--------------------------------------------------------------

void testApp::mousePressed(int x, int y, int button){
    GeanJenie.play();
}

//--------------------------------------------------------------

void testApp::mouseReleased(int x, int y, int button){
    GeanJenie.stop();

    
}


