 ///
 /// @file    ex7_23.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 09:06:47
 ///
#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h
#include<string>
using std::string;
class Screen{
public:
	using pos=string::size_type;
	Screen()=default;
	Screen(pos ht,pos wd,char c)
	:height(ht)
	,width(wd)
	,contents(ht*wd,c){
	}
	char get() const{
		return contents[cursor];
	}
	char get(pos r,pos c)const{
		return contents[r*width+c];
	}
private:
	pos cursor=0;//光标位置
	pos height=0,width=0;//屏幕高、宽
	string contents;//屏幕内容
};
#endif
