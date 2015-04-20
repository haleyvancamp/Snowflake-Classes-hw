//
//  Snowflake2.h
//  snowflakes
//
//  Created by Haley Van Camp on 4/19/15.
//
//

#ifndef __snowflakes__Snowflake2__
#define __snowflakes__Snowflake2__

#include <ofMain.h>


class Snowflake2 {
    
public:
    
    Snowflake2(); // constructor
    
    void setup(float x, float y);
    void update();
    void draw();
    
    ofVec2f myPos;
    ofVec2f myVel;
    ofVec2f birth;
    float red;
    float green;
    float blue;
    
};


#endif /* defined(__snowflakes__Snowflake2__) */
