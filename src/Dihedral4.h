//
//  Dihedral4.h
//  thesisOBJ
//
//  Created by Kim Ash on 3/21/13.
//  Copyright (c) 2013 Kim Ash. All rights reserved.
//

#ifndef thesisD4_Dihedral4_h
#define thesisD4_Dihedral4_h
#include "ofMain.h"
#include "ofxObjLoader.h"

class Dihedral4
{
public:
    ofVec3f pos;
    ofMesh meshy;
    ofQuaternion current;
    ofImage design;
    
    void setup(ofVec3f pos);
    void display();
    void motionA();
    void motionB();
};

#endif