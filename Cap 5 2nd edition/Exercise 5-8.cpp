#include <stdio.h>
int day_of_year(int year, int month, int day);
void month_day(int year,int yearday, int *pmonth, int *pday);


main()
{
	
	int day, month;
	month_day(2004,354,&month,&day);
	printf("%d",month);
//printf("%dth of %d",*day,*month);
}

static char daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}

};

int day_of_year(int year, int month, int day)
{
	int i, leap = year % 4 == 0  && year %100 != 0 || year  % 400 == 0;
	
	for(i = 1; i < month; i++)
		day += daytab[leap][i];
		
		if(day <= 365 + leap && day > 0)
			return day;
		else 
			return NULL;
}

void month_day(int year,int  yearday, int *pmonth, int *pday)
{
	int i,leap;
	 leap = year % 4 == 0  && year %100 != 0 || year  % 400 == 0;

	for(i = 1; yearday > daytab[leap][i];i++)
		yearday -= daytab[leap][i];

	if(i <= 12 && yearday <=daytab[leap][i]){
		*pmonth = i;
		*pday = yearday;
			} else 
				printf("Error with units");
 }

