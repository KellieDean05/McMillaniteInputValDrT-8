/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;
class Scoreboard
{
  private:

  string home;
  string visitor;
  int homeScore;
  int visitorScore;
  int homeTimeouts;
  int visitorTimeouts;
  Team team;
 public:
  void setTeamName(string n) { team.setName(n); } 
  void setCoachName(string n) { team.setCoachName(n); }
  void setHomeCity(string n) { team.setHomeCity(n); }
  void setHomeStatus(bool b) { team.setHomeStatus(b); }
  void setScore(int s) { team.setScore(s); }void handleOption(string i, Team &t1, Team &t2)
{
  string choice, s;
  string name, lm;
  int n;
  if (i == "A" || i == "a"){
    cout << "\nWhich team would you like to update the score for" << endl;
    cout << "l. " << t1.getName() << endl;
    cout << "m. " << t2.getName() << endl;
    cout << "Please enter a selection: ";
    choice = validateString(choice);
    { if (choice == "L" || choice == "l"){
        cout << "Team Name: ";
        n = validateInt(n);
        t1.setScore(n);
      }
      else if (choice == "M" || choice == "m"){
        cout << "Team Name: ";
        n = validateInt(n);
        t2.setScore(n);
      }
     }
  
  
else if (i == "B" || i == "b")
  {
    cout << "\n Please enter team names:" << endl;
    cout << "L. " << t1.getName() << endl;
    cout << "M. " << t2.getName() << endl;
    choice = validateString(choice);
     
  } 

  else if (i == "C" || i == "c"){
    cout << "\nWHich team would you like to update their city?" << endl;
    cout << "L. " << t1.getHomeCity() << endl;
    cout << "M. " << t2.getHomeCity() << endl;
  
     choice = validateString(choice);

     { if (choice == "L" || choice == "l"){
        cout << "New city for " << t1.getName() << " is ";
     s = validateInt(s);
        t1.setHomeCity(s);
      }
      else if (choice == "M" || choice == "m"){
        cout << "New city for " << t2.getName() << " is ";
        lm = validateString(lm);
        t2.setHomeCity(s);
      } 
     }
  }
  else if (i == "D") {
    cout << "Which team would you like to update their name:" << endl
      << "A. " << t1.getName() << endl
      << "B. " << t2.getName() << endl
      << "Please make a choice: ";
      cin >> choice;
      { if (choice == "A" || choice == "a"){
          cout << "New name: ";
          cin >> s;
          t1.setName(s);
        }
        else if (choice == "B" || choice == "b"){
          cout << "New name: ";
          cin >> s;
          t2.setName(s);
        }

  }
}
else if (i == "E") {
    cout << "Which team would you like to update the timeout count:" << endl
      << "A. " << t1.getName() << endl
      << "B. " << t2.getName() << endl
      << "Please make a choice: ";
      cin >> choice;
      { if (choice == "A" || choice == "a"){
          cout << "New timeout count: ";
          cin >> n;
          t1.setTimeoutCount(n);
        }
        else if (choice == "B" || choice == "b"){
          cout << "New timeout count: ";
          cin >> n;
          t2.setTimeoutCount(n);
        }

  }
}
else if (i == "F"){
    cout << "\nWhich team's coaches name would you like to update?" << endl
    << "A. " << t1.getName() << endl
    << "B. " << t2.getName() << endl
    << "Please make a choice: ";
    cin >> choice;

     { if (choice == "A" || choice == "a"){
        cout << t1.getName() << " New coach is ";
        cin >> s;
        t1.setCoachName(s);
      }
      else if (choice == "B" || choice == "b"){
        cout << t2.getName() << " New coach is ";
        cin >> s;
        t2.setCoachName(s);
      } 
     }}}
int main()
{
showMenu();

    return 0;
}
