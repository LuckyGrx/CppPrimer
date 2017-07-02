 ///
 /// @file    ex11_12.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-02 09:40:58
 ///
 
#include <iostream>
#include <string>
#include <vector>
#include <utility>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::pair;

int main(){
	vector<pair<string,int>> pvec;
	string str;
	int tmp;
	while(cin>>str>>tmp){
		//pair<string,int> sip(str,tmp);方法一//该形式最利于理解，因为是构造函数的形式啊
		//pair<string,int> sip={str,tmp};//方法二
		pair<string,int> sip=make_pair(str,tmp);//方法三
		pvec.push_back(sip);
	}
	for(auto& elem:pvec){
		cout<<elem.first<<" "<<elem.second<<endl;
	}
	return 0;
}
