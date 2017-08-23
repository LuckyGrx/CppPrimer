 ///
 /// @file    ex7_23.h
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-12 09:06:47
 ///
#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h
#include <iostream>
#include <string>
using std::string;
using std::ostream;
class Screen{
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
	Screen set(char c){
		contents[cursor]=c;
		return *this;
	}
	Screen move(pos r,pos c){
		cursor=r*width+c;
		return *this;
	}
	Screen display(ostream &os){
		do_display(os);
		return *this;
	}
	const Screen display(ostream &os)const{
		do_display(os);
		return *this;
	}
private:
	void do_display(ostream& os)const{
		for(pos i=0;i<height;++i){
			for(pos j=0;j<width;++j){
				os<<contents[i*width+j];
			}
			os<<"\n";
		}
	}
private:
	pos cursor=0;//光标位置
	pos height=0,width=0;//屏幕高、宽
	string contents;//屏幕内容
};
#endif

int main(){
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(std::cout);//打印显示效果和返回Screen&的结果一致
	std::cout<<"\n";
	myScreen.display(std::cout);//打印显示效果和返回Screen&的结果不一致，因为上面的move和set以及display返回的都是myScreen的副本，并未真正改变该对象，所以这里显示的仍然是最初的myScreen
	std::cout<<"\n";
	return 0;
}
