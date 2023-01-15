#include<stdio.h>
main()
{
	int year;
	printf("Input a year \n");
	scanf("%d", &year);
	if (year%4==0)
	{
	 if (year%400==0)
	 {
	  if (year%100!=0)
	  {
	   printf("It is a leap year in Gregorian calendar \n");
	    printf("It is a leap year in Julian calendar \n");	  

}
}
}
	else
{
	   printf("It is not a leap year. \n");
}
}