#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MyVector{
public:
	MyVector();
	~MyVector();
	MyVector(const MyVector& v);

	bool operator== (const MyVector<T>& a, const MyVector<T>& b);
	friend T& operator [](const int& index);


private:
	T* data;
};
