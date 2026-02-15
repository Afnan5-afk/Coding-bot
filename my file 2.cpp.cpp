     
#include <iostream>//It tells the compiler to include a specific library . iostream stands for input/output stream
//without this the computer would not understand what the cout is.
using namespace std;// it helps us not to write std::cout again and again before every line
//once it is written then you donnot need to write std::cout before every line
int main()//it is the main function. Every C++ program starts from here
    {//{} it acts like a container. Every thing between opening brace and closing brace belongs to the main function
    cout << "Welcome to C++!\n";//cout is the output statement and n is the special character that creates a new line
	//Every statement must end with semicolon; it is like a full stop                                 
    return 0;   //It tells the operating system that program has finished successfully
    //Returning any other number would result an error
    } // end function main

