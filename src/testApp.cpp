#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    triangle.setup(ofVec3f(ofGetWidth()/3, ofGetHeight()/2, 0));
    square.setup(ofVec3f(2*ofGetWidth()/3, ofGetHeight()/2, 0));
    hexagon.setup(ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 0));
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
//    cam.begin();
    triangle.display();
    square.display();
    hexagon.display();
//    cam.end();
    
    //useful bits of code:
 /*   cam.lookAt(meshy.getCentroid());
    ofTranslate(-meshy.getCentroid());
  ofTranslate(meshy.getCentroid()); */
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (ofGetKeyPressed('a')) {
        triangle.motionA();
    }
    
    if (ofGetKeyPressed('b')) {
        triangle.motionB();
    }
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