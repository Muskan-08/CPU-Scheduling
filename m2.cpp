using namespace std;
#include<iostream>
int main()
{
	int n,t,p;
	int burst_time[20],arv_time[20],pr[20],temp[20],prr[20],wt[20],temp1,tat[20],avg_wt,pp

[20],avg_tat,total,tt;
	cout<<"Enter the number of the process you want to add\t";
	cin>>n;
	cout<<"\nEnter the Burst time of the processes";
	for(int i=0;i<n;i++)
	{
	    cout<<"\nEnter the Process Name"<<"\t";
		cin>>pp[i];
		cout<<"\nEnter the Burst time of the P"<<i<<"\t";
		cin>>burst_time[i];
		cout<<"\nEnter the Arrival time of the P"<<i<<"\t";
		cin>>arv_time[i];
	}
	for(int i=0;i<n;i++)
    {
      temp[i]=burst_time[i];  
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(temp[i]>temp[j])
        {
        t=temp[i];
        temp[i]=temp[j];
        temp[j]=t;
        }
        }    
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<"\t";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        pr[i]=i;
    }
   
    for(int i=0;i<n;i++)
    {
        cout<<pr[i]<<"\t";
    }
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(temp[i]==burst_time[j])
          {
            prr[j]=pr[i];
          }
      }
      
  }
  cout<<"\n";
  for(int i=0;i<n;i++)
    {
        cout<<prr[i]<<"\t";
    }
  
  
  for(int i=0;i<n-1;i++)
  
  {
 for(int j=i+1;j<n;j++)
  
{
   if(prr[i]>prr[j])
   
{
   temp1=prr[i];
   
prr[i]=prr[j];
  
 prr[j]=temp1;
  
 temp1=burst_time[i];
  
 burst_time[i]=burst_time[j];
  
 burst_time[j]=temp1;
   
temp1=pp[i];
   
pp[i]=pp[j];
  
 pp[j]=temp1;
  
 }
  }
  }
  
wt[0]=0;
 
 for(int i=1;i<n;i++)
    {
        wt[i]=0;
        for(int j=0;j<i;j++)
            wt[i]+=burst_time[j];
 
        total+=wt[i];
    }
 
    avg_wt=total/n;   
    tt=0;
    cout<<"\n Process\tBurst Time\tWaiting Time\tTurnaround Time";
    for(int i=0;i<n;i++)
    {
        tat[i]=burst_time[i]+wt[i];     
        tt+=tat[i];
        cout<<"\n"<<prr[i]<<"\t\t"<<burst_time[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
 
    avg_tat=tt/n;     
   cout<<"\n\nAverage Waiting Time=\t"<<avg_wt;
    cout<<"\nAverage Turnaround Time=\t"<<avg_tat;
 
	
}