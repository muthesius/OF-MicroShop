#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  pos = 0;
  speed = 0;
  wave = 0;
  wave2 = 0;
  
  gui.setup("Parameter");
  
  gui.add( phase.set("Phase", 0.5, -1, 1) );
  gui.add( speed.set("Speed", 0, -2000, 2000) );
  
  gui.add( color.set("Fancy", ofColor::red, ofColor::black, ofColor::white));
  
}

//--------------------------------------------------------------
void ofApp::update(){
  pos = pos + ofGetLastFrameTime() * speed;
  
  if (pos >= ofGetWidth() + 100) {
    pos = -100;
  } else if (pos < -100) {
    pos = ofGetWidth() + 100;
  }
  
  wave = sin( ofGetElapsedTimef() * TWO_PI)  * ofGetHeight()/4 + ofGetHeight()/2;
  wave2 = sin( ofGetElapsedTimef() * TWO_PI + PI * phase)  * ofGetHeight()/4 + ofGetHeight()/2;
  
}

void ofApp::drawCircle(float x, float phase, ofColor theColor) {
  ofSetColor(theColor);
  ofCircle(x, phase, 100);
}

//--------------------------------------------------------------
void ofApp::draw(){
  
  ofSetCircleResolution(64);
  
  drawCircle(pos, wave, color);
  drawCircle(pos, wave2, ofColor(0, 0, 255, 127));
  
  ofDrawBitmapStringHighlight( ofToString( ofGetFrameRate() ), 250, 20);
  
  //ofTranslate(20, 50);
  gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  
  if (key == 'f') {
    ofToggleFullscreen();
  }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  //speed = x - ofGetWidth()/2;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
