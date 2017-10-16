#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
    float number;
    char destiny;

    

    if (argc == 1)
    {
        printf("Error! Enter the data.");
    }
    else
    {
	number = atof(argv[1]);

        if (argc == 2)
        {
            destiny = 'C';
            if (number < -273.15)
            {
                printf("Temperature < absolute zero for Celsius!\n");
            }
            else
            {
                printf("%.2f C\n", number);
            }
            if (number < -459.67)
            {
                printf("Temperature < absolute zero for Fahrenheit!\n");
            }
            else
            {
                printf("%.2f F\n", number * (9.0 / 5.0) + 32.0);
            }
            if (number < 0)
            {
                printf("Temperature < absolute zero for Kelvin!\n");
            }
            else
            {
                printf("%.2f K\n", number + 273.15);
            }
            printf("\n");
            destiny = 'F';

            if (number < -459.67)
            {
                printf("Temperature < absolute zero for Fahrenheit!\n");
            }
            else
            {
                printf("%.2f F\n", number);
            }
            if (number < -273.15)
            {
                printf("Temperature < absolute zero for Celsius!\n");
            }
            else
            {
                printf("%.2f C\n", (number - 32.0) * 5.0 / 9.0);
            }
            if (number < 0)
            {
                printf("Temperature < absolute zero for Kelvin!\n");
            }
            else
            {
            printf("%.2f K\n", (number - 32.0) * 5.0 / 9.0 + 273.15);
            }
            printf("\n");
            destiny = 'K';

            if (number < 0)
            {
                printf("Temperature < absolute zero for Kelvin!\n");
            }
            else
            {
            printf("%.2f K\n", number);
            }
            if (number < -273.15)
            {
                printf("Temperature < absolute zero for Celsius!\n");
            }
            else
            {
                printf("%.2f C\n", number - 273.15);
            }
            if (number < -459.67)
            {
                printf("Temperature < absolute zero for Fahrenheit!\n");
            }
            else
            {
            printf("%.2f F\n", (number - 273.15) * (9.0 / 5.0) + 32.0);
            }
            printf("\n");
        }
        else
        {

            destiny = *argv[2];
            if (destiny == 'C')
            {
                if (number < -273.15)
                {
                    printf("Temperature < absolute zero for Celsius!\n");
                }
                else
                {
                    printf("%.2f C\n", number);
                }
                if (number < -459.67)
                {
                    printf("Temperature < absolute zero for Fahrenheit!\n");
                }
                else
                {
                    printf("%.2f F\n", number * (9.0 / 5.0) + 32.0);
                }
                if (number < 0)
                {
                    printf("Temperature < absolute zero for Kelvin!\n");
                }
                else
                {
                    printf("%.2f K\n", number + 273.15);
                }
            }
            if (destiny == 'F')
            {
                if (number < -459.67)
                {
                    printf("Temperature < absolute zero for Fahrenheit!\n");
                }
                else
                {
                    printf("%.2f F\n", number);
                }
                if (number < -273.15)
                {
                    printf("Temperature < absolute zero for Celsius!\n");
                }
                else
                {
                    printf("%.2f C\n", (number - 32.0) * 5.0 / 9.0);
                }
                if (number < 0)
                {
                    printf("Temperature < absolute zero for Kelvin!\n");
                }
                else
                {
                    printf("%.2f K\n", number + 273.15);
                }
                if (destiny == 'K')
                {
                    if (number < 0)
                    {
                        printf("Temperature < absolute zero for Kelvin!\n");
                    }
                    else
                    {
                    printf("%.2f K\n", number);
                    }
                    if (number < -273.15)
                    {
                        printf("Temperature < absolute zero for Celsius!\n");
                    }
                    else
                    {
                        printf("%.2f C\n", number - 273.15);
                    }
                    if (number < -459.67)
                    {
                        printf("Temperature < absolute zero for Fahrenheit!\n");
                    }
                    else
                    {
                        printf("%.2f F\n", number * (9.0 / 5.0) + 32.0);
                    }
                }
            }
        }
        
 
    }
    return 0;
}
