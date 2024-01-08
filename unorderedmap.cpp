#include <iostream>
#include <unordered_set>
#include<unordered_map>
#include <set>
#include<map>
using namespace std;
int main()
{
int n=9;
int a[9]={1,3,3,4,1,4,4,4,4};
unordered_map<int,int>b;
int i=0;
while(i<n){
    int x=a[i];
    b[x]=b[x]+1;
    i++;
}
// above for loop take o(n) time
// all frequencies have been calculate in advance by now
int queries[3]={3,4,1};
int q=3;
int j=0;
while(j<q){
    int x=queries[j];
    cout<<b[x];
    cout<<' ';
    j++;
}
// above for loop took o(q) time
// hence total time takrn :o(n+q);

return 0;
}