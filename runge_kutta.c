#include<stdio.h>
#include<math.h>
float f(float x, float y){
    float m;
    m=(x-y)/(x+y);
    return m;
    
}

int main()
{
    float a, b, x, y, h, xn, m1, m2, m3, m4, m;
    printf("\n Enter the value of a, b, xn and h");
    scanf("%f %f %f %f",&a, &b, &xn, &h);
    x=a;
    y=b;
    printf("x=%0.3f y=%0.3f\n",x,y);
    while(x<xn){
        m1=f(x,y);
        m2=f((x+h/2.0),(y+m1*h/2.0));
        m3=f((x+h/2.0),(y+m2*h/2.0));
        m4=f((x+h),(y+m3*h));
        m=(1/6)*(m1+2*m2+2*m3+m4);
        y=y+h*m;
        x=x+h;
        printf("x=%0.3f y=%0.3f\n",x,y);
    }
}
