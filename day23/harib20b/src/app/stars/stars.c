#include "haribote.h"
#include "stdlibc.h"

void HariMain(void){
    char *buf;
    int win;
    int i;
    int x, y;
    
    api_initmalloc();
    buf = api_malloc(150 * 100);
    win = api_openwin(buf, 150, 100, -1, "star1");
    api_boxfillwin(win, 6, 26, 143, 93, 0); //黒
    
    for(i = 0; i < 50; i ++){
        x = (_rand() % 137) + 6;
        y = (_rand() % 67) + 26;
        api_point(win, x, y, 3); //黄
    }
    
    api_end();
}
