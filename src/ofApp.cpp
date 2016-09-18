#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	line.init();
	for (int i = 0; i < 500; i++) {
		int x = 0, y = 0;
		if (x <= ofGetWidth() && x >= 0) { // Protege al arreglo de pixeles que se salgan del mapa de bits en X
			if (y <= ofGetHeight() && y >= 0) {
				line.moveTo(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
			}
		}
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	line.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	line.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
