#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main()
{
    float x,y,a;
    int textIndex=0;
    char text[]="I Love You";
    int textLen=sizeof(text)/
    sizeof(text[0])-1;
    system("color 0c");
    for(y=1.3;y>-1.0;y-=0.058)
    {
        for(x=-1.3;x<1.3;x+=0.025)
        {
            a=x*x+(y*y-1);
            if(a*a*a-x*x*y*y*y<=0.0)
            {
                putchar(text[textIndex]);
                textIndex=(textIndex+1)%textLen;
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
        textIndex=0;
    }
    return 0;
}
//嘻嘻