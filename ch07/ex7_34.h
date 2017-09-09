 ///
 /// @file    ex7_34.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-09-09 19:11:49
 ///
#include <string>
 
int height;
class Screen{
public:
	void dummy_fcn(pos height){
		cursor=width*height;
	}
private:
	pos cursor=0;
	pos height=0,width=0;
	typedef std::string::size_type pos;
};
//因为类的成员声明中的任何名字，都必须在使用前确保可见，显然在这个例子中，编译器从上倒下，依次获得类Screen的成员声明，
//void dummy_fcn(pos);
//pos cursor=0;
//pos height=0,width=0;
//typedef std::string::size_type pos;
//显然pos这个类型在dummy_fcn中的形参列表中不可见，所以编译器报unknow type name 'pos'
