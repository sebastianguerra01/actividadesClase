#include <stdio.h>

// Date: 03/06/2022
// Developer: Sebastian Guerra
// Theme: Tarea 1

void DrawLetraT(int t)
// Para la letra T
{
    t=t*2;
    for(int v=1; v<=t; v++)
    {
        for(int h=1; h<=t; h++)
        {
            if((v==1 || v==(t*2) || h==t/2 ))
            {
               printf("* "); 
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void DrawLetraC(int k)
// Para la letra C
{
    k=k*2;
    for(int v=1; v<=k; v++)
    {
        for(int h=1; h<=k; h++)
        {
            if((v==1 || v==(k) || h==1 ))
            {
               printf("* "); 
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void DrawLetraTC(int t, int k)
// Para la letra TC
{
    t=t*2;
    k=k*2;
    for(int v=1; v<=t; v++)
    {
        for(int h=1; h<=t; h++)
        {
            if((v==1 || v==(t*2) || h==t/2 ))
            {
               printf("* "); 
            }
            else
            {
                printf("  ");
            }
        }
        printf("\t");
        for(int h=1; h<=k; h++)
        {
            if((v==1 || v==(k) || h==1 ))
            {
               printf("* "); 
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


int main()
{
   /* printf("Tadeo \n"); 
   DrawLetraT(5);
   printf("\n");
   printf("Ceron \n");
   DrawLetraC(5);
    */ 

   printf("\tTadeo Ceron \n");
   DrawLetraTC(5, 5);

        return(0);
}
