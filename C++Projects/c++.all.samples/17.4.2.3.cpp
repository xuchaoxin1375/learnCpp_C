//program 17.4.2.3.cpp   文件拷贝程序
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char * argv[])
{
	if( argc != 3 ) {
		cout << "File name missing!" << endl;
		return 0;
	}
	ifstream inFile(argv[1],ios::binary|ios::in); //二进制读模式打开
	if( ! inFile ) {
		cout << "Source file open error." << endl;
		return 0;
	}
	ofstream outFile(argv[2],ios::binary|ios::out); //二进制写模式打开
	if( !outFile) {
		cout << "New file open error." << endl;
		inFile.close(); //打开的文件一定要关闭
		return 0;
	}
	char c;
	while( inFile.get(c))    //每次读取一个字符
		outFile.put(c);	  //每次写入一个字符
	outFile.close();  
	inFile.close();
	return 0;
}

