#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    int c,h,m;
    int s=0,i=1;
    char a[3];
    char aa[3] = "AM";
    printf("\n\n\n\t\t\tEnter your time formate HH:MM\n ");
    scanf("\n\n\n\t\t\t%d%d", &h,&m);
    printf("\nAM OR PM ");
    scanf("%s", a);

    if (strcmp(a,aa) == 0)
    {
        /* code */
        c=2;
    }else{
        c=1;
    }
    
    start:
        for ( i = 1; i < 43200; i++)
        {
            /* code */
            s++;
            if (s > 59)
            {
                /* code */
                m++;
                s=0;
            }
            if (m > 59)
            {
                /* code */
                h++;
                m=0;
            }
            if (h > 11)
            {
                /* code */
                c++;
                h=0;
                m=0;
                goto start;
            }
            
            Sleep(1000);
            system("cls");
            printf("\n\n\n\t\t\t%d:%d:%d", h,m,s);
            if (c%2 == 0)
            {
                /* code */
                printf("  AM");
            }else{
                printf("  PM");
            }
            
        }
        return 0;
}