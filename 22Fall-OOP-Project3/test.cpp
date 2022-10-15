#include "myvector.h"
int main() 
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	MyVector<int> vec1(10,a);
	return 0;
}