#include "myvector.h"
template<typename T>
MyVector<T>::MyVector()
{
}

template<typename T>
MyVector<T>::~MyVector()
{
}

template<typename T>
MyVector<T>::MyVector(const MyVector& v)
{
}

template<typename T>
MyVector<T>::MyVector(const T* v)
{
}

template<typename T>
void MyVector<T>::push_back(T dt)
{
}

template<typename T>
bool MyVector<T>::operator==(const MyVector<T>& a)
{
	return false; // TODO:
}

template<typename T>
T& MyVector<T>::operator[](const int& index) const
{
	if (index > l) cerr << "�±�Խ�磡" << endl;
	else return data[index];
}

template<typename T>
ostream& operator<<(ostream& out, const MyVector<T>& v)
{
	// TODO: �ڴ˴����� return ���
}

template<typename T>
istream& operator>>(istream& in, MyVector<T>& v)
{
	// TODO: �ڴ˴����� return ���
}
