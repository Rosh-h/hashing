#include <iostream>
using namespace std;
bool checkduplicates(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<i+k&&j<n;j++){
            if(arr[i]==arr[j]){
                if((j-i)<=k) return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[]={10,5,3,4,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(checkduplicates(arr,n,3))
    cout<<"true";
    else
    cout<<"false";

return 0;
}