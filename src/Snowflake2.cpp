//
//  Snowflake2.cpp
//  snowflakes
//
//  Created by Haley Van Camp on 4/19/15.
//
//

#include "Snowflake2.h"



Snowflake2:: Snowflake2() {
    myPos = ofVec2f(400, 400);
    myVel = ofVec2f(ofRandom(-10, 10), ofRandom(-10, 10));
    red = float(ofGetMouseX()/2);
    green = float(ofGetMouseY()/2);
    blue = float(250);
    
    
}

void Snowflake2::setup(float x, float y) {
    myPos = ofVec2f(x, y);
    birth = myPos;
}

void Snowflake2::update() {
    myPos.y += myVel.y;
    float distance = ofDist(birth.x, birth.y, myPos.x, myPos.y);
    
}

void Snowflake2::draw() {
    ofSetColor(red, green , blue);
    ofPushMatrix();
     ofTranslate(myPos.x, myPos.y);
     for(int i=0; i<7; i++) {
     ofRotate(ofRadToDeg(70));
     ofLine(0, 0, 8, 0);
     }
     ofPopMatrix();
    //ofCircle(myPos.x, myPos.y, 5);
}