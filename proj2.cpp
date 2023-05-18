/**

*File Name: proj2.cpp

*Academic Integrity Statement: I certify that, while others may have assisted me in brain storming, debugging and validating this program, the program itself is my own work. I understand that submitting code which is the work of other individuals is a violation of the course Academic Integrity Policy and may result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. I also understand that if I knowingly give my original work to another individual that it could also result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. See Academic Integrity Procedural Guidelines (Links to an external site.) at:  https://psbehrend.psu.edu/intranet/faculty-resources/academic-integrity/academic-integrity-procedural-guidelines (Links to an external site.)

*Assisted by and Assisted line numbers:

*Your Name: Cory Drangel

*Your PSU user ID: cjd209

*Course title: CMPSC465 Summer 2022 

*Due Time: 11:59 pm, Sunday, June 12, 2022

*Time of Last Modification: 07:18 am, Sunday, June 12, 2022

*Description: Takes a number as input and outputs total combination of well formed parentheses

*/
#include <iostream>
#include <string.h>

using namespace std;

void parentheses(string str, int n, int opening, int closing);

int main() {
  int n;
  //empty string to pass into function
  string str = "";
  //int values for the number of opening and closing parentheses 
  //both initialized to 0
  int opening = 0, closing = 0; 

  cout << "Please enter the number of pairs of parentheses: ";
  cin >> n;

  parentheses(str, n, opening, closing);
}

void parentheses(string str, int n, int opening, int closing){
  //base case for if both opening and closing parentheses equal n value
  if(opening == n && closing == n){
    //printing the string
    cout << str << endl;
    return;
  }
  //recursive case if there are more opening parentheses than closing
  if(opening > closing){
    //recursive call adding a closing parenthese to string and
    //adding 1 to the closing count
    parentheses(str + ")",n, opening, closing+1);
  }
  //recursive case if the number of opening parentheses is less than the n value
  if(opening < n){
    //recursvie call adding a opening parenthese to the string and 
    //adding 1 to the opening count
    parentheses(str+"(", n, opening +1, closing);
  }
}

/*
  Please enter the number of pairs of parentheses: 3
()()()
()(())
(())()
(()())
((()))
*/

/*
Please enter the number of pairs of parentheses: 4
()()()()
()()(())
()(())()
()(()())
()((()))
(())()()
(())(())
(()())()
(()()())
(()(()))
((()))()
((())())
((()()))
(((())))
*/

/*
Please enter the number of pairs of parentheses: 5
()()()()()
()()()(())
()()(())()
()()(()())
()()((()))
()(())()()
()(())(())
()(()())()
()(()()())
()(()(()))
()((()))()
()((())())
()((()()))
()(((())))
(())()()()
(())()(())
(())(())()
(())(()())
(())((()))
(()())()()
(()())(())
(()()())()
(()()()())
(()()(()))
(()(()))()
(()(())())
(()(()()))
(()((())))
((()))()()
((()))(())
((())())()
((())()())
((())(()))
((()()))()
((()())())
((()()()))
((()(())))
(((())))()
(((()))())
(((())()))
(((()())))
((((()))))
*/
