#include <iostream>
int functionSimplicity();
 int main()
{
	//The problem to be solved is to declare an array of integers.
	//That array will have 255 elements.
	//For every item in that array print out its character equivalent.
	//int ints[];
	//int ints[255];
	char b = 97;
	int Muse[255]; 
	for (int Muse = 0; Muse <= 255; Muse++)
	{
		Muse = b + 65;
		if (Muse = 256)
		{
			break;
		}
		std::cout << Muse << std::endl;
	}
	
}
 int functionSimplicity()
 {
	 char f = 176;
	 int Roming[255];
	 for (int Roming = 0; Roming <= 255; Roming++)
	 {
		 Roming = f + 65;
		 if (Roming = 256)
		 {
			 break;
		 }
		 std::cout << Roming << std::endl;
	 }
	 return 0;
 }

