/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int n)
{
    int i;
    int max=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    return max;
}

int min(int arr[],int n)
{
    int i;
    int min=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    return min;
}

float average(int arr[],int n)
{
    int i;
    int sum=0;
    float average=0;

    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum/(float)n;

    return average;
}

int mode(int arr[],int n)
{
    int maxcount=0,maxvalue=0,count;
    int i,j;

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count>maxcount)
        {
            maxcount = count;
            maxvalue = arr[i];
        }
    }

    return maxvalue;
}

int factors(int num,int ret[])
{
    int k=0;

    while(num % 2 == 0)
    { 
        ret[k] = 2;
        k++;
        num = num/2;
    } 

    for(int j=3;j<=num;j+=2)
    {
        while(num % j == 0)
        {
            ret[k] = j;
            k++;
            num = num/j;
        }
    }

    return k;
}
