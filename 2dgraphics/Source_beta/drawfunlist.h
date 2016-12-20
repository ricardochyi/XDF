#ifndef DRAW_FUNLIST_HH__
#define DRAW_FUNLIST_HH__

#include "shape.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <QtGui>
#include <QtCore>


/*
 @author: Seito Ryu  11/20/16
 @modifer: Bingyang Wen 12/2/16 "Build the connection between DrawFunList and Window, which shows graphs"
 @modifer: Bo fan       12/2/16 "Set specific draw functions"
 */

/**
 TODO: implement basic and complicated QT methods
*/
class DrawFunList{
private:
  std::map<std::string, void (DrawFunList::*)(const std::vector<double>&, const int&)> mapDrw;
  void moveTo(const std::vector<double>& operands, const int& currentIndex);
  void drawLine(const std::vector<double>& operands, const int& currentIndex);
  void drawRect(const std::vector<double>& operands, const int& currentIndex);
  void drawCubic(const std::vector<double>& operands, const int& currentIndex);
  void closePath(const std::vector<double>& operands, const int& currentIndex);
  void setNonStrokingColor(const std::vector<double>& operands, const int& currentIndex);
  void setStrokingColor(const std::vector<double>& operands, const int& currentIndex);
  void stroke(const std::vector<double>& operands, const int& currentIndex);
  void fill(const std::vector<double>& operands, const int& currentIndex);
  void setCTM(const std::vector<double>& operands, const int& currentIndex);
  QPainter* pQPainter;
  QPainterPath path;
  QColor color;
  QPen pen;
  QBrush brush;
  QTransform *transformer=new QTransform;

public:
    DrawFunList(QPainter*);
    ~DrawFunList();
    void draw(const std::string& currentOperator, const std::vector<double>& operands, const int& currentIndex);
    QPainterPath getPath();
    QColor getColor();
    QPen getPen();
    QBrush getBrush();
    QTransform getCTM();
};

#endif
