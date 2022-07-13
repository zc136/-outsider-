//实现一个类模板，要求:
// 可以对内置数据类型以及自定义数据类型的数据进行存储
// 将数组中的数据存储到堆区
// 构造函数中可以传入数组的容量
// 提供对应的拷贝构造函数以及operator=防止浅拷贝问题
// 提供尾插法和尾删法对数组中的数据进行增加与删除
// 可以通过下标的方式访问数组的元素
// 可以获取数组中当前元素个数和数组的容量
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
