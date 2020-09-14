#include<stdio.h>
main()

{


printf("Enter the marks :");
int marks=0;
scanf("%d",&marks);

	if(marks<40)
	{
	printf("Grade F");
	}
	else if(marks>39 && marks<55)
	{
	printf("Grade D");
	}
	else if (marks>54 && marks<70)
	{
	printf("Grade C");

	}
	else if(marks>69 && marks<85)
	{
	printf("Grade B");
	}
	else if (marks>84 && marks<101)
	{
	printf("Grade A");
	}
	else
	{
	printf("Out of range");
	}

}
