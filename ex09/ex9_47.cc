 ///
 /// @file    ex9_47.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-06-24 23:37:51
 ///
 
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void find_first_of_number(const string& str){
	string numbers("012345678");
	string::size_type pos=0;
	while((pos=str.find_first_of(numbers,pos))!=string::npos){
		cout<<"found number at index:"<<pos
			<<" element is "<<str[pos]<<endl;
		++pos;
	}
}

void find_first_of_letter(const string& str){
	string letter;
	for(char i='a',j='A';i<='z'&&j<='Z';++i,++j){
		letter+=i;
		letter+=j;
	}
	string::size_type pos=0;
	while((pos=str.find_first_of(letter,pos))!=string::npos){
		cout<<"found letter at index:"<<pos
			<<" element is "<<str[pos]<<endl;
		++pos;
	}
}

void find_first_not_of_number(const string& str){
	string letter;
	for(char i='a',j='A';i<='z'&&j<='Z';++i,++j){
		letter+=i;
		letter+=j;
	}
	string::size_type pos=0;
	while((pos=str.find_first_not_of(letter,pos))!=string::npos){
		cout<<"found number at index:"<<pos
			<<" element is "<<str[pos]<<endl;
		++pos;
	}
}

void find_first_not_of_letter(const string& str){
	string numbers("012345678");
	string::size_type pos=0;
	while((pos=str.find_first_not_of(numbers,pos))!=string::npos){
		cout<<"found letter at index:"<<pos
			<<" element is "<<str[pos]<<endl;
		++pos;
	}
}
int main(){
	string name("ab2c3d7R4E6");
	cout<<"use find_first_of:"<<endl;
	find_first_of_number(name);
	find_first_of_letter(name);
	cout<<"use_find_first_not_of:"<<endl;
	find_first_not_of_number(name);
	find_first_not_of_letter(name);
	return 0;
}
