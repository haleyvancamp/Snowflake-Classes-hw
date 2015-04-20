//
//  Snowflake.cpp
//  snowflakes
//
//  Created by Haley Van Camp on 4/18/15.
//
//

#include "Snowflake.h"


Snowflake:: Snowflake() {
    myPos = ofVec2f(400, 400);
    myVel = ofVec2f(ofRandom(8), ofRandom(8, 10));
    myColor = ofColor(200, 250, 250, ofRandom(80, 100));
    
}

void Snowflake::setup(float x, float y) {
    myPos = ofVec2f(x, y);
    birth = myPos;
}

void Snowflake::update() {
    myPos.y += myVel.y;
    //float distance = ofDist(birth.x, birth.y, myPos.x, myPos.y);
    /*if((myPos.x >= ofGetScreenWidth()) || (myPos.x <= 0)) {
        myPos.x = ofGetScreenWidth()/2;
        myPos.y = ofGetScreenHeight()/2;
    }
    if((myPos.y >= ofGetScreenHeight()) || (myPos.y <= 0)) {
        myPos.x = ofGetScreenWidth()/2;
        myPos.y = ofGetScreenHeight()/2;
    }*/
    
}

void Snowflake::draw() {
    ofSetColor(myColor);
    ofPushMatrix();
    ofTranslate(myPos.x, myPos.y);
    for(int i=0; i<7; i++) {
        ofRotate(ofRadToDeg(70));
        ofLine(0, 0, 6, 0);
    }
    ofPopMatrix();
    //ofCircle(myPos.x, myPos.y, 5);
}