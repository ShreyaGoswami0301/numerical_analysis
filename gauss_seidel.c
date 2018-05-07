#include<stdio.h>
#include<math.h>
#define X 2

int main()
{
    int i, j, r;
    float a[X][X+1], s=0.00, x[X];
    float maxitr, aler, t, e, max;
   
    printf("Keep on entering the matrix");
    for(i=0; i<X; i++){
        for(j=0; j<X+1; j++)
        {
            scanf("%f",&a[i][j]);
            
        }
    }
    printf("Enter allowed error and maximum number of iterations");
    scanf("%f %f",&aler, &maxitr);
    
    for(r=1; r<=maxitr; r++)
    {
        max=0;
        for(i=0; i<X; i++)
            
        {
            for(j=0;j<X; j++)
            
           if(a[j]!=a[i])
           
               s+=a[i][j]*x[j];
               t=(a[i][j]-s)/a[i][j];
               e=fabs(x[i]-t);
               x[i]=t;
               
           
        
    }
        printf("%5d\t", r);
        for(i=0; i<X; i++)
        {
            printf("%9.4f \t", x[i]);
        }
        printf("\n");
        if(max<aler)
        {
            printf("Converses in %3d iteration\n", r);
            for(i=0; i<X; i++)
                printf("a[%3d]=%7.4f\n", i+1, x[i]);
            return 0;
        }
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
}

