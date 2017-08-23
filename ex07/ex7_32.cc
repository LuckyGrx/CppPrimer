 ///
 /// @file    ex7_23.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 09:06:47
 ///
#ifndef CP5_ex7_32_h
#define CP5_ex7_32_h
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::ostream;
using std::vector;
class Screen;
class Window_mgr{
public:
	using ScreenIndex=vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	vector<Screen> screens;
};

class Screen{
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos=string::size_type;
	Screen()=default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){
	}
	char get() const{
		return contents[cursor];
	}
	char get(pos r,pos c)const{
		return contents[r*width+c];
	}
	Screen& set(pos r,pos col,char ch){
		contents[r*width+col]=ch;
		return *this;
	}
	Screen& set(char c){
		contents[cursor]=c;
		return *this;
	}
	Screen& move(pos r,pos c){
		cursor=r*width+c;
		return *this;
	}
	Screen& display(ostream &os){
		do_display(os);
		return *this;
	}
	const Screen& display(ostream &os)const{
		do_display(os);
		return *this;
	}
private:
	void do_display(ostream& os)const{
		for(pos i=0;i<height;++i){
			for(pos j=0;j<width;++j){
				os<<contents[i*width+j];
			}
			if(i!=height-1)
				os<<"\n";
		}
	}
private:
	pos cursor=0;//光标位置
	pos height=0,width=0;//屏幕高、宽
	string contents;//屏幕内容
};
void Window_mgr::clear(ScreenIndex i){
	Screen &s=screens[i];
	s.contents=string(s.height*s.width,' ');
}
#endif
