 ///
 /// @file    ex7_23.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 09:06:47
 ///
#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h
#include <ostream>
#include <string>
using std::string;
using std::ostream;
class Screen{
public:
	using pos=string::size_type;
	Screen()=default;
	Screen(pos ht,pos wd,char c);
	char get() const;
	char get(pos r,pos c)const;
	Screen& move(pos r,pos c);
	Screen& set(char);
	Screen& set(pos,pos,char);
	Screen& display(ostream& os);
private:
	pos cursor=0;//光标位置
	pos height=0,width=0;//屏幕高、宽
	string contents;//屏幕内容
};
inline Screen::Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){
}
inline char Screen::get() const{
	return contents[cursor];
}
inline char Screen::get(pos r,pos c)const{
	return contents[r*width+c];
}
inline Screen& Screen::move(pos r,pos c){
	cursor=r*width+c;
	return *this;
}
inline Screen& Screen::set(char c){
	contents[cursor]=c;
	return *this;
}
inline Screen& Screen::set(pos r,pos c,char ch){
	contents[r*width+c]=ch;
	return *this;
}
inline Screen& Screen::display(ostream& os){
	os<<contents;
	return *this;
}
#endif
