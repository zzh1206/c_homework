#include<iostream>
using namespace std;
int main(){
	//����1kg��ֽ���ɲ���0.8kg����ֽ�����ÿ�˻���1.7kg��ֽ������һ��42�˻��յķ�ֽ����������ǧ������ֽ��
	float weight = 0.8;
	float weight_of_everyone = 1.7;
	short number_of_student = 42;
	
	cout<<"��������ǰ������һ��"<<number_of_student<<"�˻��յķ�ֽ������"<<weight*weight_of_everyone*number_of_student<<"ǧ������ֽ��"<<endl;
	
	//�����������»���1kg��ֽ���ɲ���0.9kg����ֽ����ʱ����һ����յķ�ֽ����������ǧ������ֽ��
	weight = 0.9;
	cout<<"�������º�����һ��"<<number_of_student<<"�˻��յķ�ֽ������"<<weight*weight_of_everyone*number_of_student<<"ǧ������ֽ��"<<endl;	 
	return 0;
	
}
