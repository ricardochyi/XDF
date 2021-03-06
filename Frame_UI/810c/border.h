#ifndef BORDER_HH__
#define BORDER_HH__
#include <QColor>
#include <QFont>

//Contains the different distance from the textbrowser to four edges
class Border{
private:
    int m_leftEdge,m_rightEdge,m_topEdge,m_downEdge;// four distances


public:
    Border(int height=800, int width=600);

    void clear();//Reset all value to defalut one

    //Get and set function for private data member
    int leftEdge(){return m_leftEdge;}
    int rightEdge(){return m_rightEdge;}
    int topEdge(){return m_topEdge;}
    int downEdge(){return m_downEdge;}

    void leftEdge(int left){m_leftEdge=left;}
    void rightEdge(int right){m_rightEdge=right;}
    void topEdge(int top){m_topEdge=top;}
    void downEdge(int down){m_downEdge=down;}


};
#endif // BORDER_H
