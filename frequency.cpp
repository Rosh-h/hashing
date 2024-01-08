#include <iostream>
#include<unordered_map>
using namespace std;
int sum(int arr[],int n){
    unordered_map<int,int>ump;
    for(int i=0;i<n;i++){
        ump[arr[i]]++;
    }
    int sum=0;
    for(auto x:ump){
        if(x.second>x.first){
            sum+=x.first;
        }
    }
    return sum;
}
int main()
{

return 0;
}