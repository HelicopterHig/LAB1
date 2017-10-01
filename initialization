#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc, char *argv[])
{
    double number;
    char destiny;

    number = atof(argv[1]);
   
    
    if ( argc == 2) {
        destiny = 'C';

        printf("%.2f C\n", number);
        printf("%.2f F\n", number * (9.0 / 5.0) + 32.0);
        printf("%.2f K\n", number + 273.15);
        printf("\n");
        destiny = 'F';

        printf("%.2f F\n", number);
        printf("%.2f C\n", (number - 32.0) * 5.0 / 9.0);
        printf("%.2f K\n", (number - 32.0) * 5.0 / 9.0 + 273.15);
        printf("\n");
         destiny = 'K';

        printf("%.2f K\n", number);
        printf("%.2f C\n", number - 273.15);
        printf("%.2f F\n", (number - 273.15) * (9.0 / 5.0) + 32.0);
        printf("\n");
    }
    else 
    { 
        destiny = *argv[2];
        if ( destiny == 'C'){
            printf("%.2f C\n", number);
            printf("%.2f F\n", number * (9.0 / 5.0) + 32.0);
            printf("%.2f K\n", number + 273.15);
        }
        if ( destiny == 'F'){
            printf("%.2f F\n", number);
            printf("%.2f C\n", (number - 32.0) * 5.0 / 9.0);
            printf("%.2f K\n", (number - 32.0) * 5.0 / 9.0 + 273.15);
        }
        if ( destiny == 'K'){
            printf("%.2f K\n", number);
            printf("%.2f C\n", number - 273.15);
            printf("%.2f F\n", (number - 273.15) * (9.0 / 5.0) + 32.0);
        }   
    }
}
