#pragma once

#include "ofMain.h"
#include "Dihedral3.h"
#include "Dihedral4.h"
#include "Dihedral6.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    Dihedral3 triangles[16];
    Dihedral4 squares[4];
    Dihedral6 hexagon;
//    ofEasyCam cam;	
//    ofLight light;
    int startTime;
};
