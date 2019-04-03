using namespace std;
#include<iostream>
int main()
{
	int n;
	int burst_time[20];
	cout<<"Enter the number of the process you want to add\t";
	cin>>n;
	cout<<"\nEnter the Burst time of the processes";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the Burst time of the P"<<i<<"\t";
		cin>>burst_time[i];
	}
}
