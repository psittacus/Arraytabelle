#include <iostream>  // Standard for the std::cout (...)
#include <Windows.h> //For the Sleep function


int main(){


	int array[5]; //first array 

	int a = 10;
	while (a <= 50){ //5 times

		for (int i = 0; i <= 40; i += 10){ //4 times

			array[i] = i + a; //second array

			std::cout << array[i]; //printing the "for-array"
			std::cout << " ";	   // Little Gap

			Sleep(100); //Sleep function for a better look (0.1 seconds)

		}
		std::cout << std::endl; //new line --> chart

		a += 10;
	}





	getchar();
	return 0;
}
