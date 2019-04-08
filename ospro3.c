wtime[0]=0; //waiting time for first process will be 0
//calculating waiting time
for(i=1;i<n;i++)
{
    wtime[i]=0;
    for(j=0;j<i;j++)
    {
        wtime[i]+=btime[j];
        total=total+wtime[i];
    }
}
