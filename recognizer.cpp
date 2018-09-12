//----------------------------------------------
// CS421 HW1
// Write a recognizer in C++ for L = {x | x is a binary number}.
// Your name: Micah McCarver
// File: Recognizer.cpp
// Date: Due 9/14/18
//----------------------------------------------

#include<iostream>
#include<string>
using namespace std;

bool recognizer(string s);

int main()
{ 

  string recog_string; 
  int limit = 20; // limits total number of attempts to 20 or when there is an overflow

  for (int i=0; i< limit; i++)
    {

      cout << "Enter a string: " ;
      cin >> recog_string; 
      // read in user string
            
      recognizer(recog_string); // pass user's input to recognizer

      bool recog_flag = recognizer(recog_string);

      // output based on flag's determination if string is in language
      if (recog_flag == true)
	{
	  cout << "YES IN L" << endl;
	  cout << endl;
	}
      
      if (recog_flag == false)
        {
          cout << "NO NOT IN L" << endl;
	  cout << endl;
        }
    } 

  return 0;

}// end of main

//------------------------------------------------------------------------
bool recognizer(string s)
{

  for (int j=0; j<s.length(); j++) // test if the string is a 0 or 1
    
    {
      if (s[j] != '0' && s[j] != '1')
	{     
	  return false;
	}
    }
  
  return true; 
  
} // end of recognizer

//------------------------------------------------------------------------
