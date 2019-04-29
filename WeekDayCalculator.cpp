#include <stdio.h>
#include <conio.h>
//Code is based from https://introcs.cs.princeton.edu/java/12types/DayOfWeek.java
const char *GetWeekDay(int year, int month, int date){
	int y0 = year - (14 - month) / 12;
	int x = y0 + y0/4 - y0/100 + y0/400;
	int m0 = month + 12*((14 - month)/12) - 2;
	int d0 = (date + x + (31*m0)/12)%7;
	switch (d0) {
	    case 1: return "Monday(Pazartesi)";
	    case 2: return "Tuesday(Sali)";
	    case 3: return "Wednesday(Carsamba)";
	    case 4: return "Thursday(Persembe)";
	    case 5: return "Friday(Cuma)";
	    case 6: return "Saturday(Cumartesi)";
	    case 0: return "Sunday(Pazar)";
	    default: break;
	}
	return "Fatal Error";
	
}

int main(){
	int year=0,month=0,date=0;
	printf("Date to weekday calculator\n");
	printf("Year=");
	scanf("%d",&year);
	printf("Month=");
	scanf("%d",&month);
	printf("Date=");
	scanf("%d",&date);
	
	printf("%s", GetWeekDay(year, month, date));	
	printf("\nPress any key to exit...");
	getch();
	return 0;
}
