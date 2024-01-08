#include <iostream>
using namespace std;
int main()
{
int arr[9]={1,3,3,4,1,4,4,4,4};
int n=9;
int b[9]={0};
int i=0;
while(i<n){
    int x=arr[i];
    b[x]=b[x]+1;
    i++;
}
// this loop will take o(n) time
// all frequencies are calculated
int query[3]={3,4,1};
int q=3,j=0;
while(j<q){
    int x=query[j];
    cout<<b[x];;
    cout<<" ";
    j++;
}
// above loop takes o(q) times;
// hence total time =o(n+q);
return 0;
}