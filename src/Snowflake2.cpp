//
//  Snowflake2.cpp
//  snowflakes
//
//  Created by Haley Van Camp on 4/19/15.
//
//

#include "Snowflake2.h"



Snowflake2:: Snowflake2() {
    myPos = ofVec2f(400, 400); // setting position
    myVel = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10)); // setting velocity
    red = float(ofGetMouseX()/2); // red value changes depending on x value of mouse position
    green = float(ofGetMouseY()/2); // green value changes depending on y value
    blue = float(250);
    
    
}

void Snowflake2::setup(float x, float y) {
    myPos = ofVec2f(x, y);
    birth = myPos;
}

void Snowflake2::update() {
    myPos.y += myVel.y; // moves snowflake
  
    
}

void Snowflake2::draw() {
    ofSetColor(red, green , blue); // sets color
    ofPushMatrix();
     ofTranslate(myPos.x, myPos.y);
    // draws the snowflake
     for(int i=0; i<7; i++) {
     ofRotate(ofRadToDeg(70)); // each line is rotated to get the snowflake look
     ofLine(0, 0, 8, 0); // draws line
     }
     ofPopMatrix();
    
}