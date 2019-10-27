/*	Clem Kadiddlehopper
	Lab 6 Solution
	Computer Science 2
	Howard Community College
*/


// Do not make any changes to this file.

#include <iostream>
#include <string>
#include <vector>
//#include "Month.h"
using namespace std;

class Month{
	private:
		string name;
		int monthNumber;
	public:
		Month(){
			setName("January");
			setMonthNum(1);
		}
		Month(string name){
			setName(name);
			setCorrectMonthNum(name);
		}
		Month(int monthNumber){
			setMonthNum(monthNumber);
			setCorrectName(monthNumber);
		}

		// Setter functions
		void setName(string name){
			this->name = name;
		}
		void setCorrectName(int monthNumber){
			if(monthNumber == 1){setName("January");}
			else if(monthNumber == 2){setName("February");}
			else if(monthNumber == 3){setName("March");}
			else if(monthNumber == 4){setName("April");}
			else if(monthNumber == 5){setName("May");}
			else if(monthNumber == 6){setName("June");}
			else if(monthNumber == 7){setName("July");}
			else if(monthNumber == 8){setName("August");}
			else if(monthNumber == 9){setName("September");}
			else if(monthNumber == 10){setName("October");}
			else if(monthNumber == 11){setName("November");}
			else if(monthNumber == 12){setName("December");}
		}
		void setMonthNum(int monthNum){
			this->monthNumber = monthNum;
		}
		void setCorrectMonthNum(string name){
			if(name == "January"){ setMonthNum(1); } 
			else if(name == "February"){ setMonthNum(2); } 
			else if(name == "March"){ setMonthNum(3); } 
			else if(name == "April"){ setMonthNum(4);} 
			else if(name == "May"){ setMonthNum(5);} 
			else if(name == "June"){ setMonthNum(6);} 
			else if(name == "July"){ setMonthNum(7);} 
			else if(name == "August"){ setMonthNum(8);} 
			else if(name == "September"){ setMonthNum(9); }
			else if(name == "October"){ setMonthNum(10); } 
			else if(name == "November"){ setMonthNum(11);}
			else if(name == "December"){setMonthNum(12);}
		}

		// Getter functions
		string getMonth(){
			return name;
		}
		int getMonthNum(){
			return monthNumber;
		}

		// Overloading functions
		Month& operator++ (){
			if(monthNumber++ == 13){
				setMonthNum(1);
				setCorrectName(1);
			} else {
				setMonthNum(monthNumber++);
				setCorrectName(monthNumber);
			}

			return *this;
		}
		Month operator++(int){
			Month temp = *this;

			if(monthNumber++ == 13){
				setMonthNum(1);
				setCorrectName(1);
			} else {
				setMonthNum(monthNumber++);
				setCorrectName(monthNumber);
			}

			return temp;
		}

		void operator= (const Month& month2){
			setName(month2.name);
			setMonthNum(month2.monthNumber);
		}
};

int main()
{
	Month m1("February");
	Month m2;

	cout << m1 << endl;

	return 0;
}
