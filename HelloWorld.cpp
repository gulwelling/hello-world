//library containing cout
#include <iostream>
//the first thing to be executed is the main() function
//it is type int so for the purposes of failure checking
//	-upon failure typically programs return -1
//	-upon success typically programs return  0
int main(){
	std::cout << "Hello World\n";//cout outputs to the screen
	system("PAUSE");//this line pauses the program so that the output can be viewed
	return 0;//the program returns a value of 0 to demarcate a successful execution
}
