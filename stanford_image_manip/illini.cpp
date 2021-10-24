#include "illini.h"

illini::illini()
{

}
illini::illini(string filename, int c1, int c2){
    readFromFile(filename);
    color1=c1;
    color2=c2;




    for(unsigned x=0;x<width();x++){
        for(unsigned y=0;y<height();y++){
            HSLAPixel &P=getPixel(x,y);
            if(P.h<=color2&&P.h>=color1){
                if((color2-P.h)<(P.h-color1)){
                    P.h=color2;
                }else{
                    P.h=color1;
                     }
              }

          }

      }
}
