#include <iostream>
using namespace std;
#include "Array.h"
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
	cout << "enter the item you want to add:\n";
	cin >> newitem;
	myarray.append(newitem);
	myarray.display();

	cout << "index & item\n";
	cin >> index >> newitem;
	myarray.insert(index, newitem);
	myarray.display();
	cout << "size of array : " << myarray.get_size() << "\t" << "lengh of array : " << myarray.get_length() << endl;

	cout << "the index you want to delete\n";
	cin >> index;
	myarray.delete_at(index);
	myarray.display();

	cout << "Size of array: " << myarray.get_size() << "\tLength of array: " << myarray.get_length() << endl;
}
