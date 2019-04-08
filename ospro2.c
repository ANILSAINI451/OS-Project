//sorting burst time in ascending order using selection sort

for(i=0;i<n;i++)
{
    pos=i;
    for(j=i+1;j<n;j++)
    {
        if(btime[j]<btime[pos])
        {
            pos=j;
        }
    }
    temp=btime[i];
    btime[i]=btime[pos];
    btime[pos]=temp;
    temp=p[i];
    p[i]=p[pos];
    p[pos]=temp;
