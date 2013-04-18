//
//  Dihedral6.cpp
//  thesisOBJ
//
//  Created by Kim Ash on 4/1/13.
//  Copyright (c) 2013 Kim Ash. All rights reserved.
//

#include <iostream>
#include "Dihedral6.h"
#include "ofMain.h"
#include "ofxObjLoader.h"
#include "ofx3DModelLoader.h"

void Dihedral6::setup(ofVec3f pos/*, float side*/){
    this->pos = pos;
    //this->side = side;
}

void Dihedral6::display(){
    ofPushStyle();
    ofPopStyle();
}

void Dihedral6::motionA(){  //vertical flip
    
}

void Dihedral6::motionB(){  //rotate 120 degrees CCW about axis thru center
    
}

void Dihedral6::motionC(){  //rotate 180 degrees CCW about axis thru center
    
}