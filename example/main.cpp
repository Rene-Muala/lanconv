#include <iostream>
#include <string>
#include "../source/lanconv.hpp"

int main(){
	std::string num_str = "73";
	int num_int = lan::to_int(num_str);
	float num_float = lan::to_float(num_str) + 0.5;
	double num_double = lan::to_double(num_str) + 0.5555;
	long num_long = lan::to_long(num_str);
	long long num_llong = lan::to_long_long(num_str);
	
	num_str = lan::to_string(num_int+1);
	
	std::cout << "int: " << num_int << std::endl 
	<< "float: " << num_float << std::endl 
	<< "double: " << num_double << std::endl
	<< "long: " << num_long << std::endl
	<< "long long: " << num_llong << std::endl
	<< "string: " << num_str << std::endl; 
}
