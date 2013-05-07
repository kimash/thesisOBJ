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

void Dihedral3::setup(ofVec3f pos, float rotX, float rotY){
    this->pos = pos;
    this->rotX = rotX;
    this->rotY = rotY;
    
    ofEnableNormalizedTexCoords();
    design.loadImage("triTex.png");
    //now my mesh is full of obj
    ofxObjLoader::load("triangle2.obj", meshy);
    meshy.enableTextures();
    //centering object
    ofVec3f centroid = meshy.getCentroid();
    for(int i = 0; i < meshy.getNumVertices(); i++){
        meshy.getVertices()[i] = meshy.getVertices()[i] -    centroid;
    }
    
}

void Dihedral3::display(){
    ofPushStyle();
//    ofSetColor(42, 53, 105);
    ofPushMatrix();
    ofTranslate(meshy.getCentroid());
    ofTranslate(pos.x, pos.y, pos.z);   //give shape position
    ofMatrix4x4 view;
    current.get(view);
    ofMultMatrix(view);
    ofTranslate(-meshy.getCentroid());
    ofRotateX(rotX);  //orient in x-y plane
    ofRotateY(rotY);
    ofScale(575,575,575);
    design.getTextureReference().bind();
    meshy.draw();
//    int vertexId = (ofGetFrameNum()/60) % meshy.getNumVertices();
//    ofSetColor(255, 0,0);
//    ofSphere(meshy.getVertex(vertexId), .01);
    design.getTextureReference().unbind();
    ofPopMatrix();
    ofPopStyle();
}

void Dihedral3::update(){
    ofQuaternion dQ;
    dQ.makeRotate(-1, 0, 0, 1);
    current *= dQ;
}

void Dihedral3::motionA(){  
    //120 deg CCW about axis thru center parallel to z
        ofQuaternion dQ;
        dQ.makeRotate(-2, 0, 0, 1);
        current *= dQ;
}

void Dihedral3::motionB(){  
    //180 deg CCW about axis across center parallel to y
    ofQuaternion dQ;
    dQ.makeRotate(-3, 0, 1, 0);
    current *= dQ;
}

void Dihedral3::motionB2(){
    //motionB() for triangles pointing left or right
    ofQuaternion dQ;
    dQ.makeRotate(-3, 1, 0, 0);
    current *= dQ;
}