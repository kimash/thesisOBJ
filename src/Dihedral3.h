//
//  Dihedral3.h
//  thesisOBJ
//
//  Created by Kim Ash on 3/29/13.
//  Copyright (c) 2013 Kim Ash. All rights reserved.
//

#ifndef thesisD4_Dihedral3_h
#define thesisD4_Dihedral3_h

#include "ofMain.h" 
#include "ofxObjLoader.h"

class Dihedral3
{
public:
    ofVec3f pos;    //xyz position
    ofMesh meshy;   //load obj file into this mesh
    ofQuaternion current;
    ofQuaternion a;
    ofQuaternion b;
    
    void setup(ofVec3f pos);
    void display();
    void motionA();
    void motionB();
    void update();
};


#endif
