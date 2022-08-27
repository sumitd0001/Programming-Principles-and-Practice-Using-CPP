/*
In C++, 
string literals are delimited by double quotes ("); 
that is, "Hello, World!\n" 
is a string of characters. 
The \n is a “special character” 
indicating a newline. 
The name cout refers to a standard output stream. 
Characters “put into
cout” using the output operator << will appear on the screen.

forward slash - the slash we use to comment
backward slash - for new line

#include : to include failities from a given file, for e.g., 
#include <iostream> // include facilities from iostream library, use of cout made possible by including it
*/

/*
Program : 
Outputs the message "Hello, World!" to the monitor
First it’ll write Hello, World! to the screen, and then it will return a value 0 (zero)
to whoever called it. Since main() is called by “the system,” we won’t use that
return value. However, on some systems (notably Unix/Linux) it can be used to
check whether the program succeeded. A zero (0) returned by main() indicates
that the program terminated successfully.
*/

#include <iostream> // input - output stream

int main () {
    std::cout<<"Hello, World!\n";
    return 0;
}


