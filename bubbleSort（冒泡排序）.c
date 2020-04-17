#include <stdio.h>

void bubble(int arr[],int n)
{
    int temp,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
}

void bubbleSort(int arr[],int n)
{
    int i;
    for(i=n;i>0;i--)
    {
        bubble(arr,i);
    }
}

int main()
{
    int arr[]={9,3,1,2,6,4,5,7,8};
    int i;
    bubbleSort(arr,9);
    for(i=0;i<9;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}