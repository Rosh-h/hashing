#include <iostream>
#include<unordered_map>
using namespace std;
int maxdist(int arr[],int n){
unordered_map<int,int>ump;
int max_distance=0;
for(int i=0;i<n;i++){
    if(ump.find(arr[i])==ump.end())
       ump[arr[i]]=i;
       else max_distance=max(max_distance,i-ump[arr[i]]);
}
return max_distance;
}
int main()
{
int arr[]={3,2,1,2,1,4,5,8,6,7,4,2};
int n=sizeof(arr)/sizeof(*arr);
cout<<maxdist(arr,n);
return 0;
}