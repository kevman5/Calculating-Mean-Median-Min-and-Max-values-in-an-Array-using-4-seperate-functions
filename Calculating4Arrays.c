#include<stdio.h>
// Calculate Mean, Median, Min and Max using Arrays with 10 numbers entered by the user, with each having their own function;

int CalcMean(int nums[],int n)
{
    int i,sum=0,mean=0;
    for(i=1;i<n;i++)
    {
        sum= sum + nums[i];
        mean= sum / n;
    }

     printf("\tThe mean is %d\n",mean);
}
int CalcMedian(int nums[],int n)
{
    int x1, median, sum2;

    if(n%2!=0)
    {
        x1=abs((n+1)/2);
        median=nums[x1-1];
        printf("\tThe median is %d\n",median);
    }
    else
    {
        median=(nums[(n-1)/2] + nums[n/2])/2.0;
        printf("\tThe median is %d\n",median);
    }

}
int CalcMin(int nums[],int n)
{

    int i,min=nums[0];

    for (int i = 1; i<n; i++){
      if (nums[i] < min)
         min = nums[i];
    }
   printf("\tThe min is %d\n", min);
}

   int CalcMax(int nums[],int n)
{

    int i,max=nums[0];

    for (int i = 1; i<n; i++){
      if (nums[i] > max)
         max = nums[i];
    }
   printf("\tThe max is %d\n", max);


}
int main() {


    int nums[30],n=9,i;
    printf("\t### This is a project to calculate the mean, median, min and max for you! ###\n\n");

    printf("Input numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&nums[i]);
    }

    CalcMean(nums,n);
    CalcMedian(nums,n);
    CalcMax(nums,n);
    CalcMin(nums,n);
    return 0;



}
