#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "sensor.h"


int main(int argc, char *argv[])
{
    int rez=0;
    struct sensor info[SIZE];
    int number = 0;

    while ( (rez = getopt(argc,argv,"htdn:f:")) != -1){
        switch (rez){
            case 'h': {
                printf("Here is manual (TBA)\n"); 
                printf("-n - standart output\n"); 
                printf("-t - sort by T\n"); 
                printf("-d - sort by D\n");
                printf("-f - path to file\n");
                break;
            };
            case 'f': {
                number=AddInfo(info, optarg);
                break;
            }
            case 't': {
                printf("\nSort by t\n");
                SortByT(info, number);
                print(info,number);
                break;
            };
            case 'd': {
                printf("\nSort by date\n");
                SortByDate(info,number);
                print(info,number);
                break;
            };
            case 'n': {
                print(info,number); 
                break;
            }
        };
    };
    return 0;
}