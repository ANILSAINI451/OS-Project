#include<stdio.h>
void main()
{
int btime[20],p[20],wtime[20],turntime[20],i,j,n,total=0,pos,temp;
float avg_wtime,avg_turntime;
printf("Enter number of process:");
scanf("%d",&n);
printf("\nEnter Burst Time:\n");
for(i=0;i<n;i++)
{
    printf("%d",i+1);
    scanf("%d",&btime[i]);
    p[i]=i+1;
}
