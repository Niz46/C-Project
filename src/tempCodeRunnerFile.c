
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