/*
 Haley Van Camp
 4/20/15
 Snowflakes - classes
 */
#pragma once

#include "ofMain.h"
#include "Snowflake.h"
#include "Snowflake2.h"



class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    // declaring a vector of Snowflake and Snowflake2
    
    vector<Snowflake> mySnowflakes;
    vector<Snowflake2> myFlakes;
   
    
    //ofImage tree;
		
};
