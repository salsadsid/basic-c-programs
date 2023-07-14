#include <stdio.h>
int main()
{
    int a,b,c,d;

    /* more work for processor */
    /* if a!=b checked in second loop and a!=c && b!=c checked
     in the third loop it would be less work for processor */
    for(a=1; a<5; a++)
    {
        for(b=1; b<5; b++)
        {
            for (c=1; c<5; c++)
            {
                for(d=1; d<5; d++)
                {
                    if(a!=b && a!=c && b!=c && a!=d && d!=b &&d!=c)
                    {
                        printf("%d %d %d %d\n",a,b,c,d);
                    }
                }
            }
        }
    }
    return 0;
}
