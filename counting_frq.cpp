// given an array which may contain duplicates print all elements and their frequency
#include <iostream>
#include<unordered_map>
using namespace std;
void count(int arr[],int n){
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
    mp[arr[i]]++;
   }
   for(auto x:mp)
   cout<<x.first<<" "<<x.second<<endl;
}
int main()
{
    int arr[]={10,20,20,10,10,20,5,20};
    int n=sizeof(arr)/sizeof(*arr);
    count(arr,n);

return 0;
}