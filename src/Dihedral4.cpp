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

void Dihedral4::setup(ofVec3f pos){
    this->pos = pos;
    //now my mesh is full of obj
    ofxObjLoader::load("square.obj", meshy);
    //centering object
    ofVec3f centroid = meshy.getCentroid();
    for(int i = 0; i < meshy.getNumVertices(); i++){
        meshy.getVertices()[i] = meshy.getVertices()[i] -    centroid;
    }
}

void Dihedral4::display(){
    ofPushStyle();
    ofPushMatrix();
    ofTranslate(pos.x, pos.y, pos.z);   //give shape position
    ofRotateX(90);  //orient in x-y plane
    ofRotateY(45); //orient as square, not diamond
    ofScale(1000,1000,1000);
    meshy.draw();
    ofPopMatrix();
    ofPopStyle();
}

void Dihedral4::motionA(){  //rotate 90 degrees CCW
    
}

void Dihedral4::motionB(){  //horizontal flip
    
}