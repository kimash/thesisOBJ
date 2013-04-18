//
//  Dihedral6.h
//  thesisOBJ
//
//  Created by Kim Ash on 4/1/13.
//  Copyright (c) 2013 Kim Ash. All rights reserved.
//

#ifndef thesisD4_Dihedral6_h
#define thesisD4_Dihedral6_h
#include "ofMain.h"
#include "ofxObjLoader.h"
#include "ofx3DModelLoader.h"

class Dihedral6
{
public:
    ofVec3f pos;
    //float side; //length of side
    
    void setup(ofVec3f pos/*, float side*/);
    void display();
    void motionA();
    void motionB();
    void motionC();
};


#endif
