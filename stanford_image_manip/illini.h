#ifndef ILLINI_H
#define ILLINI_H
#include "image.h"

class illini:public Image
{
public:
    using Image::Image;
    illini();
    illini(string filename, int c1, int c2);

    int color1=11;
    int color2=216;
};





#endif // ILLINI_H
