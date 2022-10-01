#include "main.c"

/** 
 * main - main entry function
 * Return: 0
 */

void print_remaining_days(int month, int day, int year)
{
	/* check if leap year conditions are met */
	if ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
	{
		/*check if february 29 is selected */
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n",  day);
		printf("Remaining days: %d\n", 366 - day);
	}
	/* non-leap years */
	else
	{
		/*check for leap month entry */
		if (month == 2 && day == 60)
		{
			printf("Invalid date.");
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n",  365 - day);
	}
}
