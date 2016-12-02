#include <QImage>
#include <QPixmap>
#include <QPaintEvent>

class Image:public QImage{
private:
    QString m_filename;
    QImage m_image;
    int m_width;
    int m_height;
    double m_scale;
public:
    Image(QString filename):m_filename(filename){}
    ~Image(){}
    void load(){m_image(m_filename);}
    void paintEvent(QPaintEvent* event);//paint the image on screen
    void scaled(int width,int height);//change the scale of the image
    void scaled(double scale);
    void transformed(double degrees);//rotate the image
    bool save(QString filename);//save the image
};
void copy(Image image);
void cut(Image image);
Image paste();
