#include <iostream>
#include<unordered_set>
using namespace std;
int pairsum(int arr[],int x,int n){
unordered_set<int>pairset;
for(int i=0;i<n;i++){
    int temp=x=arr[i];
    if(pairset.find(temp)!=pairset.end()){
        return 0;
    }
    pairset.insert(arr[i]);
}
return -1;
}
int main()
{
    int arr[]={1,-2,-1,1,3};
    int x=2;
    int n=sizeof(arr)/sizeof(*arr);
    if(pairsum(arr,x,n)==-1)
    cout<<"false";
    else
    cout<<"true";


}