#include <iostream>
#include "Cat.h"

int main()
{
	Cat catArray[26];
	int i = 65;
	int f = 0;
	
	while (i < 123)
	{
		catArray[f].NameMe(i);
		i+=2;
		f+=2;
		if (i == 91)
		{
			i = 98;
			f = 1;
		}
	}

	system("pause");
}