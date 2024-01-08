#include <iostream>
#include<unordered_map>
using namespace std;
int main()
{
int arr[]={1,2,1,4,3,1};
int n=6;
unordered_map<int,int>ump;

for(int i=0;i<n;i++){
ump[arr[i]]++;
}
int maxfreq=0;
for(auto x:ump){
    if(x.second>maxfreq){
        maxfreq=x.second;
    }
}
cout<<n-maxfreq<<" ";
return 0;
}