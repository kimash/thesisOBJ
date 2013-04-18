#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    //triangle.setup(ofVec3f(300, 300, 0));

    ofxObjLoader::load("triangle2.obj", meshy);
//    cout << "verts? " << meshy.getNumVertices() << endl;
//    cout << "tris? " << meshy.getNumIndices()/3 << endl;
//    meshy.load("triangle2.ply");
    
    ofVec3f centroid = meshy.getCentroid();
    for(int i = 0; i < meshy.getNumVertices(); i++){
        meshy.getVertices()[i] = meshy.getVertices()[i] -    centroid;
        cout << meshy.getCentroid() << endl;
        cout << meshy.getVertex(i) << endl;
    }
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    triangle.display();
//    cam.lookAt(meshy.getCentroid());
    
    cam.begin();
    
    ofPushMatrix();
//    ofTranslate(-meshy.getCentroid());
    ofScale(1000,1000,1000);
  //  ofTranslate(meshy.getCentroid());
    glPointSize(10);
//    meshy.drawVertices();
//    meshy.drawWireframe();
    meshy.draw();
    ofPopMatrix();
    
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