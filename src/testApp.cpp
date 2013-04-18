#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    triangle.setup(ofVec3f(500, 400, 0));
    square.setup(ofVec3f(800, 500, 0));
    hexagon.setup(ofVec3f(1100, 500, 0));

//    ofxObjLoader::load("triangle2.obj", meshy);
//    cout << "verts? " << meshy.getNumVertices() << endl;
//    cout << "tris? " << meshy.getNumIndices()/3 << endl;
    
//    ofVec3f centroid = meshy.getCentroid();
//    for(int i = 0; i < meshy.getNumVertices(); i++){
//        meshy.getVertices()[i] = meshy.getVertices()[i] -    centroid;
//        cout << meshy.getCentroid() << endl;
//        cout << meshy.getVertex(i) << endl;
//    }
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    cam.begin();
//    triangle.display();
//    square.display();
    hexagon.display();
//    cam.lookAt(meshy.getCentroid());
//    ofPushMatrix();
//    ofTranslate(-meshy.getCentroid());
//    ofScale(1000,1000,1000);
//  ofTranslate(meshy.getCentroid());
//    meshy.draw();
//    ofPopMatrix();    
    cam.end();
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