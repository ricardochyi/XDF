#ifndef FRAME_HH__
#define FRAME_HH__
#include "border.h"
#include "text.h"
#include <string>
#include <list>


class Frame{
    //This class represent a rectangle area to fill in all the Text or Image
    private:
        int frameNum;
        Border border;
        std::list<Frame> insideFrame;//If necessary  //TODO: choose better name:
        //list<Image> imageList;
        Text text;//Not sure make it a list or not
        double width,height;
        double startX,startY;
    //When change the border, need to update the width and height at the same time
    public:
        Frame(double startX,double startY,double height,double width,int FrameNum);
        void clear();//Reset all information to defalut value

        void insert(char *s,bool withLink);//insert a string with a link or not

        void insertString(const char *s);//insert a string with a link or not

        void insertChar(char  c);//insert a character with certain style

        void insertSpace(); // insert a space

        void insertReturn();// insert return

        int  getframeNum(){return frameNum;}
        void addContent(Content c);
        void addTextLine(TextLine& tl);
        void setText(Text& t);
        Text getText();
};



#endif
