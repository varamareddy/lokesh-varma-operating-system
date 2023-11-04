#include<stdio.h>
int main()
{
	int N;
	printf("Enter the no of process:");
	scanf("%d",&N);
	int Process[N],Burst[N],Gantch[N],i,j;
	Gantch[0]=0;
	float a_wt=0,a_tt=0;

	for(i=0;i<N;i++)
	{
		Process[i]=i+1;
		printf("Enter the burst time for p%d Process:",Process[i]);
		scanf("%d",&Burst[i]);
	}
 for(i=0;i<N-1;i++)
 {
 	for(j=1+1;j<N;j++)
 	{
 		if(Burst[j+1]<Burst[i])
 		{
 			int temp=Burst[i];
 			Burst[i]=Burst[i];
 			Burst[j]=temp;
		 }
	 }
 }
 for(i=0;i<N;i++)
 {
 	if(i==0)
 	{
 		Gantch[i]=Gantch[i]+Burst[i];
 		a_wt=a_wt+Gantch[i-1];
 		a_tt=a_tt+Gantch[i];
		 }
	 }

  a_wt=(float)a_wt/N;
  a_tt=(float)a_tt/N;
  printf("Average waiting time:2f\n ",a_wt);
  printf("Average Turnaround time %.2f",a_tt);
  return 0;
}