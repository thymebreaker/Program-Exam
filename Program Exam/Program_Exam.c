#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int pin, pin_correct = 12345, login_outcome = 0, option, store_inventory[4][4] = { {3,40,3,2},{2,35,3,3},{5,25,3,1},{4,55,3,5} }, store_int, loop = 0, item_selection;
float prices[1][4] = { 299.99,59.99,39.99,19.99 },total_prices[1][4];
char quit, store_char, username[20], username_correct[20] = "Admin21";
main()
{
	//login loop for if the login is incorrect
	while (login_outcome != 1)

	{
		//login prompt and input
		printf("Welcome to the Store Inventory system\n\n\rEnter Your Username: ");
		scanf("%s", &username);
		printf("\n\rEnter your password: ");
		scanf("%d", &pin);
		//if the password or username are incorrect, the while loop will repeat the login prompt
		if (pin == pin_correct && strcmp(username,username_correct)==0)

		{
			//Login was a success. Ends the login while loop
			login_outcome = 1; 
			
		}

		else

		{
			printf("\n\rYour login details were incorrect.\n\r");

		}

	}
	//I'm allowing for the "quit" function to require a confirmation before exiting the program. This while loop allows the user to return to the menu after using a menu function, until they decide to stop using the program
	while (quit != "Y")
	{	//Resets loops within the switch cases
		loop = 0;
		//Menu options displayed and input
		printf("Select Option\n\r1) View Inventory \n\r2) Update Price \n\r3) Update Quantities \n\r4) Calculate Store Totals \n\r5) Quit \n\r");

		scanf("%d", &option);
		//switch statement to go to selected menu option
		switch (option)

		{
			//View inventory option case
		case (1):
			//this while loops allows for users to make an erroneous store selection and then try again
			while (loop == 0)
			{
				//Store selection
				printf("Enter Store: ");
				scanf(" %c", &store_char);
				//Store switch
				switch (store_char)
				{
				case('A'):
					printf("\n\rConsoles\n\r%d\n\rGames\n\r%d\n\rControllers\n\r%d\n\rCases\n\r%d\n\r", store_inventory[0][0], store_inventory[0][1], store_inventory[0][2], store_inventory[0][3]);
					//loop=1 will break the user from the loop asking for a store input
					loop = 1;
					break;
				case('B'):
					printf("\n\rConsoles\n\r%d\n\rGames\n\r%d\n\rControllers\n\r%d\n\rCases\n\r%d\n\r", store_inventory[1][0], store_inventory[1][1], store_inventory[1][2], store_inventory[1][3]);
					loop = 1;
					break;
				case('C'):
					printf("\n\rConsoles\n\r%d\n\rGames\n\r%d\n\rControllers\n\r%d\n\rCases\n\r%d\n\r", store_inventory[2][0], store_inventory[2][1], store_inventory[2][2], store_inventory[2][3]);
					loop = 1;
					break;
				case('D'):
					printf("\n\rConsoles\n\r%d\n\rGames\n\r%d\n\rControllers\n\r%d\n\rCases\n\r%d\n\r", store_inventory[3][0], store_inventory[3][1], store_inventory[3][2], store_inventory[3][3]);
					loop = 1;
					break;
				default:
					printf("\n\rYou didn't select a valid store. Please try again\n\r");
					break;
				}
			}
			break;
			//Price Update Option case
		case (2):
			//Item Selection
			printf("\n\n\r1) Consoles\n\r2) Games\n\r3) Controllers\n\r4) Cases\n\r");
			while (loop == 0)
			{
				printf("Select the product you'd like to update the price for: ");
				scanf("%d", &item_selection);
				//Item price update switch
				switch (item_selection)
				{
				case (1):
					printf("\n\rEnter the new price: ");
					//user input will update the corresponding item's stored price
					scanf("%f", &prices[0][0]);
					//program will output the new price for verification purposes
					printf("\n\rPrice Updated to %.2f \n\r", prices[0][0]);
					loop = 1;
					break;
				case (2):
					printf("\n\rEnter the new price: ");
					scanf("%f", &prices[0][1]);
					printf("\n\rPrice Updated to %.2f \n\r", prices[0][1]);
					loop = 1;
					break;
				case (3):
					printf("\n\rEnter the new price: ");
					scanf("%f", &prices[0][2]);
					printf("\n\rPrice Updated to %.2f \n\r", prices[0][2]);
					loop = 1;
					break;
				case (4):
					printf("\n\rEnter the new price: ");
					scanf("%f", &prices[0][3]);
					printf("\n\rPrice Updated to %.2f \n\r", prices[0][3]);
					loop = 1;
					break;
				default:
					printf("\n\rYou've entered an invlaid item number. Please try again.");
					break;
				}
			}
			break;
		//Iventory Update Choice
		case (3):
			while (loop == 0)
			{
				//Store selection
				printf("Enter Store: ");
				scanf(" %c", &store_char);
				printf("\n\n\r1) Consoles\n\r2) Games\n\r3) Controllers\n\r4) Cases\n\r");
				//Store switch
				switch (store_char)
				{
				case('A'):
					while (loop == 0)
					{
						printf("Select the item you wish to update the quantity of: ");
						scanf("%d", &item_selection);
						//Item quantity update switch
						switch (item_selection)
						{
						case (1):
							printf("\n\rEnter the new quantity: ");
							//user input will update the corresponding item's current inventory quantity
							scanf("%d", &store_inventory[0][0]);
							//program will output the new quantity for verification purposes
							printf("\n\rQuantity Updated to %d \n\r", store_inventory[0][0]);
							loop = 1;
							break;
						case (2):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[0][1]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[0][1]);
							loop = 1;
							break;
						case (3):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[0][2]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[0][2]);
							loop = 1;
							break;
						case (4):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[0][3]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[0][3]);
							loop = 1;
							break;
						default:
							printf("\n\rYou've entered an invlaid item number. Please try again.");
							break;
						}
					}
					loop = 1;
					break;
				case('B'):
					while (loop == 0)
					{
						printf("Select the item you wish to update the quantity of: ");
						scanf("%d", &item_selection);
						//Item quantity update switch
						switch (item_selection)
						{
						case (1):
							printf("\n\rEnter the new quantity: ");
							//user input will update the corresponding item's current inventory quantity
							scanf("%d", &store_inventory[1][0]);
							//program will output the new quantity for verification purposes
							printf("\n\rQuantity Updated to %d \n\r", store_inventory[1][0]);
							loop = 1;
							break;
						case (2):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[1][1]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[1][1]);
							loop = 1;
							break;
						case (3):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[1][2]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[1][2]);
							loop = 1;
							break;
						case (4):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[1][3]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[1][3]);
							loop = 1;
							break;
						default:
							printf("\n\rYou've entered an invlaid item number. Please try again.");
							break;
						}
					}
					loop = 1;
					break;
				case('C'):
					while (loop == 0)
					{
						printf("Select the item you wish to update the quantity of: ");
						scanf("%d", &item_selection);
						//Item quantity update switch
						switch (item_selection)
						{
						case (1):
							printf("\n\rEnter the new quantity: ");
							//user input will update the corresponding item's current inventory quantity
							scanf("%d", &store_inventory[2][0]);
							//program will output the new quantity for verification purposes
							printf("\n\rQuantity Updated to %d \n\r", store_inventory[2][0]);
							loop = 1;
							break;
						case (2):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[2][1]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[2][1]);
							loop = 1;
							break;
						case (3):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[2][2]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[2][2]);
							loop = 1;
							break;
						case (4):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[2][3]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[2][3]);
							loop = 1;
							break;
						default:
							printf("\n\rYou've entered an invlaid item number. Please try again.");
							break;
						}
					}
					loop = 1;
					break;
				case('D'):
					while (loop == 0)
					{
						printf("Select the item you wish to update the quantity of: ");
						scanf("%d", &item_selection);
						//Item quantity update switch
						switch (item_selection)
						{
						case (1):
							printf("\n\rEnter the new quantity: ");
							//user input will update the corresponding item's current inventory quantity
							scanf("%d", &store_inventory[3][0]);
							//program will output the new quantity for verification purposes
							printf("\n\rQuantity Updated to %d \n\r", store_inventory[3][0]);
							loop = 1;
							break;
						case (2):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[3][1]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[3][1]);
							loop = 1;
							break;
						case (3):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[3][2]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[3][2]);
							loop = 1;
							break;
						case (4):
							printf("\n\rEnter the new quantity: ");
							scanf("%d", &store_inventory[3][3]);
							printf("\n\Quantity Updated to %d \n\r", store_inventory[3][3]);
							loop = 1;
							break;
						default:
							printf("\n\rYou've entered an invlaid item number. Please try again.");
							break;
						}
					}
					loop = 1;
					break;
				default:
					printf("\n\rYou didn't select a valid store. Please try again\n\r");
					break;
				}
			}
			break;
		case (4):
			//calculation of total price array
			total_prices[0][0] = (store_inventory[0][0] + store_inventory[1][0] + store_inventory[2][0] + store_inventory[3][0]) * prices[0][0];
			total_prices[0][1] = (store_inventory[0][1] + store_inventory[1][1] + store_inventory[2][1] + store_inventory[3][1]) * prices[0][1];
			total_prices[0][2] = (store_inventory[0][2] + store_inventory[1][2] + store_inventory[2][2] + store_inventory[3][2]) * prices[0][2];
			total_prices[0][3] = (store_inventory[0][3] + store_inventory[1][3] + store_inventory[2][3] + store_inventory[3][3]) * prices[0][3];
			printf("Total Price of Consoles: %.2f\n\rTotal Price of Games: %.2f\n\rTotal Price of Controllers: %.2f\n\rTotal Price of Cases: %.2f\n\n\r",total_prices[0][0],total_prices[0][1],total_prices[0][2],total_prices[0][3]);
			break;
		case (5):
			printf("\n\rAre you sure you'd like to quit? (Y/N): ");
			scanf(" %c", quit);
			break;
		}
	}
	printf("\n\n\rProgram Quit");
	return 0;
}