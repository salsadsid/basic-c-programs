#include<stdio.h>
#include <string.h>
int main()
{
    char country[100];
    int i,length;
    printf("Enter a word: ");
    scanf("%s",country);
    length=strlen(country);
    for (i=0; i<length ; i++ )
    {
        if(country[i]>='a'&&country [i]<='z')
        {
            country[i]= 'A'+country[i]-'a';
        }
        else if(country[i]>='A'&&country [i]<='Z'){
            country[i]= 'a'+country[i]-'A';
        }
    }
    printf("\nConvert Case: %s\n",country);     ;
}
