#ifndef IMAGE_H
#define IMAGE_H
#include "PNG.h"
class Image : public PNG
{
public:
    using PNG::PNG;
    Image(string filename );
    void lighten(double amount=0.1);
     void rotateColor(double angle);
     void saturate(double amount=0.1);


};

#endif // IMAGE_H
