//Main.cpp
#include "Hugeint.h"
int main(void)
{
	Hugeint hi1(123456789);
	cout<<"hi1:"<<hi1<<endl;
	Hugeint hi2="-11111111111111111111111111111111111111111111111111111111111111111234567890987654321000";
	cout<<"hi2:"<<hi2<<endl;
	hi2=hi1=hi2;
	cout<<"hi2=hi1:"<<hi2<<endl;
	return 0;
}
