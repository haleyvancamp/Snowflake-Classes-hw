//
//  Snowflake.h
//  snowflakes
//
//  Created by Haley Van Camp on 4/18/15.
//
//

#ifndef __snowflakes__Snowflake__
#define __snowflakes__Snowflake__

#include <ofMain.h>



class Snowflake {

public:
    
    Snowflake(); // constructor
    
    void setup(float x, float y);
    void update();
    void draw();
    
    ofVec2f myPos;
    ofVec2f myVel;
    ofVec2f birth;
    ofColor myColor;
    
};

#endif /* defined(__snowflakes__Snowflake__) */