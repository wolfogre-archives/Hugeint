//Main.cpp
#include "Hugeint.h"
int main(void)
{
	long long lB=B;
	Hugeint hi(lB*lB-1,10);
	cout<<hi<<endl;
	cout<<sizeof(short int)<<"   "<<sizeof(int)<<"   "<<sizeof(long long int)<<endl;
	return 0;
}
