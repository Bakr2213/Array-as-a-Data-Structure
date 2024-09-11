#pragma once
#include<iostream>
using namespace std;

class Array
{
private:
	int size;
	int length;
	int* items;
public:
	Array(int arrsize);
	void fill();
	void display();
	int get_size();
	int get_length();

	int search(int key);
	void append(int newitem);
	void insert(int index, int newitem);

	void delete_at(int index);

};

