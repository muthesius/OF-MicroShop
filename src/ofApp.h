#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
  
  float pos;
  
  ofParameter<float> speed;
  ofParameter<ofColor> color;
  
  float wave;
  float wave2;
  
  void drawCircle(float x, float phase, ofColor theColor);
  
  ofxPanel gui;
  
  ofParameter<float> phase;
		
};
