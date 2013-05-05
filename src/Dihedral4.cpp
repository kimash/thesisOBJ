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
    design.loadImage("squareTex.png");
    ofxObjLoader::load("square.obj", meshy);
    meshy.enableTextures();
    //centering object
    ofVec3f centroid = meshy.getCentroid();
    for(int i = 0; i < meshy.getNumVertices(); i++){
        meshy.getVertices()[i] = meshy.getVertices()[i] -    centroid;
    }
    //top left
    /*meshy.addVertex(ofVec2f(42.362849, 27.510546));
    meshy.addTexCoord(ofVec2f(0, 0));
    //bottom left
    meshy.addVertex(ofVec2f(46.362849, 23.510546));
    meshy.addTexCoord(ofVec2f(0, design.getHeight()));
    //top right
    meshy.addVertex(ofVec2f(46.362849, 31.510546));
    meshy.addTexCoord(ofVec2f(design.getWidth(), 0));
    //bottom right
    meshy.addVertex(ofVec2f(50.362849, 27.510546));
    meshy.addTexCoord(ofVec2f(design.getWidth(), design.getHeight()));*/
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
    ofScale(600,600,600);   //need to rescale tiny object
//    design.bind();  //binding design - makes faces disappear?
    meshy.draw();
//    design.unbind();
    ofPopMatrix();
    ofPopStyle();
}

void Dihedral4::motionA(){  
    //90 deg CCW about axis thru center parallel to z
    ofQuaternion dQ;
    dQ.makeRotate(-1.5, 0, 0, 1);
    current *= dQ;
}

void Dihedral4::motionB(){  
    //180 deg CCW about axis across center parallel to y
    ofQuaternion dQ;
    dQ.makeRotate(-3, 0, 1, 0);
    current *= dQ;
}