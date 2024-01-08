#include <iostream>
#include <unordered_set>
#include<unordered_map>
#include <set>
#include<map>

using namespace std;

int main()
{
    unordered_set<int> b;

    // inserting elements in an unordered set
    b.insert(2);
    b.insert(5);
    b.insert(5); // inserting 5 double time will have no effect, set will look like {2,5}

    // To check if an element is found in the unordered_set, you need to specify the element you are searching for.
    if (b.find(5) != b.end()) {
        cout << "found";
    } else {
        cout << "not found";
    }

    cout << "\n";

    set<int> g;
    // Add elements to the set 'g' if needed.
g.insert(2);
g.insert(5);
g.insert(5);
// inserting 5 times will have no effect in the set
// set look like this{2,5};
// check if 2 exist in the set or not
if(g.find(2)!=g.end()){
    cout<<"found";
}else{
    cout<<"notfound";
}cout<<"\n";
unordered_map<int,int>d;
// inserting map with their frequencies
d[2]=1;
d[5]=2;
// map looks like
// 2--> 1
// 5-->2
// check if 2 as key exists in the map or not
if(d.find(2)!=d.end()){
    cout<<"found";
}else{
cout<<"not found";
}
cout<<"\n";
// check the frequency of the key "5"
cout<<d[5];
cout<<"\n";
map<int,int>kk;
if(kk.find(2)!=kk.end()){
    cout<<"found";
}else{
    cout<<"not found";
}
cout<<"\n";
cout<<kk[5];
cout<<"\n";
    return 0;
}
