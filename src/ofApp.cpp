/*
 Haley Van Camp
4/20/15
Snowflakes - classes
 */

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofHideCursor(); // so arrow isn't distracting
  
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(15, 10, 55); // set background to a dark blue
    // makes a temporary snowflake for both types of snowflakes, sets the position of both snowflakes, and pushes them into their vectors
    Snowflake tempFlake;
    Snowflake2 tempFlake2;
    tempFlake.setup(ofRandom(ofGetScreenWidth()), 0); // snowflake at top of screen with random x location
    tempFlake2.setup(ofGetMouseX(), ofGetMouseY()); // snowflake at mouse position
    mySnowflakes.push_back(tempFlake);
    myFlakes.push_back(tempFlake2);
    // variable for screen height
    float screenH = ofGetScreenHeight();
    // updates each snowflake in vector mySnowflakes
    for(int i=0; i<mySnowflakes.size(); i++) {
        mySnowflakes[i].update();
        // erases snowflakes in vector mySnowflakes when the reach the bottom of the screen
        if(mySnowflakes[i].myPos.y > screenH) {
            mySnowflakes.erase(mySnowflakes.begin()+i); //go into the vector of snowflakes and erase the snowflake at i
           i--;
        }
    }
    // updates each snowflake in vector myFlakes
    for(int i=0; i<myFlakes.size(); i++) {
        myFlakes[i].update();
        // calculates distance between the birth place and current place of snowflake
        float distance = ofDist(myFlakes[i].birth.x, myFlakes[i].birth.y, myFlakes[i].myPos.x, myFlakes[i].myPos.y);
        // if the snowflakes are more than 300 away from the mouse they are erased
        if(distance>300) {
            myFlakes.erase(myFlakes.begin()+i); //go into the vector of snowflakes and erase the snowflake at i
            i--;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //tree.draw(0, 0);
    // draws each snowflake in mySnowflakes
    for(int i=0; i<mySnowflakes.size(); i++) {
        mySnowflakes[i].draw();
    }
    // draws each snowflake in myFlakes
    for(int i=0; i<myFlakes.size(); i++) {
        myFlakes[i].draw();
    }
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
