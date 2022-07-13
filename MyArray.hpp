#include <iostream>
#pragma once
using namespace std;


template<class T>
class MyArray
{
public:
	//有参构造  参数 容量
	MyArray(int capacity)
	{

		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];
	}
		//析构函数
		
		//拷贝构造
		MyArray(const MyArray& arr)
		{
			this->m_Capacity =arr.m_Capacity;
			this->m_Size = arr.m_Size;
			this->pAddress=new T[arr.m_Capacity];
			for (int i = 0; i < this->m_Size; i++)
			{
				this->pAddress[i] = arr.pAddress[i];
		}
		}
		MyArray& operator=(const MyArray& arr)
		{
			//判断原来堆区是否有数据，有就释放
			if (this->pAddress != NULL)
			{
				delete[]this->pAddress;
				this->pAddress = NULL;
				this->m_Capacity = 0;
				this->m_Size = 0;
			}
			//深拷贝
			this->m_Capacity = arr.m_Capacity;
			this->m_Size = arr.m_Size;
			this->pAddress = new T[this->m_Capacity];
			for (int i = 0; i < this->m_Size; i++)
			{
				this->pAddress[i] = arr[i];
			}
			return *this;
		}
		//尾插法
		void Push_Back(const T& val)
		{
			if (this->m_Capacity == this->m_Size)
			{
				return;

			}
			this->pAddress[this->m_Size] = val;
			this->m_Size++;
		}
		//尾删法
		void Pop_Back()
		{
			if (this->m_Size == 0)
			{
				return;
			}	
			this->m_Size--;
		}
		//通过下标访问数组的数据
		 T& operator[](int index)
		{
			return this->pAddress[index];


		}
		 //返回数组的容量大小
		 int getCapacity()
		 {
			 return this->m_Capacity;
		 }
		 int getSize()
		 {
			 return this->m_Size;
		 }
		~MyArray()
		{
			if (this->pAddress != NULL)
			{
				delete[]this->pAddress;
				this->pAddress = NULL;
				this->m_Capacity = 0;
				this->m_Size = 0;
			}
		}
    

private:
	T*pAddress;//指针指向堆区开辟的真实数组
	int m_Capacity;//数组容量
	int m_Size;//数组大小

	};