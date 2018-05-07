#include<stdio.h>
float f(float x, float y)
{
    float f;
    f=x+y;
    return f;
}

int main()
{
    float a, b, h, x, y, xn, k;
    printf("\nEnter the values of a, b, xn, h" );
    scanf("%f %f %f %f",&a, &b, &xn, &h);
    x=a;
    y=b;
    printf("\n x=%0.3f y=%0.3f",x,y);
    while(x<=xn)
    {
        k=h*f(x,y);
        y=y+k;
        x=x+h;
        printf("\n x=%0.3f y=%0.3f",x,y);
    }
    
}
