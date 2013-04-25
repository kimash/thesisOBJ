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
    design.allocate(100, 100, OF_IMAGE_COLOR_ALPHA);
    design.loadImage("squareTex2.png");
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
    ofSetColor(153, 55, 31);
    ofPushMatrix();
    ofTranslate(meshy.getCentroid());
    ofTranslate(pos.x, pos.y, pos.z);   //give shape position
    ofMatrix4x4 view;
    current.get(view);
    ofMultMatrix(view);
    ofTranslate(-meshy.getCentroid());
    ofRotateX(90);  //orient in x-y plane
    ofRotateY(45);  //orient as square, not diamond
    ofScale(700,700,700);   //need to rescale tiny object
    design.bind();  //binding design - changes mesh thickness?
    meshy.draw();
    design.unbind();
    ofPopMatrix();
    ofPopStyle();
}

void Dihedral4::motionA(){  
    //90 deg CCW about axis thru center parallel to z
    ofQuaternion dQ;
    dQ.makeRotate(-1, 0, 0, 1);
    current *= dQ;
}

void Dihedral4::motionB(){  
    //180 deg CCW about axis across center parallel to y
    ofQuaternion dQ;
    dQ.makeRotate(-1, 0, 1, 0);
    current *= dQ;
}