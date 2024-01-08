#include <iostream>
#include<map>
using namespace std;
bool issubset(int arr1[],int n1,int arr2[],int n2){
map<int,int>mp;
for(int i=0;i<n1;i++){
    mp[arr1[i]]++; //count thre freq of all elements

}
for(int i=0;i<n2;i++){
    if(mp[arr2[i]]==0) return false;
    mp[arr2[i]]--;
}
return true;
}
int main()
{
    int arr1[]={6,7,3,2,2};
    int arr2[]={6,7,2,2};
    int n1=sizeof(arr1)/sizeof(*arr1);
    int n2=sizeof(arr2)/sizeof(*arr2);
    cout<<(issubset(arr1,n1,arr2,n2)?"arr2 is a subset of arr1":"arr2 is not a subset of arr1")<<endl;


return 0;
}