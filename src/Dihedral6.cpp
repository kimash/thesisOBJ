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
    ofSetColor(54, 136, 176);
    ofPushMatrix();
    ofTranslate(meshy.getCentroid());
    ofTranslate(pos.x, pos.y, pos.z);   //give shape position
    ofMatrix4x4 view;
    current.get(view);
    ofMultMatrix(view);
    ofTranslate(-meshy.getCentroid());    
    ofRotateX(90);  //orient in x-y plane
    ofScale(1000,1000,1000);
    meshy.draw();
    ofPopMatrix();
    ofPopStyle();
}

void Dihedral6::motionA(){  
    //180 deg CCW about axis across center parallel to x
    ofQuaternion dQ;
    dQ.makeRotate(1, 1, 0, 0);
    current *= dQ;
}

void Dihedral6::motionB(){  
    //120 degrees CCW about axis thru center parallel to z
    
}

void Dihedral6::motionC(){  
    //180 degrees CCW about axis thru center parallel to z
    
}