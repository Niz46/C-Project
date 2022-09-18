#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>


int main(){
    int hrs,mins,secs;
    time_t s, val = 1;
    struct tm *curr_time;
    s = time(NULL);
    curr_time = localtime(&s);
    hrs = curr_time-> tm_hour;
    mins = curr_time-> tm_min;
    secs = curr_time-> tm_sec;
    
    while (1)
    {
        /* code */
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("\n\t\t\t\t\t ___________________________________________________________________________________________");
        printf("\n\t\t\t\t\t|                                                                                           |");
        printf("\n\t\t\t\t\t|                                                                                           |");
        printf("\n\t\t\t\t\t|\t                             THIS IS MY CLOCK PROJECT IN C PROGRAM                       |");
        printf("\n\t\t\t\t\t|                                                                                           |");
        printf("\n\t\t\t\t\t|\t                                     HH  :  MM  :  SS                                    |");
        printf("\n\t\t\t\t\t|\t                                    %02d : %02d : %02d                                   |", hrs,mins,secs);
        printf("\n\t\t\t\t\t|                                                                                           |");
        printf("\n\t\t\t\t\t|                                                                                           |");
        printf("\n\t\t\t\t\t|___________________________________________________________________________________________|");

        fflush(stdout);

        secs++;

        if (secs == 59)
        {
            /* code */
            mins += 1;
            secs = 0;
        }
        if (mins == 59)
        {
            /* code */
            hrs += 1;
            mins = 0;
        }
        if (hrs == 24)
        {
            /* code */
            hrs = 0;
            mins = 0;
            secs = 0;
        }
        sleep(1);        
    }
    
}