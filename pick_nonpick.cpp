#include <bits/stdc++.h>
using namespace std;
void printsubseq(int i,int n,vector<int>&ds,int arr[])
{
    if(i==n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<'\n';
        return;
    }
    //logic to make the pick
    ds.emplace_back(arr[i]);
    printsubseq(i+1,n,ds,arr);
    ds.pop_back();
    //logic to not to pick
    printsubseq(i+1,n,ds,arr);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	vector<int>ds;
	printsubseq(0,n,ds,arr);
}
