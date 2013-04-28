#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    startTime = ofGetSeconds();
    cout << "startTime: " << startTime << endl;
    ofEnableAlphaBlending();
    ofBackground(0);
    ofSetFrameRate(60);
//    ofSetVerticalSync(true);
    //use for loops with ? operator
    //up pointing triangles
    triangles[0].setup(ofVec3f(460, 80, 0), -90, 0);
    triangles[1].setup(ofVec3f(820, 80, 0), -90, 0);
    triangles[2].setup(ofVec3f(460, 440, 0), -90, 0);
    triangles[3].setup(ofVec3f(820, 440, 0), -90, 0);
    
    //down pointing triangles
    triangles[4].setup(ofVec3f(460, 280, 0), 90, 0);
    triangles[5].setup(ofVec3f(820, 280, 0), 90, 0);
    triangles[6].setup(ofVec3f(460, 640, 0), 90, 0);
    triangles[7].setup(ofVec3f(820, 640, 0), 90, 0);
    
    //right pointing triangles
    triangles[8].setup(ofVec3f(560, 180, 0), -90, 30);
    triangles[9].setup(ofVec3f(920, 180, 0), -90, 30);
    triangles[10].setup(ofVec3f(560, 540, 0), -90, 30);
    triangles[11].setup(ofVec3f(920, 540, 0), -90, 30);
    
    //left pointing triangles
    triangles[12].setup(ofVec3f(360, 180, 0), 90, -30);
    triangles[13].setup(ofVec3f(720, 180, 0), 90, -30);
    triangles[14].setup(ofVec3f(360, 540, 0), 90, -30);
    triangles[15].setup(ofVec3f(720, 540, 0), 90, -30);
    
    squares[0].setup(ofVec3f(460, 180, 0));
    squares[1].setup(ofVec3f(820, 180, 0));
    squares[2].setup(ofVec3f(460, 540, 0));
    squares[3].setup(ofVec3f(820, 540, 0));
    
    hexagon.setup(ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 0));
}

//--------------------------------------------------------------
void testApp::update(){
    int elapsedSec = abs(ofGetSeconds() - startTime);
    
    if (elapsedSec % 5 == 0 && elapsedSec != 0) {
//        cout << "ofGetSeconds: " << ofGetSeconds() << endl;
//        cout << "timeDiff: " << abs(ofGetSeconds() - startTime) <<endl;
        for (int i = 0; i < 8; i++) {
            triangles[i].motionA();
        }
    }
    
    if (elapsedSec % 7 == 0 && elapsedSec != 0) {
        for (int i = 0; i < 8; i++) {
            triangles[i].motionB();
        }
    }

    if (elapsedSec % 7 == 0 && elapsedSec != 0) {
        for (int i = 8; i < 16; i++) {
            triangles[i].motionB2();
        }
    }

    if (elapsedSec % 5 == 0 && elapsedSec != 0){
        for (int i = 0; i < 4; i++) {
             squares[i].motionA();
        } 
    }

    if (elapsedSec % 9 == 0 && elapsedSec != 0){
        for (int i = 0; i < 4; i++) {
            squares[i].motionB();
        } 
    }

    if (elapsedSec % 7 == 0 && elapsedSec != 0){
        hexagon.motionA();
    }

    if (elapsedSec % 5 == 0 && elapsedSec != 0) {
        hexagon.motionB();
    }

    if (elapsedSec % 9 == 0 && elapsedSec != 0) {
        hexagon.motionC();
    }
        
}

//--------------------------------------------------------------
void testApp::draw(){
//    cam.begin();
//    light.setPointLight();
    
    for (int i = 0; i < 16; i++) {
        triangles[i].display();
    }
    
    for (int i = 0; i < 4; i++) {
        squares[i].display();
    }
    
    hexagon.display();
//    cam.end();
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