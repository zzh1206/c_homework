#include <iostream>
using namespace std;
int main(){
	//编写一个程序计算下题：一个新建住宅区安装煤气管道，三月份安装了272.84米，四月份安装管道的长度是三月份的2倍，还剩117.64米，
	//这个住宅区需要安装煤气管道多少米。
	//输出效果为：
	//这个住宅区一共需要安装**米管道。（**为计算结果）。 
	double a;
	a = 272.84;
	//a是三月份安装
	double b;
	b = a*2;
	//b是四月份安装
	double c;
	c = 117.64; 
	cout<<"这个住宅区一共需要安装"<<a + b + c<<"米管道。"<<endl;
	return 0;
}
