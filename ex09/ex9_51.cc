 ///
 /// @file    ex9_51.cc
 /// @author  zack(18357154046@163.com)
 /// @date    2017-08-21 15:25:55
 ///
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;
using std::stoi;
/*
 *只考虑了格式正确的情况，未加异常处理
 *
 */
class MyDate{
public:
	MyDate()=delete;
	MyDate(const string &s);
	void print() const;
private:
	void setMonth(const string &s);
private:
	unsigned year;
	unsigned month;
	unsigned day;
	bool isLegal;
};
MyDate::MyDate(const string &s):year(0),month(0),day(0),isLegal(true){
	unsigned flag=00;
	if(s.find_first_of("/")!=string::npos)
		flag=01;
	else if(s.find_first_of(",")!=string::npos)
		flag=02;
	else if(4==s.find_first_of("123456789"))
		flag=03;
	switch(flag){
		//格式为1/1/1990
		case 01:
			day=stoi(s.substr(0,s.find_first_of("/")));
			month=stoi(s.substr(s.find_first_of("/")+1,s.find_last_of("/")-s.find_first_of("/")-1));
			year=stoi(s.substr(s.find_last_of("/")+1));
			break;
		//格式为January 1,1900
		case 02:
			day=stoi(s.substr(s.find_first_of("0123456789"),s.find_first_of(",")-s.find_first_of("0123456789")));
			year=stoi(s.substr(s.find_first_of(",")+1));
			setMonth(s);
			break;
		//格式为Jan 1 1900
		case 03:
			day=stoi(s.substr(s.find_first_of("0123456789"),s.find_last_of(" ")-s.find_first_of("0123456789")));
			year=stoi(s.substr(s.find_last_of(" ")+1));
			setMonth(s);
			break;
		default:
			isLegal=false;
			break;
	}
}
void MyDate::setMonth(const string &s){
	if(s.find("Jan")<s.size())
		month=1;
	else if(s.find("Feb")<s.size())
		month=2;
	else if(s.find("Mar")<s.size())
		month=3;
	else if(s.find("Apr")<s.size())
		month=4;
	else if(s.find("May")<s.size())
		month=5;
	else if(s.find("Jun")<s.size())
		month=6;
	else if(s.find("Jul")<s.size())
		month=7;
	else if(s.find("Aug")<s.size())
		month=8;
	else if(s.find("Sep")<s.size())
		month=9;
	else if(s.find("Oct")<s.size())
		month=10;
	else if(s.find("Nov")<s.size())
		month=11;
	else if(s.find("Dec")<s.size())
		month=12;
}
void MyDate::print()const{
	if(isLegal)
		cout<<"year = "<<year<<" , month = "<<month<<" , day = "<<day<<endl;
	else
		cout<<"This date's format is not legal!"<<endl;
}

int main(){
	MyDate d1("January 1,1900");
	d1.print();
	MyDate d2("1/1/1990");
	d2.print();
	MyDate d3("Jan 1 1900");
	d3.print();
	return 0;
}
