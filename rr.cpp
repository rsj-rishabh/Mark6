//round robin scheduling
#include <iostream>
using namespace std;

void swap(int *at, int *bt, int *p, int *pr, int j){
	int t;
	t=at[j+1];
    at[j+1]=at[j];
    at[j]=t;

	t=bt[j+1];
	bt[j+1]=bt[j];
	bt[j]=t;

	t=p[j+1];
	p[j+1]=p[j];
	p[j]=t;

	t=pr[j+1];
	pr[j+1]=pr[j];
	pr[j]=t;
}

int main(){
	int i, j, n, q, clk=0;
	char a;
	cout<<"Enter no. of processes:	";
	cin>>n;
	cout<<"Enter time quantum:	";
	cin>>q;
	int p[n], at[n], bt[n], t;
	float avt;
	cout<<"Do you want to include arrival time? Y/N:	";
	cin>>a;
	for(i=0; i<n; i++){
		cout<<"Enter burst time for process P"<<i+1<<": 	";
		p[i]=i+1;
		cin>>bt[i];
	}
	if(a == 'Y'){
		for(i=0; i<n; i++){
			cout<<"Enter arrival time for process P"<<i+1<<": 	";
			cin>>at[i];
		}
	}else{
		for(i=0; i<n; i++){
			at[i]=0;
		}
	}
	
	cout<<"Series of processes will be:\nProcess:       ";
	for(i=0; i<n; i++){
		cout<<"P"<<p[i]<<"  ";
	}
	if(a == 'Y'){
		cout<<"\nArrival time:  ";
		for(i=0; i<n; i++){
			cout<<at[i]<<"   ";
		}
	}
	cout<<"\nBurst time:    ";
	for(i=0; i<n; i++){
		cout<<bt[i]<<"   ";
	}
	
	avt = (float)t/n;
	cout<<"\nAverage waiting time is "<<avt<<endl;

return 0;
}
