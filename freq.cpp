#include <iostream>
using namespace std;
int main()
{
int arr[9]={1,3,3,4,1,4,4,4,4};
int i=1;
while(i<9){
    int query;
    cin>>query;
    int frequency=0;
    int j=0;
    while(j<=8){
        if(arr[j]==query){
            frequency++;
        }
        j++;
    }
    i++;

}
return 0;
}