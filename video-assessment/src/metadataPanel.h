#pragma once
#include "ofxFontStash.h"
//#include "ImageFile.h"
#include "VideoFile.h"

class metadataPanel
{
public:
	metadataPanel();
	~metadataPanel();

	//void getData(const ImageFile *img);		//Get data from image and save it to metadaDisplay string
	void getData(const VideoFile *img);		//Get data from video and save it to metadaDisplay string
	void setup(int x, int y);
	void draw(int x, int y);
	float getWidth();
	float getHeight();
	float getCordX();
	float getCordY();

private:

	////////////////////////////////////Methods///////////////////////////////////////////

	//string createCommonString(const File* f);//Get all common features for image and video 
	string metadataString;		//Text to display
	ofxFontStash font;			//Displaying object
	ofRectangle bboxMultiline;	//Frame
	ofRectangle title;	//Frame
	ofRectangle middle;	//Frame
	ofRectangle advanced;	//Frame
	string toString(double x);	//Return string with 2 digits precision
	ofColor getColor1(const File *f);
	ofColor getColor2(const File *f);

	/////////////////////////////////////Objects/////////////////////////////////////////

	float fontSize=14;	//font size
	float x;		//x coord where to draw
	float y;		//y coord where to draw
	float width;
	float height;
	int maxColumnSize;
	ofColor color1;
	ofColor color2;
	ofColor fontColor;
};

