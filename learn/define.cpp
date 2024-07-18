#include <bits/stdc++.h>
using namespace std;
#define number int // define the type of data with the different name
#define loop(i,a,n) for(int i=0 ; i<n ; i++)// define the loop with short name
#define pub push_back// define one of the function of vector
#define pob pop_back// like the upper line.

int main()
{
          
	number n; //declared data n;
	cout<<"N = ";
	cin>>n;
	vector <int> arr; // declared the vector have a type int-integer and this has name arr;
	
	
	loop(i,0,n)
	{
		/* TODO (TrongKha#2#): khong co gi
		                        */
	
		arr.pub(i);// push_back element into array-arr.
	}
	arr.pob(); // delete the last element in array-arr
	loop(i,0,arr.size())
	{
		cout<<arr[i]<<" ";// cout all element have in array-arr.
	}
	return 0;
}
