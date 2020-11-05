//exam2.11
#include <iostream>
using namespace std;
int main()
{
	int n1,n2=5;
	n2++;
	cout<<"n2="<<n2<<endl;
	++n2;
	cout<<"n2="<<n2<<endl;
	n1=n2++;
	cout<<"n1="<<n1<<" n2="<<n2<<endl;
	n1=++n2;
	cout<<"n1="<<n1<<" n2="<<n2<<endl;
	return 0;
}
/*
重点：区别
	n1=n2++  先将n2值赋给n1，然后n2加1
	n1=++n2  n2先加1，然后将n2值赋给n1
*/