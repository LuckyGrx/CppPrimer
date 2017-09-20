#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using std::endl;
using std::cout;
using std::vector;
using std::copy;
using std::list;

int main(){
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    list<int> ilst_back,ilst_front,ilst_insert;
    copy(ivec.cbegin(),ivec.cend(),back_inserter(ilst_back));
    copy(ivec.cbegin(),ivec.cend(),front_inserter(ilst_front));
    copy(ivec.cbegin(),ivec.cend(),inserter(ilst_insert,ilst_insert.begin()));

    for(const auto &val:ilst_back)
        cout<<val<<" ";
    cout<<endl;

    for(const auto &val:ilst_front)
        cout<<val<<" ";
    cout<<endl;

    for(const auto &val:ilst_insert)
        cout<<val<<" ";
    cout<<endl;
    return 0;
}
