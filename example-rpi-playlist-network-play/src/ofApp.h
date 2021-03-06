#pragma once

#include "ofMain.h"
#include "ofxOMXPlayer.h"
#include "TerminalListener.h"
#include "ofxYouTubeVideoUtils.h"


class ofApp : public ofBaseApp, public ofxOMXPlayerListener, public KeyListener{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		
        ofxOMXPlayer omxPlayer;
        
        //ofxOMXPlayerListener
        void onVideoEnd(ofxOMXPlayerListenerEventData& e);
        void onVideoLoop(ofxOMXPlayerListenerEventData& e){ /*empty*/ };
    
        vector<string> videoIDs;
        int videoCounter;
        
        //KeyListener
        void onCharacterReceived(KeyListenerEventData& e);
        TerminalListener consoleListener;
        ofxOMXPlayerSettings settings;
        
    
        
        ofxYouTubeVideoUtils youTubeUtils;
        vector<YouTubeVideoURL> youTubeVideoURLs;
    
        bool doLoadNextMovie;
        void loadNextMovie();

};
