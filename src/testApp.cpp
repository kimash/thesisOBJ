#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
//    ofSetFullscreen(true);
//    ofHideCursor();
    startTime = ofGetSeconds();
//    cout << "startTime: " << startTime << endl;
    ofEnableAlphaBlending();
    ofBackground(0);
    ofSetFrameRate(60);

    int sqDist = 320;
    int xOffset = sqDist/2;
    int yOffset = 200;
    //up pointing triangles
    for (int i = 0; i < 8; i++) {
        if (i < 4) {
            triangles[i].setup(ofVec3f(xOffset + i*sqDist, yOffset/2, 0), -90, 0);
        }
        else {
           triangles[i].setup(ofVec3f(xOffset + (i-4)*sqDist, 2.1*yOffset, 0), -90, 0); 
        }
    } 
    
    //down pointing triangles
    for (int i = 8; i < 16; i++) {
        if (i < 12) {
            triangles[i].setup(ofVec3f(xOffset + (i-8)*sqDist, 3*yOffset/2, 0), 90, 0);
        }
        else {
           triangles[i].setup(ofVec3f(xOffset + (i-12)*sqDist, 3.1*yOffset, 0), 90, 0); 
        }
    }
    
    //right pointing triangles
    for (int i = 16; i < 24; i++) {
        if (i < 20) {
            triangles[i].setup(ofVec3f(xOffset + (i-16)*sqDist + yOffset/2, yOffset, 0), -90, 30);
        }
        else {
            triangles[i].setup(ofVec3f(xOffset + (i-20)*sqDist + yOffset/2, yOffset + sqDist, 0), -90, 30);
        }
    }
    
    //left pointing triangles
    for (int i = 24; i < 32; i++) {
        if (i < 28) {
            triangles[i].setup(ofVec3f(xOffset + (i-24)*sqDist -yOffset/2, yOffset, 0), -90, -30);
        }
        else {
            triangles[i].setup(ofVec3f(xOffset + (i-28)*sqDist -yOffset/2, yOffset + sqDist, 0), -90, -30);
        }
    }
  
    //squares
    for (int i = 0 ; i < 12; i++) {
        if (i < 4) {
            squares[i].setup(ofVec3f(xOffset + i*sqDist, yOffset, 0));
        }
        else {
            squares[i].setup(ofVec3f(xOffset + (i-4)*sqDist, yOffset + sqDist, 0));
        }
    }
    
    //hexagons
    for (int i = 0; i < 15; i++) {
        if (i < 5) {
            hexagon[i].setup(ofVec3f((i)*ofGetWidth()/4, ofGetWidth()/32, 0));
        }
        else if(i >= 5 && i < 10) {
            hexagon[i].setup(ofVec3f((i-5)*ofGetWidth()/4, ofGetHeight()/2, 0));
        }
        else {
            hexagon[i].setup(ofVec3f((i-10)*ofGetWidth()/4, 30*ofGetHeight()/32, 0));
        }
    }
    
}

//--------------------------------------------------------------
void testApp::update(){
    int elapsedSec = abs(ofGetSeconds() - startTime);
    
    if (elapsedSec % 5 == 0 && elapsedSec != 0 && elapsedSec % 7 != 0 && elapsedSec % 9 != 0) {
//        cout << "ofGetSeconds: " << ofGetSeconds() << endl;
//        cout << "timeDiff: " << abs(ofGetSeconds() - startTime) <<endl;
        for (int i = 0; i < 32; i++) {
            triangles[i].motionA();
        }
        for (int i = 0; i < 12; i++) {
            squares[i].motionA();
        }
        for (int i = 0; i < 15; i++) {
            hexagon[i].motionB();
        }
    }
    
    if (elapsedSec % 7 == 0 && elapsedSec != 0 && elapsedSec % 5 != 0 && elapsedSec % 9 != 0) {
        for (int i = 0; i < 16; i++) {
            triangles[i].motionB();
        }
        for (int i = 16; i < 32; i++) {
            triangles[i].motionB2();
        }
        for (int i = 0; i < 15; i++) {
            hexagon[i].motionA();
        }
    }

    if (elapsedSec % 9 == 0 && elapsedSec != 0 && elapsedSec % 5 != 0 && elapsedSec % 7 != 0){
        for (int i = 0; i < 12; i++) {
            squares[i].motionB();
        }
        
        for (int i = 0; i < 15; i++) {
            hexagon[i].motionC();
        }
    }        
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i = 0; i < 32; i++) {
        triangles[i].display();
    }
    
    for (int i = 0; i < 8; i++) {
        squares[i].display();
    }
    
    for (int i = 0; i < 15; i++) {
         hexagon[i].display();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}