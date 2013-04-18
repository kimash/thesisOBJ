//
//  Dihedral4.cpp
//  thesisOBJ
//
//  Created by Kim Ash on 3/29/13.
//  Copyright (c) 2013 Kim Ash. All rights reserved.
//

#include <iostream>
#include "Dihedral4.h"
#include "ofMain.h"
#include "ofxObjLoader.h"
#include "ofx3DModelLoader.h"

void Dihedral4::setup(ofVec3f pos/*, float side*/){
    this->pos = pos;
//    this->side = side;
}

void Dihedral4::display(){
    ofPushStyle();
    ofPopStyle();
}

void Dihedral4::motionA(){  //rotate 90 degrees CCW
    
}

void Dihedral4::motionB(){  //horizontal flip
    
}