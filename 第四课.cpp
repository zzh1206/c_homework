#include<iostream>
using namespace std;
int main(){
	//回收1kg废纸，可产生0.8kg再生纸。如果每人回收1.7kg废纸，四年一班42人回收的废纸可生产多少千克再生纸。
	float weight = 0.8;
	float weight_of_everyone = 1.7;
	short number_of_student = 42;
	
	cout<<"技术革新前，四年一班"<<number_of_student<<"人回收的废纸可生产"<<weight*weight_of_everyone*number_of_student<<"千克再生纸。"<<endl;
	
	//经过技术革新回收1kg废纸，可产生0.9kg再生纸，此时四年一班回收的废纸可生产多少千克再生纸。
	weight = 0.9;
	cout<<"技术革新后，四年一班"<<number_of_student<<"人回收的废纸可生产"<<weight*weight_of_everyone*number_of_student<<"千克再生纸。"<<endl;	 
	return 0;
	
}
