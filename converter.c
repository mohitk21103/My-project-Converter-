#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Decimal to binary, hexadecimal & octal conversion
int decimal(void)
{
    int n, x;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("\n");

    printf("In which number system you want to convert it \n ");
    printf("\n");
    printf("For binary press      -> 1\n");
    printf("For hexadecimal press -> 2\n ");
    printf("For octal press      -> 3\n ");
    printf("\n");
    printf("enter here:");
    scanf("%d", &x);

    switch (x)
    {

    case 1:
    {
        //  For Binary

        int a[10], i;

        for (i = 0; n > 0; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
        printf("\n--------------------------------------\n");
        printf("\nBinary of Given Number is: ");
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
        printf("\n--------------------------------------\n");
        printf("\n");
        break;
    }

    case 2:
    {
        //  for Hexadecimal [10- 15 wale case include karo]

       int  rem, i = 0;
        char hexnum[50];
        
        while (n != 0)
        {
            rem = n % 16;
            if (rem < 10)
                rem = rem + 48;
            else
                rem = rem + 55;
            hexnum[i] = rem;
            i++;
            n = n / 16;
        }
        printf("\n--------------------------------------\n");
        printf("\nEquivalent Value in Hexadecimal = ");
        for (i = i - 1; i >= 0; i--)
            printf("%c", hexnum[i]);
        printf("\n--------------------------------------\n");
        printf("\n");
        break;
    }
    case 3:
    {
        // for octal

        int a[10], i;

        for (i = 0; n > 0; i++)
        {
            a[i] = n % 8;
            n = n / 8;
        }
        printf("--------------------------------------\n");
        printf("\n Octal of Given Number is :");
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", a[i]);
        }
        printf("\n");
        break;
    }
    default:
    {
        printf("Invalid input");
        printf("\n");
        break;
    }
    }
}

int binary(void)
{
    int n, x, rem, decimal_number, base;
    decimal_number = 0;
    base = 1;

    printf("Enter the binary number (in form of 0 & 1 ): ");
    scanf("%d", &n);

    printf("\n");

    printf("In which number system you want to convert it \n ");
    printf("For decimal press     -> 1\n ");
    printf("For hexadecimal press -> 2\n ");
    printf("For octal press       -> 3\n ");
    printf("--------------------------------------\n");
    printf("enter here:");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
    {
        // Binary to decimal

        while (n > 0)
        {
            rem = n % 10;
            decimal_number = decimal_number + rem * base;
            n = n / 10;
            base = base * 2;
        }
        printf("Decimal number of a given binary is: %d \n", decimal_number);
        printf("--------------------------------------\n");
        printf("\n");
        break;
    }
    case 2:
    {
        // Binary to Hexadecimal
        long int hexadecimal = 0, i = 1, remainder;

        while (n != 0)
        {
            remainder = n % 10;
            hexadecimal = hexadecimal + remainder * i;
            i = i * 2;
            n = n / 10;
        }
        printf("Equivalent hexadecimal value: %lX \n", hexadecimal);
        printf("\n");
        break;
    }

    case 3:
    {
        // binary to Octal

        // binary to decimal

        while (n > 0)
        {
            rem = n % 10;
            decimal_number = decimal_number + rem * base;
            n = n / 10;
            base = base * 2;
        }

        // decimal to octal

        int octal_number = 0, i = 1;
        while (decimal_number != 0)
        {
            octal_number = octal_number + (decimal_number % 8) * i;
            decimal_number = decimal_number / 8;
            i = i * 10;
        }
        printf("Octal of a given binary is: %d \n", octal_number);
        printf("\n");
        break;
    }
    default:
    {
        printf("Invalid input");
        printf("\n");
        break;
    }
    }
}

int hexadecimal(void)
{

    int n, x;
    // printf("Enter the number: ");
    // scanf("%d", &n);

    printf("--------------------------------------\n");

    printf("For hexadecimal ->  Decimal    press     -> 1\n ");
    printf("For hexadecimal ->  Binary    press      -> 2\n ");
    printf("For hexadecimal ->  Octal    press       -> 3\n ");
    printf("--------------------------------------\n");
    printf("enter here:");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
    {
        // hexa --> decimal
        int decimal = 0, rema, i = 0, len = 0;
        char n[20];
        printf("Enter any Hexadecimal Number: ");
        scanf("%s", n);
        while (n[i] != '\0')
        {
            len++;
            i++;
        }
        len--;
        i = 0;
        while (len >= 0)
        {
            rema = n[len];
            if (rema >= 48 && rema <= 57)
                rema = rema - 48;
            else if (rema >= 65 && rema <= 70)
                rema = rema - 55;
            else if (rema >= 97 && rema <= 102)
                rema = rema - 87;
            else
            {
                printf("\nYou've entered an invalid Hexadecimal digit");

                return 0;
            }
            decimal = decimal + (rema * pow(16, i));
            len--;
            i++;
        }
        printf("Equivalent Decimal Value = %d \n", decimal);
        printf("\n");

        break;
    }

    case 2:
    {
        // hexadecimal --> binary
        int i = 0;
        char hex[20];

        printf("Enter any Hexadecimal Number: ");
        scanf("%s", hex);

        printf("Binary of a given number Number: ");

        while (hex[i])
        {
            switch (hex[i])
            {
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1000");
                break;
            case 'A':
                printf("1010");
                break;
            case 'a':
                printf("1010");
                break;
            case 'B':
                printf("1011");
                break;
            case 'b':
                printf("1011");
                break;
            case 'C':
                printf("1100");
                break;
            case 'c':
                printf("1100");
                break;
            case 'D':
                printf("1101");
                break;
            case 'd':
                printf("1101");
                break;
            case 'E':
                printf("1110");
                break;
            case 'e':
                printf("1110");
                break;
            case 'F':
                printf("1111");
                break;
            case 'f':
                printf("1111");
                break;
            }
            i++;
        }
        printf("\n");

        break;
    }

    case 3:
    {
        // hexadecimal -> Octal

        char hex[17];
        long long octal, bin, place;
        int i = 0, rem, val;

        /* Input hexadecimal number from user */
        printf("Enter any hexadecimal number: ");
        scanf("%s", &hex);

        octal = 0ll;
        bin = 0ll;
        place = 0ll;

        /* Hexadecimal to binary conversion */
        for (i = 0; hex[i] != '\0'; i++)
        {
            bin = bin * place;

            switch (hex[i])
            {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                printf("Invalid hexadecimal input.");
            }

            place = 10000;
        }

        place = 1;

        /* Binary to octal conversion */
        while (bin > 0)
        {
            rem = bin % 1000;

            switch (rem)
            {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
            }

            octal = (val * place) + octal;
            bin /= 1000;

            place *= 10;
        }

        printf("Hexadecimal number = %s\n", hex);
        printf("Octal number = %lld", octal);
        printf("\n");
        break;
    }
    default:
    {
        printf("Invalid input");
        printf("\n");
        break;
    }
    }
}

int octal(void)
{
    printf("For Octal ->      Decimal  press     -> 1\n ");
    printf("For Octal ->      Binary  press      -> 2\n ");
    printf("For Octal -> hexadecimal press       -> 3\n ");
    printf("--------------------------------------\n");
    int x;
    printf("enter here:");
    scanf("%d", &x);

    switch (x)
    {
        // Ocatal to Decimal

    case 1:
    {

        int octalNumber;

        printf("Enter an octal number: ");
        scanf("%d", &octalNumber);

        int decimalNumber = 0, i = 0;

        while (octalNumber != 0)
        {
            decimalNumber += (octalNumber % 10) * pow(8, i);
            ++i;
            octalNumber /= 10;
        }

        i = 1;

        decimalNumber;
        printf("Decimal number is:%d", decimalNumber);
        printf("\n");
        break;
    }

        // Octal to binary

    case 2:
    {
        int oct;
        printf("Enter an octal number: ");
        scanf("%d", &oct);

        int dec = 0, i = 0;
        long long bin = 0;

        // converting octal to decimal
        while (oct != 0)
        {
            dec += (oct % 10) * pow(8, i);
            ++i;
            oct /= 10;
        }
        i = 1;

        // converting decimal to binary
        while (dec != 0)
        {
            bin += (dec % 2) * i;
            dec /= 2;
            i *= 10;
        }

        printf("Binary number is: %lld \n", bin);
        printf("\n");
        break;
    }

    case 3:
    {
        //  Octal to Hexadecimal

        int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

        long long octal, tempOctal, binary, place;
        char hex[65] = "";
        int rem;

        place = 1;
        binary = 0;

        /* Input octal number from user */
        printf("Enter any octal number: ");
        scanf("%lld", &octal);
        tempOctal = octal;

        //  Octal to binary conversion

        while (tempOctal > 0)
        {
            rem = tempOctal % 10;
            binary = (OCTALVALUES[rem] * place) + binary;
            tempOctal /= 10;

            place *= 1000;
        }

        //  Binary to hexadecimal conversion

        while (binary > 0)
        {
            rem = binary % 10000;
            switch (rem)
            {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
                break;
            }

            binary /= 10000;
        }

        strrev(hex);

        printf("Given octal number: %lld\n", octal);
        printf("Hexadecimal number: %s", strrev(hex));
        printf("\n");
        break;
    }
    default:
    {
        printf("Invalid input");
        printf("\n");
        break;
    }
    }
}

int main()
{
    system("cls");

    int enter, n;
    printf(" Which number system are you going to input\n");

    printf("\n");

    printf(" For  Decimal Press     -> 1 \n");
    printf(" For  Binary Press      -> 2 \n");
    printf(" For  Hexadecimal Press -> 3 \n");
    printf(" For  Octal Press       -> 4 \n");

    printf("\n");

    printf("Choose any option: ");
    scanf("%d", &enter);

    printf("\n");

    switch (enter)
    {

    case 1:
    {
        decimal();
        break;
    }

    case 2:
    {
        binary();
        break;
    }
    case 3:
    {
        hexadecimal();
        break;
    }
    case 4:
    {
        octal();
        break;
    }
    default:
    {
        printf("Invalid input ...    Try again");
    }
    }

    printf("If you want to use calculator again press 1\n ");
    printf("\n");
    printf("If you want to switch off the  calculator press any key\n ");
    printf("\n");
    printf("Enter here:");
    scanf("%d", &n);
    printf("--------------------------------------\n");
    if (n == 1)
    {
        for (int p = 1; p <= 3; p++)
        {

            int enter, n;
            printf(" Which number system are you going to input\n");

            printf("\n");

            printf(" For  Decimal Press     -> 1 \n");
            printf(" For  Binary Press      -> 2 \n");
            printf(" For  Hexadecimal Press -> 3 \n");
            printf(" For  Octal Press       -> 4 \n");

            printf("\n");

            printf("Choose any option: ");
            scanf("%d", &enter);

            printf("\n");

            switch (enter)
            {

            case 1:
            {
                decimal();
                break;
            }

            case 2:
            {
                binary();
                break;
            }
            case 3:
            {
                hexadecimal();
                break;
            }
            case 4:
            {
                octal();
                break;
            }
            default:
            {
                printf("Invalid input ...    Try again");
            }
            }
        }
    }
    else
    {
        printf(" Thank you ");
    }

    return 0;
}