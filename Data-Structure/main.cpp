#include "List.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	MyList<std::string> list;
	list.ListInsert("0hello");
	list.ListInsert("1hello");
	list.ListInsert("2hello");
	list.ListInsert("3hello");
	list.ListInsert("4hello");
	list.ListInsert("5hello");
	list.ListInsert("2.5hello", 6);

	cout << "Length:" << list.ListLength() << endl;
	for (int i = 0; i < list.ListLength(); i++)
	{
		cout << list.GetElem(i)->data << endl;
	}

	return 0;
}