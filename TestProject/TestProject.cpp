// TestProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;










int main()
{
   
	
	//adding-all-the-elements-in-array-then-divide-by-3

	int myArray[3] = { 2,3,4 };

	//this points to the first element
	int y = myArray[0];
	int* m = &y;

	//this points to the second element
	int a = myArray[1];
	int* b = &a;
	
	//this points to the third element
	int x = myArray[2];
	int* z = &x;
	
	//apply math
	int c = (*z + *m + *b) / 3;

	//the output = 3
	cout << c;
	

	


}


