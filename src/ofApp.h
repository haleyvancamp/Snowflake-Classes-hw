#pragma once

#include "ofMain.h"
#include "Snowflake.h"
#include "Snowflake2.h"
//#define number 50


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
    
        //Snowflake mySnowflake;
    
    vector<Snowflake> mySnowflakes;
    vector<Snowflake2> myFlakes;
    //Snowflake mySnowflakes[number];
    
    //ofImage tree;
		
};
