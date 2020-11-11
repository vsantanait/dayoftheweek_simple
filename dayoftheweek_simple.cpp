#include <iostream>
#include <string>

using namespace std;
//using std::cout;

int main()
{

	//Reference: https://cs.uwaterloo.ca/~alopez-o/math-faq/node73.html
	
	const int CURRENT_YEAR = 2020;
	int month = 0, day = 0, year = 0;
	string dayOfTheWeek = "";

	do
	{
		//Ask the user to input the month (MM), day (DD) and year(YYYY).
		cout << "Enter a month (MM format), a day (DD format), and a year (YYYY format): ";
		cin >> month >> day >> year;
		cout << endl;

		if (year != CURRENT_YEAR)
		{
			//If the year is not 2020, the program outputs an error message and asks for new inputs.
			cout << "Error! The year you entered (" << year
				<< ") does not equal the current year (" << CURRENT_YEAR
				<< ")." << endl;

			month = 0;
			day = 0;
			year = 0;
		}
		else
		{
			if ((month >= 1) && (month <= 12))
			{
				//If the year is 2020 and the day and month are valid
				//k = the day (1 - 31)
				//m = the month (1 = March, ... , 10 = December, 11 = January, 12 = February)
				//C = the century (first two digits), year/100 (1987 has C = 19)
				//Y = the year (last two digits), year%100 (1987 has Y = 87, except Y = 86 for January & February)
				//W = the weekday (0 = Sunday, ... 6 = Saturday)

				int W = 0, k = 0, m = 0, C = 0, Y = 0;

				if ((month == 1))
				{
					if ((day >= 1) && (day <= 31))
					{
						m = 11;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 2))
				{
					if ((day >= 1) && (day <= 29))
					{
						m = 12;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 3))
				{
					if ((day >= 1) && (day <= 31))
					{
						m = 1;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 4))
				{
					if ((day >= 1) && (day <= 30))
					{
						m = 2;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 5))
				{
					if ((day >= 1) && (day <= 31))
					{
						m = 3;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 6))
				{
					if ((day >= 1) && (day <= 30))
					{
						m = 4;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 7))
				{
					if ((day >= 1) && (day <= 31))
					{
						m = 5;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 8))
				{
					if ((day >= 1) && (day <= 31))
					{
						m = 6;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 9))
				{
					if ((day >= 1) && (day <= 30))
					{
						m = 7;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 10))
				{
					if ((day >= 1) && (day <= 31))
					{
						m = 8;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 11))
				{
					if ((day >= 1) && (day <= 30))
					{
						m = 9;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((month == 12))
				{
					if ((day >= 1) && (day <= 31))
					{
						m = 10;
					}
					else
					{
						//If the year is 2020 and the day is  not valid (for example 02/30/2020 is not valid),
						//the program outputs an error messageand asks for new inputs.
						cout << "Error! The day value you entered (" << day
							<< ") is not valid." << endl;

						month = 0;
						day = 0;
						year = 0;
					}

				}
				if ((m >= 1) && (m <= 12))
				{
					//Otherwise, the program calculates what day of the week the date falls on, and outputs the day.
					k = day;
					C = year / 100;

					if ((m == 11) || (m == 12))
						Y = (year % 100) - 1;
					else
						Y = year % 100;

					W = (k + ((int)(2.6 * m - 0.2)) - (2 * C) + Y + ((int)(Y / 4)) + ((int)(C / 4))) % 7;

					if (W == 0)
					{
						dayOfTheWeek = "Sunday";
						cout << "You entered the date: " << month
							<< "/" << day
							<< "/" << year << ".\n";
						cout << "For this date, the day of the week is: " << dayOfTheWeek << endl
							<< endl;
					}
					if (W == 1)
					{
						dayOfTheWeek = "Monday";
						cout << "You entered the date: " << month
							<< "/" << day
							<< "/" << year << ".\n";
						cout << "For this date, the day of the week is: " << dayOfTheWeek << endl
							<< endl;
					}
					if (W == 2)
					{
						dayOfTheWeek = "Tuesday";
						cout << "You entered the date: " << month
							<< "/" << day
							<< "/" << year << ".\n";
						cout << "For this date, the day of the week is: " << dayOfTheWeek << endl
							<< endl;
					}
					if (W == 3)
					{
						dayOfTheWeek = "Wednesday";
						cout << "You entered the date: " << month
							<< "/" << day
							<< "/" << year << ".\n";
						cout << "For this date, the day of the week is: " << dayOfTheWeek << endl
							<< endl;
					}
					if (W == 4)
					{
						dayOfTheWeek = "Thursday";
						cout << "You entered the date: " << month
							<< "/" << day
							<< "/" << year << ".\n";
						cout << "For this date, the day of the week is: " << dayOfTheWeek << endl
							<< endl;
					}
					if (W == 5)
					{
						dayOfTheWeek = "Friday";
						cout << "You entered the date: " << month
							<< "/" << day
							<< "/" << year << ".\n";
						cout << "For this date, the day of the week is: " << dayOfTheWeek << endl
							<< endl;
					}
					if (W == 6)
					{
						dayOfTheWeek = "Saturday";
						cout << "You entered the date: " << month
							<< "/" << day
							<< "/" << year << ".\n";
						cout << "For this date, the day of the week is: " << dayOfTheWeek << endl
							<< endl;
					}

				}
			}
			else
			{
				//If the year is 2020 and the day and the month are not valid (for example 02/30/2020 is not valid),
				//the program outputs an error messageand asks for new inputs.
				cout << "Error! The month value you entered (" << month
					<< ") is not valid." << endl;

				month = 0;
				day = 0;
				year = 0;
			}
		}
	}
	while (year == 0);

	return 0;
}