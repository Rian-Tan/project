// include headers, iostream for read/write

#include <iostream>

//optional: use the namespace std (might be bad practice since the standard library is a huge header
//use namespace std //uncomment this line if u want to use the namespace anyways

// init main fn


int subtract(int x, int y); // if we declare a function below the main function, we must reference it here 
int main(){
	std::cout << "hi" << std::endl; /* std::endl and \n does the same thing, with one difference: */	
	std::cout << "bye" << "\n";     /* std::endl causes a flush in output, \n creates a newline and does not flush*/ 
	//declaring variables
	int var1 {69}; // we initialize variables in c++ using the direct initializer: [type] [variable name] {[value]}
	//declaring custom variable size 
	int64_t var2 {69420}; //big number (64bit int)
	char var3 {'a'};
	//strings:
	std::string var4 {"hi this is a string"};
	std::cout << var4 << "\n";

	//input:
	std::string var5;
	std::cin >> var5;
	std::cout << var5 << "\n"; //returns your input
	std::cout << "enter a number" << std::endl;
	int var6, var7;
	std::cin >> var6;
	std::cout << "enter another number" << std::endl;
	std::cin >> var7;
	int var8 {subtract(var6, var7)};
	std::cout << var8 << std::endl;
}

int subtract(int x, int y){
	return x - y;
}
