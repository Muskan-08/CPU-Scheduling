using namespace std;
#include<iostream>
int main()
{
	int n,t,p;
	int burst_time[20],arv_time[20],pr[20],temp[20];
	cout<<"Enter the number of the process you want to add\t";
	cin>>n;
	cout<<"\nEnter the Burst time of the processes";
	for(int i=0;i<n;i++)
	{
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
              p=pr[i];
              pr[i]=pr[j];
              pr[j]=p;
          }
      }
  }
  cout<<"\n";
  for(int i=0;i<n;i++)
    {
        cout<<pr[i]<<"\t";
    }
}
