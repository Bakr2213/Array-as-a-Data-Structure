#include <iostream>
using namespace std;
#include<array>
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
		if (index >= 0 && index < size)
		{ 
			for (int i = length; i < index; i--)
			{
				items[i] = items[1 - i];
			}	
			items[index] = newitem;
			length++;
		}
		else
			cout << "index out of range\n";
	}
};
int main()
{
	cout << "This is array ADT demon\n";
	int arraysize;
	cout << "enter the array size:\n";
	cin >> arraysize;
	Array myarray(arraysize);
	myarray.fill();
	myarray.display();

	cout << "enter value you want to search for :\n";
	int key;
	cin >> key;
	int index = myarray.search(key);
	if (index == -1)
		cout << "item not found\n";
	else
		cout << "item found at position : " << index << endl;

	int newitem = 0;
 /* cout << "enter the item you want to add:\n";
	cin >> newitem;
	myarray.append(newitem);
	myarray.display(); */
	
	cout << "index & item\n";
	cin >> index>>newitem;
	myarray.insert(index,newitem);
	myarray.display();
	cout << "size of array : " << myarray.get_size() << "\t" << "lengh of array : " << myarray.get_length() << endl;
}

