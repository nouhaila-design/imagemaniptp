#include "spotlight.h"
#include <math.h>


 spotlight::spotlight(string filename,int x,int y):Image()
{
    readFromFile(filename);
      for(unsigned i=0;i<width();i++)
        for(unsigned j=0;j<height();j++){

           HSLAPixel &P=getPixel(i,j);
           auto s=sqrt((x-i)*(x-i)+(y-j)*(y-j)) ;
            if(s>160){
                P.l=0.2*P.l;
            }else {
                P.l=(1-((s*0.5)/100))*P.l;
}
}
}
