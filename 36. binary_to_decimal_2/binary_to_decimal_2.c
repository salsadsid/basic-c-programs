#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char binary[65];
    int len,decimal,power,i;
    while(1)
    {
        printf("\nEnter the binary number:");
        scanf("%s",binary);

        decimal=0;
        len=strlen(binary);
        power=len-1;

        for(i=0; i<len; i++)
        {

            decimal+=(binary[i]-'0')*pow(2,power);

            /*
            if binary[i] = '0' it means 48 and '1' means 49 ,
            that's why binary[i]*pow(2,power); is not giving the correct answer.
            '0' - '0' = 48 - 48 = 0;
            '1' - '0' = 49 - 48 = 1
            */

            if(binary[i] != '0' && binary[i] != '1')
            {
                printf("%s is not binary number\n",binary);
                break;
            }
            power--;
            if(i==len-1)
            {

                printf("Decimal value is %d\n",decimal);
            }
        }

    }
}

