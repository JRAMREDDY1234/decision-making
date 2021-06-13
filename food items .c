#include<stdio.h>
int main()
{
	printf("Choose a number ");
	int Choose;
	scanf("%d",&Choose);
	switch(Choose)
	{
		case 1:
			printf("\n Food item-Pizza");
			printf("\n Price-Rs239");
			break;
	  case 2:
			printf("\n Food item-Burger");
			printf("\n Price-Rs129");
			break;
		case 3:
			printf("\n Food item-Pasta");
			printf("\n Price-Rs179");
			break;
		case 4:
			printf("\n Food item-French Fries");
			printf("\n Price-Rs99");
			break;
		case 5:
			printf("\n Food item-Sandwich");
			printf("\n Price-Rs149");
			break;
		default:
			printf("choosen item is not in the list");
			break;
	}
}
