#include "myvector.h"
template<typename T>
MyVector<T>::~MyVector()
{
	length = 0;
	if (data != nullptr) delete[] data;
}

template<typename T>
MyVector<T>::MyVector(const MyVector& v)
{
	length = 0;
	data = nullptr;
	*this = v;
}

template<typename T>
MyVector<T>::MyVector(int ll, const T* v)
{
	length = (ll > 0) ? ll : 0;
	data = nullptr;
	if (length > 0)
	{
		data = new T[length];
		for (int i = 0; i < length; i++)
			data[i] = (v == nullptr) ? 0 : v[i];
	}
}

template<typename T>
void MyVector<T>::push_back(T dt)
{
	T dx = new T[length + 1];
	for (int i = 0; i < length; i++) {
		dx[i] = data[i];
	}
	delete[] data;
	data = dx;
}

template<typename T>
void MyVector<T>::resize(const int& s)
{
	if (s < 0 || s == length)
		return;
	else if (s == 0)
	{
		if (data != nullptr) delete[] data;
		data = nullptr;
		length = 0;
	}
	else
	{
		T* temp = data;
		data = new T[s];
		for (int i = 0; i < s; i++)
			data[i] = (i < length) ? temp[i] : 0;
		length = s;
		delete[] temp;
	}
}

template<typename T>
MyVector<T>& MyVector<T>::operator=(const MyVector<T>& v)
{
	if (length != v.length)
	{
		if (data != nullptr) delete[] data;
		length = v.length;
		data = new T[length];
	}
	for (int i = 0; i < length; i++)
		data[i] = v.data[i];
	return *this;
}

template<typename T>
bool MyVector<T>::operator==(const MyVector<T>& a)
{
	if (a.length != length) return false;
	else
		for (int i = 0; i < length; i++)
			if(a[i] != data[i]) return false;
	return true;
}

template<typename T>
T& MyVector<T>::operator[](const int& index) const
{
	if (index > length || index < 0) cerr << "下标越界！" << endl;
	if (data == nullptr) cerr << "向量为空指针！" << endl;
	else return data[index];
}

template<typename T>
ostream& operator<<(ostream& out, const MyVector<T>& v)
{
	if (v.length == 0)
		out << "()";
	else
	{
		out << "(" << v.data[0];
		for (int i = 1; i < v.length; i++)
			out << ", " << v.data[i];
		out << ")";
	}
	return out;
}

template<typename T>
istream& operator>>(istream& in, MyVector<T>& v)
{
	// TODO: 在此处插入 return 语句
}
