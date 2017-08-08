 ///
 /// @file    ex7_43.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-07-26 17:30:13
 ///
 
#include <vector>
using std::vector;

class NoDefault{
public:
	NoDefault(int i){
	}
};
class C{
public:
	C():def(0){
	}
private:
	NoDefault def;
};

int main(){
	C c;
	vector<C> cvec(10);

	return 0;
}
