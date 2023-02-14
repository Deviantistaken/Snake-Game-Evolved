
//Opens 15 Rick Roll tabs in the foreground in the users default browser. First experiment with C++ in windows.

#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main()
{
  int resp;
  cout <<"You want to play the game?[yes = 1, no = 0]" << endl;
  cin >> resp;
  if(resp==1)
  {
  
      cout <<"Glad you said yes" << endl;
      ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=oHg5SJYRHA0", NULL, NULL, SW_SHOWNORMAL);
    cout.flush();
  }
  else if(resp==0)
  {
      cout <<"Y u so no?" << endl;
      ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=CNDI4WlJ8eo", NULL, NULL, SW_SHOWNORMAL);
    cout.flush();
  }
  else
  {
      cout <<"Y u no answer correctly?!?1" << endl;
    while(1)
       ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=CNDI4WlJ8eo", NULL, NULL, SW_SHOWNORMAL);
    cout.flush();
}
  
    
  

}
