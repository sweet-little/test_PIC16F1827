#pragma once

class iclass_A
{
public:
	virtual ~iclass_A() {}
	virtual int operator()(const int*, const int) = 0;
};

constexpr unsigned N = 20;

template<typename T>
class class_A
	: public iclass_A
{
	T* data;
public:
	class_A(T* data) : data(data) { }
	~class_A() {}
	int operator()(const int* buffer, const int size) override { return 0; }
};

