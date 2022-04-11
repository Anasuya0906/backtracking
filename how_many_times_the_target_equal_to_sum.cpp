#include <bits/stdc++.h>
using namespace std;
void printsubseq(int i,int n,vector<int>&ds,int arr[],int s,int k,int &c)
{
    if(i==n)
    {
        if(k==s)
        {
            c++;
        }
            return;
    }
    //logic to make the pick
    ds.emplace_back(arr[i]);
    s+=arr[i];
    printsubseq(i+1,n,ds,arr,s,k,c);
    ds.pop_back();
    s-=arr[i];
    //logic to not to pick
    printsubseq(i+1,n,ds,arr,s,k,c);
}

int main() {
	int n;
	int k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	vector<int>ds;
	int c=0;
	printsubseq(0,n,ds,arr,0,k,c);
	cout<<c;
}
