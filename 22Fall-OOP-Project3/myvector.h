#pragma once
#ifndef MYVECTOR_H_
#define MYVECTOR_H_

#include <iostream>
using namespace std;

template <typename T>
class MyVector{
public:
	MyVector(int ll, const T* v);
	~MyVector();
	MyVector(const MyVector& v);

	void push_back(T dt);
	int size(void) const { return length; }
	void resize(const int& s);

	friend ostream& operator<<(ostream& out, const MyVector& v) {
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
	//friend istream& operator>>(istream& in, MyVector& v);
	MyVector& operator=(const MyVector& v);
	bool operator== (const MyVector& a);
	T& operator[] (const int& index) const;
	
private:
	T* data;
	int length;
};
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
	T *dx = new T[length + 1];
	for (int i = 0; i < length; i++) {
		dx[i] = data[i];
	}
	delete[] data;
	dx[length] = dt;
	data = dx;
	length++;
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
			if (a[i] != data[i]) return false;
	return true;
}

template<typename T>
T& MyVector<T>::operator[](const int& index) const
{
	if (index > length || index < 0) cerr << "下标越界！" << endl;
	if (data == nullptr) cerr << "向量为空指针！" << endl;
	else return data[index];
}


#endif // !MYVECTOR_H_
