#include "app.h"
#include "public.h"
void main()
{
    oled_init();
    printf("max num is :%d \n",MAX(2*4+3,9));
}