#include <iostream>
using namespace std;

#define y 20 // should not use semi-colon, will give error
#define area(x,y) (x*y) // there should be no space between area(x,y), like area (x,y), does not work like that

/*
for preprocessor file : it will have all the declaration, definition will be included at linking time, binary object file
g++ -E .\prog.cc > preprocessor.ii // intermediate/temporary file

g++ -S .\prog.cc // from compiler , for assembly code, to be used by Assembler, by default file generated will be <name.s>,
if .cc file name is <name.cc>


g++ -c .\prog.cc // for object file, binary file will be used by linker to create executable
*/

int main () {

    int x{1};

    cout<<x+y<<"\n";
    cout<<area(x,y)<<"\n";

    return 0;
}
