#include <iostream>
#include "include/functions.hpp"
#include "include/if_statement.hpp"
#include "include/for_loop.hpp"
#include "include/switch_case.hpp"
#include "include/while_loop.hpp"

int main(int argc, char* argv[]){

	if(argc > 1){
		switch(argv[1]){
			case 
		}
	}
	else{
		std::cout << "Choose a piece of code to demonstrate: \n";
	}

	std::cout << "\nHello Meriam and Bartholomew!\n";

	int a = 8;
	int b = 9;
	int c = add(a, b);
	std::cout << "\nresult is: " << c << "\n";

	if_statement();

	for_loop();

	switch_case();

	while_loop();


	return 0;
}
