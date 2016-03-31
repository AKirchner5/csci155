#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
 
int main ()
{
ofstream outputFile;  
   // local variable declaration:
   char grade;
  
  outputFile.open("switch.txt");
  
  cout << "What is the grade :";
  cin >> grade;
 
   switch(grade)
   {
   case 'A' :
   case 'a':   
       outputFile << "100-90" << endl;
       outputFile << "Excellent!" << endl;
      break;
   case 'B' :
   case 'b':
       outputFile << "89-80" << endl;
       outputFile << "Great Job" << endl;
       break;
   case 'C' :
   case 'c':
      outputFile << "79-70" << endl;
      outputFile << "Well done" << endl;
      break;
   case 'D' :
   case 'd':    
      outputFile << "69-60" << endl;
      outputFile << "You passed" << endl;
      break;
   case 'F' :
   case 'f':
      outputFile << "59-0" << endl; 
      outputFile << "Better try again" << endl;
      break;
   default :
      outputFile << "Invalid grade" << endl;
   }
   outputFile << "Your grade is " << grade << endl;
cout << "Information has been saved to file.\n";
  
  //Close the file. 
  outputFile.close();
  cout << "Done.\n";
  return 0;
}