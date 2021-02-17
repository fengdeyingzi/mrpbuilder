#include "../header/base.h"
#include "../header/mrc_graphics.h"
#include "../header/mrc_android.h"
int32 timer;
int32 i;

void logoc(int32 data){
    cls(250,250,250);
    dtextline("test",10,10, 20,20,20, 0, 1);
    drect(0,0, 30,300,i,20,20);
    dline(0,0,300,300, 240,0,0);
    i+=8;
    if(i>255) {
        i = 0;
    }
    ref(0,0, 300,300);

}

int init(void){
    i = 0;
    cls(250,250,250);
    ref(0,0,300,300);
    timer = timercreate();
    // timerstart(timer, 100, 1, logoc, 1);
    printf("。。。。。。。。。。。。。。。。。。\n");
     BITMAP_565* bmp = readBitmap565("2.bmp.png");
     printf("draw.........");
     if(bmp!=NULL){
         drawBitmap565(bmp, 30,30);
bitmap565Free(bmp);
     }
     ref(0,0,SCRW,SCRH);

    return 0;
}

int event(int type,int p1,int p2){
    if(type == KY_UP){
        // exit();
    }
    return 0;
}

int pause(){
    return 0;
}

int resume(){
    return 0;
}

int exitApp(){
    return 0;
}