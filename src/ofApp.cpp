#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(400, 400);
    ofSetFrameRate(15);
    ofBackground(0, 0, 0);
    ofSetBackgroundAuto(false);
    font.load("ji.ttf", 30);
    
    /*for (int i = 0; i < num; i++) {
        ji_x[i] = ofRandom(0, ofGetWidth());
        ji_y[i] = ofRandom(0, ofGetHeight());
        
    }*/

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    for (int i = 0; i < num; i++) {
        ji_x[i] = ofRandom(-75, ofGetWidth());
        ji_y[i] = ofRandom(-15, ofGetHeight()+15);
        
    
    font.drawString("White", ji_x[i], ji_y[i]);
    }
    /*for (int i = 0; i < num; i++) {
    font.drawString("White", ji_x[i], ji_y[i]);

    }*/

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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