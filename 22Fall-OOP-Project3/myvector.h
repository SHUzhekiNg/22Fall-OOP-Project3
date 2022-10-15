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

	friend ostream& operator<<(ostream& out, const MyVector& v);
	friend istream& operator>>(istream& in, MyVector& v);
	MyVector& operator=(const MyVector& v);
	bool operator== (const MyVector& a);
	T& operator[] (const int& index) const;
	
private:
	T* data;
	int length;
};

#endif // !MYVECTOR_H_
