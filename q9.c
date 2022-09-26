// . Write a function in C to count the frequency of each element of an array
#include<stdio.h>
void frequency( int a[],int n);
int main()
{
    int n;
    printf("How many number you want to store in an array: ");
    scanf("%d",&n);
    int a[n];
   printf("Enter the elements: ");
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
    frequency(a,n);
    return 0;
}
void frequency( int a[],int n)
{
    int freq[100]={0};
    int i;
    for(i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if( freq[i]!=0)
        {
            printf("Frequency of %d is %d\n",i,freq[i]);
        }
    }
}