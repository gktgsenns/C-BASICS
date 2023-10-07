#include "stdio.h"
int main()
{
    FILE *fil;
    char text [100];

    fil = fopen("out.txt" , "w");
    while (1) 
    {
        if (fgets(text , sizeof(text) , stdin)== NULL)
        {
            break;
            
    }


    fprintf(fil , "%s" , text);
    
    fflush(fil);
    }
    
    fclose(fil);
    return 0;
}