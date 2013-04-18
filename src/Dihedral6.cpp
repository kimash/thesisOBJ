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

void Dihedral6::setup(ofVec3f pos/*, float side*/){
    this->pos = pos;
    //now my mesh is full of obj
    ofxObjLoader::load("hexagon2.obj", meshy);
    //centering object
    ofVec3f centroid = meshy.getCentroid();
    for(int i = 0; i < meshy.getNumVertices(); i++){
        meshy.getVertices()[i] = meshy.getVertices()[i] -    centroid;
    }
}

void Dihedral6::display(){
    ofPushStyle();
    ofPushMatrix();
    ofScale(1000,1000,1000);
    meshy.draw();
    ofPopMatrix();
    ofPopStyle();
}

void Dihedral6::motionA(){  //vertical flip
    
}

void Dihedral6::motionB(){  //rotate 120 degrees CCW about axis thru center
    
}

void Dihedral6::motionC(){  //rotate 180 degrees CCW about axis thru center
    
}