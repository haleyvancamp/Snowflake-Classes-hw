//
//  Snowflake.cpp
//  snowflakes
//
//  Created by Haley Van Camp on 4/18/15.
//
//

#include "Snowflake.h"


Snowflake:: Snowflake() {
    myPos = ofVec2f(400, 400); // setting position
    myVel = ofVec2f(ofRandom(8), ofRandom(8, 10)); // setting velocity (less variation of speed)
    myColor = ofColor(200, 250, 250, ofRandom(80, 100)); // color set with alpha for transparent snowflakes
    
}

void Snowflake::setup(float x, float y) {
    myPos = ofVec2f(x, y);
    birth = myPos;
}

void Snowflake::update() {
    myPos.y += myVel.y; // moves snowflake

    
}

void Snowflake::draw() {
    ofSetColor(myColor); // sets color
    ofPushMatrix();
    ofTranslate(myPos.x, myPos.y);
    // draws the snowflake
    for(int i=0; i<7; i++) { // each line is rotated to get the snowflake look
        ofRotate(ofRadToDeg(70));
        ofLine(0, 0, 6, 0); // draws line
    }
    ofPopMatrix();
    
}