#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

int linearSearch(auto Data, auto key)
{
	for(int i = 0; i < Data.size(); i ++)
	{
		if (Data[i] == key)//we found it
		{
			return i;//return its location
		}
	}//end for
	return -1;//element not found
