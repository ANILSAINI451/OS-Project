avg_wtime=(float)total/n; //calculating average waiting time
total=0;
printf("\nProcess\t Estimated Time \tWaiting Time\tTurnaround Time");
//calculating turnaround time
for(i=0;i<n;i++)
{
    turntime[i]=btime[i]+wtime[i];
    total+=turntime[i];
    printf("\np%d\t\t  %d\t\t  %d\t\t\t%d",p[i],btime[i],wtime[i],turntime[i]);
}
