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
	Array(int arrsize)
	{
		size = arrsize;
		length = 0;
		items = new int[arrsize];
	}
	void fill()
	{
		int no_items;
		cout << "how many items you want to fill? \n";
		cin >> no_items;
		if (no_items > size)
		{
			cout << "you cannot exceed array size \n";
			return;
		}
		else
		{
			for (int i = 0; no_items > i; i++)
			{
				cout << "enter item no:" << i << endl;
				cin >> items[i];
				length++;
			}
		}
	}
	void display()
	{
		cout << "Display array content \n";
		for (int i = 0; i < length; i++)
		{
			cout << items[i] << "\t";
		}
		cout << endl;
	}
	int get_size()
	{
		return size;
	}
	int get_length()
	{
		return length;
	}

	int search(int key)
	{
		int index = -1;
		for (int i = 0; i < length; i++)
		{
			if (items[i] == key)
			{
				index = i;
				break;
			}
		}
		return index;
	}
	void append(int newitem)
	{
		if (length < size)
		{
			items[length] = newitem;
			length++;
		}
		else
			cout << "Array is full\n";
	}
	void insert(int index, int newitem)
	{
		if (index < 0 || index > length) {
			cout << "Index out of bounds!\n";
			return;
		}

		if (length == size) {
			cout << "Array is full, cannot insert!\n";
			return;
		}

		// Shift elements to the right from the insertion point
		for (int i = length - 1; i >= index; i--) {
			items[i + 1] = items[i];
		}

		items[index] = newitem;  // Insert the new element
		length++;  // Increase the array length
		cout << "Element inserted at index " << index << endl;
	}

	void delete_at(int index) {
		if (index < 0 || index >= length) {
			cout << "Index out of bounds!\n";
			return;
		}

		// Shift all elements to the left from the deletion point
		for (int i = index; i < length - 1; i++) {
			items[i] = items[i + 1];
		}

		length--;  // Reduce the length since one element is removed
		cout << "Element deleted at index " << index << endl;
	}

};

