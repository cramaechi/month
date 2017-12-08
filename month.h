/*------------------------------------------------------------------------
Description: This is the header file tree.h. This is the interface for the
class Month. Values of this type store month values either has integers or
the first three letters of the month.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
------------------------------------------------------------------------*/

class Month
{
public:
	Month(char theFirstLetter, char theSecondLetter, char theThirdLetter);

	Month(int theMonth);
    
	Month();

	void inputMonthChar();
	//Reads in the first three letters of the month from the keyboard.

	void inputMonthInt();
	//Reads in an integer representing the month.

	void outputMonthChar() const;
	//Outputs the first three letters of the month.

	void outputMonthInt() const;
	//Outputs the month as an integer.

	Month getNextMonth();
	//Return the next month as an object of type Month.

	void setMonthInt(int newMonth);

	void setMonthChar(char newFirstLetter, char newSecondLetter, char newThirdLetter);

	int getMonthInt() const;
private:
	int month;
	void monthInt(char firstLetter, char secondLetter, char thirdLetter);
};
