 ///
 /// @file    ex11_28.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-03 19:39:33
 ///
#include <iostream>
#include <string>
#include <vector>
#include <map>
using std::endl;
using std::vector;
using std::cout;
using std::map;
using std::string;
using std::endl;

int main(){
	map<string,vector<int>> m={{"1",{1,2}},{"2",{2,3}},{"3",{3,4}}};
	map<string,vector<int>>::iterator iter=m.find("2");
	if(iter!=m.end()){
		cout<<"find this key";
	}else{
		cout<<"Can't find this key";
	}
	return 0;
}
