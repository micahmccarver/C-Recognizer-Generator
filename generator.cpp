#include<iostream>
#include<string>
#include <queue>
using namespace std;

bool recognizer(string s);

int main()
{ 
  queue<string> gen_queue; // creating queue
  int limit = 35; // Directions are to go until it overflows but user can interactively terminate at 20
  gen_queue.push("0"); // push 0 and 1 to queue
  gen_queue.push("1");
  int i = 1;
  while (i++ < limit) // use while loop to start generating strings 
    {
      string flag = gen_queue.front();
      gen_queue.push(gen_queue.front() + "0");
      gen_queue.push(gen_queue.front() + "1");
      if (recognizer(flag)){
	cout << "Generated string: " << gen_queue.front()<< ' '<< endl;
      }      
      gen_queue.pop();
      
    }
  
  return 0;
  
}// end of main

// --------------------------------------------------------------
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
// --------------------------------------------------------------
