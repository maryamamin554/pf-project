#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<C:\Users\anb\Downloads\header.h>

// Function prototype for the game function
int game();

int main()
{ 
    int m, j;
    srand(time(0));
    int i, input, total = 0, random;
    int score[100];
    int n = 0;
    char name[100];
    int *specific_game;

    // Displaying the title of game
    printf("ØØØØØØØØØØØØØØØØØØØØØØØØØØØØ\n");
    printf("Ø                          Ø\n");
    printf("Ø      ...QUIZOPIA...      Ø\n");
    printf("Ø                          Ø\n");
    printf("ØØØØØØØØØØØØØØØØØØØØØØØØØØØØ\n");

    // asking  user to enter name
    printf("\n\nEnter your name : ");
    scanf("%s", name);
    printf("\n\n");

    do
    {
        // now displaying options
        printf("Press 1 to start the game.\n");
        printf("Press 0 to quit the game.\n");
        scanf("%d", &input);

        if (input == 1)
        {
            // Call the game function and store the score 
            total = game();
            score[n] = total;

        back:
            do
            {
                // To play again press 1 and to see score history press 2
                printf("\nTo play again enter 1\n");
                printf("To see score history enter 2\n");
                printf("To see the score of a specific game enter 3\n");
                printf("To end game enter 0\n");
                scanf("%d", &i);

                if (i == 1)
                {
                    // Play again and store the new score
                    n = n + 1;
                    score[n] = game();
                    goto back;
                }
                else if (i == 0)
                {
                    // End the game
                    printf("...GAME ENDED!...\n");
                    return 0;
                }
                else if (i == 2)
                {
                    // Displaying score history
                    printf("\n\n®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®\n");
                    printf("%s's score: \n", name);
                    printf("®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®\n");
                    for (m = 0; m < n + 1; m++)
                    {
                        printf("Game %d : %d\n", m + 1, score[m]);
                        printf("®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®\n");
                    }
                }
                else if (i == 3)
                {
                    // Displaying the score of a specific game
                    int choice;
                    back2:
                    printf("Choose game number :\n");
                    for (j = 1; j < n + 2; j++)
                    {
                        printf("%d\n", j);
                    }
                    scanf("%d", &choice);

                    if (choice < n + 2 && choice > 0)
                    {
                        specific_game = &score[choice - 1];
                        //SHOWS THE HISTORY OF PREVIOUS GAME
                        printf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
	                  	printf("²       Game number %d : score = %d       ²\n",choice,*specific_game);
		                printf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²² \n");
		}
		else
		{
			printf("Invalid Option!\n\n");
			goto back2;
		}
	}
	else 
	{
		printf("\nInvalid option!\n\n");
	}
	}
	while (i<0 || i>3);
}
else if(input==0)
{
	printf("...GAME ENDED!...");
	return 0;	
}
	else if(input<0 || input>1)
	{
		printf("Invalid option!\n\n");
	}
	}
	while(input<0 || input>1);
}

