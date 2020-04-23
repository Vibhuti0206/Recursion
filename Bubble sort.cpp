#include<bits/stdc++.h>
using namespace std;
void bubble(int *a,int j,int n)
{
    if(n==1)
     return;
    if(j == n-1) 
    { bubble(a,0,n-1);
     return;
    }
    if(a[j] > a[j+1])
     swap(a[j],a[j+1]);
    bubble(a,j+1,n);
    return;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    bubble(arr,0,n);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     return 0;
}
