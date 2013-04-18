//
//  Dihedral3.cpp
//  thesisOBJ
//
//  Created by Kim Ash on 3/29/13.
//  Copyright (c) 2013 Kim Ash. All rights reserved.
//

#include <iostream>
#include "Dihedral3.h"
#include "ofMain.h" 
#include "ofxObjLoader.h"
#include "ofx3DModelLoader.h"

void Dihedral3::setup(ofVec3f pos){
    this->pos = pos;
    ofMesh myMesh;
    //now my mesh is full of obj
//    tri.loadModel("triangle2.obj");
}

void Dihedral3::display(){
    ofPushStyle();
    tri.setPosition(pos.x, pos.y, pos.z);
    tri.draw();
    ofPopStyle();
}

void Dihedral3::motionA(){  //rotate 60 degrees CCW
    
}

void Dihedral3::motionB(){  //horizontal flip
    
}