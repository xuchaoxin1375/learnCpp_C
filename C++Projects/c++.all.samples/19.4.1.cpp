//program 19.4.1.cpp  pair��make_pair���÷���
#include <iostream>
using namespace std;
int main()
{
	pair<int,double> p1; 
	cout << p1.first << "," << p1.second << endl; //���  0,0	
	pair<string,int> p2("this",20); 
	cout << p2.first << "," << p2.second << endl; //���  this,20
	pair<int,int> p3(pair<char,char>('a','b')); 
	cout << p3.first << "," << p3.second << endl; //���  97,98
	pair<int,string> p4 = make_pair(200,"hello");
	cout << p4.first << "," << p4.second << endl; //���  200,hello
	return 0;
}
