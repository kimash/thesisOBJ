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

void Dihedral3::setup(ofVec3f pos){
    this->pos = pos;
    //now my mesh is full of obj
    ofxObjLoader::load("triangle2.obj", meshy);
    //centering object
    ofVec3f centroid = meshy.getCentroid();
    for(int i = 0; i < meshy.getNumVertices(); i++){
        meshy.getVertices()[i] = meshy.getVertices()[i] -    centroid;
    }
}

void Dihedral3::display(){
    ofPushStyle();
    ofPushMatrix();
    ofRotateX(90);  //orient in x-y plane
    ofScale(1000,1000,1000);
    meshy.draw();
    ofPopMatrix();
    ofPopStyle();
}

void Dihedral3::motionA(){  //rotate 60 degrees CCW
    
}

void Dihedral3::motionB(){  //horizontal flip
    
}