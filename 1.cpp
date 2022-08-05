#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void timeAnalysis(int a[],int n){
	srand(0);
	int k = rand()%n ;
	clock_t s_time , e_time ;
			//start    end   
	//O(1) Constant Time Complexity :: Accessing and increasing element by 1
	// cout<<a[k]<<endl;

	s_time = clock(); //Noting starting time 
	a[k]=a[k]+1;
	e_time = clock(); //Noting end time 
	double total_time = e_time - s_time; //Difference
	cout<<(double)total_time/(double)CLOCKS_PER_SEC<<"	";

	//O(n) :: Increasing element by one 
	s_time = clock();
	for (int i = 0; i < n; i++)
	{
		a[i]=a[i]+1;
	}
	e_time =clock();
	total_time = e_time - s_time; //Difference
	cout<<(double)total_time/(double)CLOCKS_PER_SEC<<"	";


	//O(n^2) :: Sorting Array
	s_time = clock();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j+1]){
				swap(a[i],a[j]);
			}
			else
			continue;
	}
	e_time =clock();
	total_time = e_time - s_time; //Difference
	cout<<(double)total_time/(double)CLOCKS_PER_SEC<<"	";

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<"O(1)	 O(n)  O(n^2)\n";
int t=4;
	int n=1000;
	while(t--){
	n=n*2;
	int a[n];
	srand(time(0));
	for(int i=0;i<n;i++) a[i]=rand()%n+1;
	
	timeAnalysis(a,n);
	cout<<"\n";
	}
return 0; 
}