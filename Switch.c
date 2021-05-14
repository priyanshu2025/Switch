#include<stdio.h>
main()
{
	//1. Display the menu
	printf("Pick an iteam : \n1. 0\n2. 1");
	//2. Read their choice
	int choice=0;
	scanf("%d",&choice);
	//3. Display based on their choice 
	
	switch(choice)
	{
		case 1:
			printf("You picked 0.");
			break;
		case 2:
		    printf("You picked 1.");
		    break;
		default : printf("Use the default case");    			
	} 
}
