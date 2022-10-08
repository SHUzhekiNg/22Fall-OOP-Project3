#pragma once
#ifndef MYVECTOR_H_
#define MYVECTOR_H_

#include <iostream>
using namespace std;

template <typename T>
class MyVector{
public:
	MyVector():data(nullptr),l(0);
	~MyVector();
	MyVector(const MyVector& v);
	MyVector(const T* v);

	void push_back(T dt);
	int size(void) const { return l; }

	friend ostream& operator<<(ostream& out, const MyVector<T>& v);
	friend istream& operator>>(istream& in, MyVector<T>& v);
	bool operator== (const MyVector<T>& a);
	T& operator[] (const int& index) const;
	
private:
	T* data;
	int l;
};

#endif // !MYVECTOR_H_
