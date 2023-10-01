#include "stdio.h"
int main (){
    //VAR
    int a = 6;
    int b = 5;

    //VAR END
int res = ("%d",a+b);
printf("Addition = %d",res);

//DIVIDE
int resDivide = ("%d", a/b);
    printf("\n Division = %d"  ,resDivide);
//MULTIPLY
        int resultMultiply = ("%d", a*b);
printf("\n Multiply = %d", resultMultiply);

//SQUARE
   int resSquareA = ("%d",a*a);
printf("\n Square (A) = %d", resSquareA);

// SQUARE B
int resSquareB = ("%d",b*b);
printf("\n\t\bSquare (B) = %d", resSquareB);
                        
                        printf("\nALL OF THEM IN ONE LINE:.");
                    printf("\t%d %d %d %d %d", res,resDivide,resultMultiply,resSquareA,resSquareB);

                
    return 0;
}