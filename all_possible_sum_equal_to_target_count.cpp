#include <bits/stdc++.h>
using namespace std;
int printsubseq(int i,int n,int arr[],int s,int k,int &c)
{
    if(i==n)
    {
        if(k==s)
        {
            return 1;
        }
        return 0;
    }
    //logic to make the pick
    s+=arr[i];
    int l=printsubseq(i+1,n,arr,s,k,c);
    s-=arr[i];
    //logic to not to pick
    int r=printsubseq(i+1,n,arr,s,k,c);
    return l+r;
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
	int c=0;
	cout<<printsubseq(0,n,arr,0,k,c);
}
