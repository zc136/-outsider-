//ʵ��һ����ģ�壬Ҫ��:
// ���Զ��������������Լ��Զ����������͵����ݽ��д洢
// �������е����ݴ洢������
// ���캯���п��Դ������������
// �ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
// �ṩβ�巨��βɾ���������е����ݽ���������ɾ��
// ����ͨ���±�ķ�ʽ���������Ԫ��
// ���Ի�ȡ�����е�ǰԪ�ظ��������������
//
#include<iostream>
using namespace std;
#include "MyArray.hpp"
#include<string>
void test01()
{
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}


	
	//MyArray <int>arr1(5);
}
int main() {


	test01();


	system("pause");
	return 0;
}
