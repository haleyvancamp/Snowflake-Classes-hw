#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofSetBackgroundColor(15, 10, 55);
    ofHideCursor();
    //tree.loadImage("tree2.jpg");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(15, 10, 55);
    //mySnowflake.update();
    Snowflake tempFlake;
    Snowflake2 tempFlake2;
    tempFlake.setup(ofRandom(0, ofGetScreenWidth()), 0);
    tempFlake2.setup(ofGetMouseX(), ofGetMouseY());
    mySnowflakes.push_back(tempFlake);
    myFlakes.push_back(tempFlake2);
    for(int i=0; i<mySnowflakes.size(); i++) {
        mySnowflakes[i].update();
        //float distance = ofDist(mySnowflakes[i].birth.x, mySnowflakes[i].birth.y, mySnowflakes[i].myPos.x, mySnowflakes[i].myPos.y);
        if(mySnowflakes[i].myPos.y > ofGetScreenHeight()) {
            mySnowflakes.erase(mySnowflakes.begin()+i);
           i--;
        }
    }
    for(int i=0; i<myFlakes.size(); i++) {
        myFlakes[i].update();
        float distance = ofDist(myFlakes[i].birth.x, myFlakes[i].birth.y, myFlakes[i].myPos.x, myFlakes[i].myPos.y);
        if(distance>300) {
            myFlakes.erase(myFlakes.begin()+i); //go into the vector of bbbles and erase the bubble at i
            i--;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //mySnowflake.draw();
    //tree.draw(0, 0);
    for(int i=0; i<mySnowflakes.size(); i++) {
        mySnowflakes[i].draw();
    }
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
