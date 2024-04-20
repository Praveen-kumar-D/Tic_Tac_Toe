#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool check(int* a,int b)
{
    int c=0;
    for(int i=1;i<=10;i++)
    {
        if(a[i]==b)
        {
            return false;
        }
    }
    return true;
}