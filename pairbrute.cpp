#include <iostream>
using namespace std;
bool pairsum(int arr[],int x,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==x){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[]={0,-1,2,-3,1}; //custom
    int x=0;
    int size=sizeof(arr)/sizeof(*arr);
    if(pairsum(arr,x,size)==1){
        return true;
    }else{
        return false;
    }

}