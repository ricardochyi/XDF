#include "frame.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

Frame::Frame(int startX, int startY, int height, int width, int FrameNum):m_frameNum(FrameNum),
    m_height(height),m_width(width),m_startX(startX),m_startY(startY),m_border(height,width),m_text()
{}

void Frame::clear(){

}//Reset all information to defalut value
void Frame::insertChar(char c){
    m_text.insertChar(c);
}

void Frame::insertString(const char *s){
    m_text.insertString(s);
}

void Frame::insert(char *s, bool withLink){
}

void Frame::insertSpace(){
    m_text.insertChar(' ');
} // insert a space
void Frame::insertReturn(){
    m_text.insertReturn();
}// insert return


void Frame::addTextLine(TextLine& tl){
    m_text.addTextLine(tl);
}

void Frame::addContent(Content c){
    m_text.addContent(c);
}