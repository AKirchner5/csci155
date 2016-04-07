// This function shows that local variables do not retain
// their values between function calls.
#include <iostream>
#include <fstream>
using namespace std; 

// Function prototype
void showLocal ();
int main ()
{

showLocal ();
return 0;
}

void showLocal ()
{
ofstream outputFile;
// Open an output file.
outputFile.open("local.txt");
  
int localNum = 5; // Local variables
  
outputFile << "localNum is" << localNum << endl;
localNum = 99;
//Close the file. 
  outputFile.close();
  cout << "Done.\n";  
}