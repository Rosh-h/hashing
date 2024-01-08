#include <iostream>
#include<unordered_map>
using namespace std;
bool check_duplicate(int arr[], int n, int k) {
    // create an empty unordered_map
    unordered_map<int, int> ump;

    for (int i = 0; i < n; i++) {
        if (ump.find(arr[i]) == ump.end()) {
            ump[arr[i]] = i;
        } else {
            if (i - ump[arr[i]] <= k) {
                return true;
            }
            ump[arr[i]] = i;
        }
    }

    return false;
}
int main()
{
int arr[]={10,5,3,4,3,5,6};
int n=sizeof(arr)/sizeof(*arr);
if(check_duplicate(arr,n,3))
cout<<"true";
else
cout<<"false";
return 0;
}