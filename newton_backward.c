#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, n;
    float X, x[10], y[10], f[10][10], p=1.0, s=0.0, u, h;
    printf("--------Output---------");
    printf("Enter the element - 1");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        printf("\nEnter the values of x[i] and y[i] respectively:");
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
    }
    h=x[1]-x[0];
    printf("\n Enter the value of X to find the value of y");
    scanf("%f", &X);
    u=(X-x[n])/h;
    s=y[n];
    for(j=0;j<=n;j++){
        f[0][j]=y[j];
    }
    for(i=1; i<=n; i++){
        for(j=0; j<=n; j++)
            f[i][j]=f[i-1][j]-f[i-1][j-1];
        
    }
    for(i=1;i<=n;i++){
        p=p*(u+i-1)/i;
        s=s+p*f[i][n];
    }
    
    printf("y(%f)=%f\n", X, s);
}
