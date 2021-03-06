//program 4.5.3.1.cpp  引用作为函数返回值
#include <iostream>
#define TURN_Reference 1/*修改为0,则检验的是返回值为非引用类型的情况*/
using namespace std;
int n = 4;

/*预编译处理的语句不要有过多的花括号*/
#if TURN_Reference

int& SetValue()
{
	return n;  //返回对n的引用
}

#else

int SetValue()
{
	return n;
}

#endif


int main()
{
	SetValue() = 40;   /*返回值是引用的函数调用表达式，可以作为左值使用;例如此处SetValue(),它就是一个类型为int& 的(变量)的引用,它的值被重新赋值为40后,setValue()==40;如果SetValue()返回的是int(是个常量值,同时不能够作为右值给引用作初始化),即,它是非引用类型,那么就不能够象SetValue()作为表达式左值
	*/
	cout << n << endl; //输出 40
	int& r = SetValue();/*用SetValue()来初始化新定义的int&类型的引用r;r也将=40;*/
	cout << r << endl; //输出 40
	return 0;
}


