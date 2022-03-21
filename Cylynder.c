#include<stdio.h>
#include <math.h>

int cylinder(double r, double h, double* V, double* S){
        *V = M_PI*pow(r,2)*h;
        *S = 2 * M_PI * r * (r+h);
        return 0;
}  

int main(){
    double r,h,V,S;

    

    while (scanf("%lf %lf",&r,&h) != EOF)
    {
        if (r > 0 && h > 0)
        {
            cylinder(r,h,&V,&S);
            printf("S = %.2lf \n",S);
            printf("V = %.2lf",V);

        }else{
            printf("Invalid data!");
            return 1;
        }
        
    }
    return 0;
}