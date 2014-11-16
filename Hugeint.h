//Hugeint.h
#ifndef HUGEINT_H
#define HUGEINT_H
#define B 1000000000										//定义B为billion
#include <iostream>
using namespace std;
struct Node
{
	unsigned int r;											//阶数
	int n;													//值
	Node *prior,*next;										//前指针、后指针
};
class Hugeint
{
public:
	//构造与析构
	Hugeint(const Hugeint & hi);
	Hugeint(long long num=0, unsigned int rank=0);
	Hugeint(const char *str);
	Hugeint & operator=(const Hugeint & hi);
	virtual ~Hugeint();
	//重载方括号运算符
	int operator[](int index);
	//重载取负运算符
	Hugeint operator-();
	//重载算术运算符
	friend Hugeint operator+(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator-(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator*(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator/(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator%(const Hugeint hi1, const Hugeint hi2);//ToDo
	//重载迭代赋值运算符
	Hugeint & operator+=(const Hugeint hi);//ToDo
	Hugeint & operator-=(const Hugeint hi);//ToDo
	Hugeint & operator*=(const Hugeint hi);//ToDo
	Hugeint & operator/=(const Hugeint hi);//ToDo
	Hugeint & operator%=(const Hugeint hi);//ToDo
	//重载前后增减量运算符
	Hugeint & operator++();//ToDo
	Hugeint & operator--();//ToDo
	Hugeint operator++(int);//ToDo
	Hugeint operator--(int);//ToDo
	//重载关系运算符
	friend bool operator==(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator!=(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator> (const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator>=(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator< (const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator<=(const Hugeint &hi1, const Hugeint &hi2);
	//重载I/O流运算符
	friend ostream & operator<<(ostream &out, const Hugeint &hi);
	friend istream & operator>>(istream &in, Hugeint &hi);
protected:
	void Insert(int num, unsigned int rank);				//将nd插入到rank阶数应该存在的位置，可增、改
	void Fix0();											//修正链表
private:
	int sign;												//1表示正数，-1表示负数
	Node *head;
};
#endif
