#include <iostream>
using namespace std;



/* 1971 1 1  ÷‹ŒÂ  5   */
char * dayOfTheWeek(int day, int month, int year){

	int total_interval = 0;
	int i = 0;

	char dayofmonth[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	char mon[] = "Monday";
	char tues[] = "Tuesday";
	char wedn[] = "Wednesday";
	char thurs[] = "Thursday";
	char frid[] = "Friday";
	char sat[] = "Saturday";
	char sun[] = "Sunday";

	char** re = (char**)calloc(7, sizeof(char*));

	re[1] = mon;
	re[2] = tues;
	re[3] = wedn;
	re[4] = thurs;
	re[5] = frid;
	re[6] = sat;
	re[0] = sun;



	for (i = 1971; i < year; i++)
	{
		if (i % 4 == 0)
		{
			total_interval += 366;
		}
		else
		{
			total_interval += 365;
		}
	}


	for (i = 0; i < month; i++)
	{
		total_interval += dayofmonth[i];
	}

	if ((year % 4 != 0) && month>2)
	{
		total_interval -= 1;
	}

	total_interval += day;

	total_interval = total_interval % 7;

	total_interval = (4 + total_interval) % 7;



	return re[total_interval];

}
int main()
{

}