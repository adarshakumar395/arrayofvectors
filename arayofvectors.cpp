#include<iostream>
#include<bits/stdc++.h>
#include<climits>
#include<cmath>

using namespace std;

//  array of vectors
int main()
{
int m=3, n=2;
int i=0;
vector<int> arr[m];
for(int i=0 ; i<m ; i++)
 {
	for(int j=0 ; j<m; j++)
	{
	 arr[i].push_back(10);
	 	
	}
 }
 
 for(int i=0; i<m; i++)
  {
 	for(int j=0; j<n; j++)
 	{
 	  cout<<arr[i][j]<<" ";	
	}
 
     cout<<endl;
}
 return 0;
}

