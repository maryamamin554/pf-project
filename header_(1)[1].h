int game()
{ 
     // Initializing  the total score to zero.
	int total=0;
	int i;
	int random;
   //	the random number generator with the current time.
	srand(time(0));
	printf("\n");
	 // Print the question header.
	printf("°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("°    QUESTION # 1    °\n");
	printf("°°°°°°°°°°°°°°°°°°°°°°\n");
	
	// Generate a random number between 1 and 5.
	random=(rand()%5)+1;
		// Use a switch statement to call the  question.
	switch(random)
	{
	case 1:
		total=total+question_1();
		break;
	case 2:
		total=total+question_2();
		break;
	case 3:
		total=total+question_3();
		break;
	case 4:
		total=total+question_4();
		break;
	case 5:
		total=total+question_5();
		break;
	}
	
	
	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 2    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
			
	random=(rand()%5)+1;
	switch(random)
	{ 
	   case 1:
		total=total+question_6();
		break;
	  
	   case 2:
	   total=total+question_7();
	   break;
	   
	case 3: 
		total=total+question_8();
		break;
	
	case 4:
	total=total+question_9();
	break;
	
	
	case 5:
		total=total+question_10();
		break;
	}

 
	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 3    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
		
	random=(rand()%5)+1;
	switch(random)
	{  
	case 1:
		total=total+question_11();
		break;
	
        case 2:
		total=total+question_12();
		break;

        case 3:
		total=total+question_13();
		break;
	
        case 4:
		total=total+question_14();
		break;
	
	    case 5:
		total=total+question_15();
		break;
	}
	

	
	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 4    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
	random=(rand()%5)+1;
	 
	 switch(random)
	{
		case 1:
		total=total+question_16();
		break;
	
	    case 2:
		total=total+question_17();
		break;
	
	    case 3:
		total=total+question_18();
		break;
	
	    case 4:
		total=total+question_19();
		break;
    
       case 5:
		total=total+question_20();
		break;
	 
}

	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 5    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
	random=(rand()%5)+1;
	switch(random)
	{ 
	case 1:
		total=total+question_21();
		 break;

 case 2:
		total=total+question_22();
	     break;
	     
	     case 3:
		total=total+question_23();
		break;

    case 4:
		total=total+question_24();
		break;
	case 5:
		total=total+question_25();
		break;
	}

	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 6    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
	random=(rand()%5)+1;
     switch(random)
	{
		case 1:
		total=total+question_26();
		break;

     case 2:
		total=total+question_27();
		break;
	
	case 3:
		total=total+question_28();
		break;

    case 4:
		total=total+question_29();
		break;
		
     case 5:
		total=total+question_30();
		break;
	}

	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 7    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
	
	random=(rand()%5)+1;

     switch(random)
	{
		case 1:
		total=total+question_31();
		break;
	
	case 2:
		total=total+question_32();
		break;
	 
	 case 3:
		total=total+question_33();
		break;
	  
	  case 4:
		total=total+question_34();
		break;
 
        case 5:
		total=total+question_35();
		break;
	}


	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 8    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
	random=(rand()%5)+1;
   switch(random)
	{
		case 1:
		total=total+question_36();
		break;
	
	case 2:
		total=total+question_37();
		break;
	 
	 case 3:
		total=total+question_38();
		break;

    case 4:
		total=total+question_39();
		break;

    case 5:
		total=total+question_40();
		break;
	}
	
	
	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 9    °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
	random=(rand()%5)+1;
   switch(random)
	{
		case 1:
		total=total+question_41();
		break;
	
	case 2:
		total=total+question_42();
		break;
	 
	 case 3:
		total=total+question_43();
		break;

    case 4:
		total=total+question_44();
		break;

    case 5:
		total=total+question_45();
		break;
	}
	
	
	printf("\n\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°    QUESTION # 10   °\n");
		printf("°°°°°°°°°°°°°°°°°°°°°°\n");
		
	random=(rand()%5)+1;
   switch(random)
	{
		case 1:
		total=total+question_46();
		break;
	
	case 2:
		total=total+question_47();
		break;
	 
	 case 3:
		total=total+question_48();
		break;

    case 4:
		total=total+question_49();
		break;

    case 5:
		total=total+question_50();
		break;
	}
	
	printf("\n");
	printf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
	printf("²     Total score : %d          ²\n",total);
	printf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n");
	printf("\n");
	
	
	return total;
}

//Adding questions
//All of these questions will randomly generated whene you start the game.
int question_1()
{
	// Variable to store user input
	int i;
	int total=0;
	//using do while loop
	do
	{
	printf("Who painted the Mona Lisa?\n");
	printf("1.Leonardo de Caprio\n2.Leonardo da Vinci\n3.Picasso\n");
	scanf("%d",&i);
    // Checking user's answer
	if(i==2)
	{
		printf("Correct!\n\n");
		// Incrementing the total score
		total=total+1;
	}
		else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	// Repeating the question until a valid answer is provided
	while(i>3 || i<1);
	// Returning the total score for this question
	return total;
}

int question_2()
{
	int i;
	int total=0;
	do
	{
	printf("Which country is known as the Land of Rising Sun?\n");
	printf("1.Italy\n2.Germany\n3.Japan\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==1)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_3()
{
	int i;
	int total=0;
	do
	{
	printf("Which ocean is the largest by area?\n");
	printf("1.Pacific\n2.Indian\n3.Arctic\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_4()
{
	int i;
	int total=0;
	do
	{
	printf("What is the chemical symbol for gold?\n");
	printf("1.Ag\n2.Au\n3.Go\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
		else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_5()
{
	int i;
	int total=0;
	do
	{
	printf("Who invented the telephone?\n");
	printf("1.Nikola Tesla\n2.Alexander Graham Bell\n3.Ernest Rutherford\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_6()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest planet in out solar system?\n");
	printf("1.Saturn\n2.Jupiter\n3.Neptune\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_7()
{
	int i;
	int total=0;
	do
	{
	printf("What is the tallest mountain in the world?\n");
	printf("1.K2\n2.Mount Everest\n3.Kangchenjunga\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_8()
{
	int i;
	int total=0;
	do
	{
	printf("Which planet is known as the red planet?\n");
	printf("1.Mercury\n2.Pluto\n3.Mars\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_9()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest organ in the human body?\n");
	printf("1.Skin\n2.Femur\n3.Liver\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_10()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest desert in the world?\n");
	printf("1.Sahara\n2.Thar\n3.Antarctic\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_11()
{
	int i;
	int total=0;
	do
	{
	printf("Which gas is most abundant in Earth's atmosphere?\n");
	printf("1.Oxygen\n2.Nitrogen\n3.Hydrogen\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_12()
{
	int i;
	int total=0;
	do
	{
	printf("What is the currency of Japan?\n");
	printf("1.Japoso\n2.Dollars\n3.Japanese Yen\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_13()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest mammal in the world?\n");
	printf("1.Whale\n2.Elephant\n3.Girrafe\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_14()
{
	int i;
	int total=0;
	do
	{
	printf("What is the capital of Australia?\n");
	printf("1.Austria\n2.Canada\n3.Canberra\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_15()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest continent by land area?\n");
	printf("1.Asia\n2.Russia\n3.Africa\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_16()
{
	int i;
	int total=0;
	do
	{
	printf("What is the smallest bone in the human body?\n");
	printf("1.Carpals\n2.Stapes\n3.Phalanges\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_17()
{
	int i;
	int total=0;
	do
	{
	printf("Which gas do plants use to undergo photosysnthesis?\n");
	printf("1.Carbondioxide\n2.Oygen\n3.Hydrogen\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_18()
{
	int i;
	int total=0;
	do
	{
	printf("Which country is knows as the land of a Thousand Lakes?\n");
	printf("1.Greece\n2.France\n3.Finland\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_19()
{
	int i;
	int total=0;
	do
	{
	printf("What is the chemical symbol of silver?\n");
	printf("1.Ag\n2.Au\n3.Sl\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_20()
{
	int i;
	int total=0;
	do
	{
	printf("Which planet is known as the 'Morning Star' or 'Evening Star'?\n");
	printf("1.Mars\n2.Venus\n3.Saturn\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_21()
{
	int i;
	int total=0;
	do
	{
	printf("Which city is known as the 'City of Love'?\n");
	printf("1.Oslo\n2.Paris\n3.Tokyo\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_22()
{
	int i;
	int total=0;
	do
	{
	printf("What is the tallest animal in the world?\n");
	printf("1.Kangroo\n2.Snake\n3.Giraffe\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_23()
{
	int i;
	int total=0;
	do
	{
	printf("Who is known as the 'Father of Modern Physics'?\n");
	printf("1.Albert Einstein\n2.Stephan Hawking\n3.Rutherford\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_24()
{
	int i;
	int total=0;
	do
	{
	printf("What is the smallest city in the world?\n");
	printf("1.Islamabad\n2.Vatican City\n3.Tokyo\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_25()
{
	int i;
	int total=0;
	do
	{
	printf("What is the chemical symbol of potassium?\n");
	printf("1.Po\n2.P\n3.K\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_26()
{
	int i;
	int total=0;
	do
	{
	printf("Which planet is closest to the sun?\n");
	printf("1.Mars\n2.Venus\n3.Mercury\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_27()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest internal organ of human body?\n");
	printf("1.Liver\n2.Heart\n3.Brain\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_28()
{
	int i;
	int total=0;
	do
	{
	printf("What is the chemical symbol of Sodium?\n");
	printf("1.S\n2.Na\n3.So\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_29()
{
	int i;
	int total=0;
	do
	{
	printf("Which river is often associated with the ancient civilization of Egypt?\n");
	printf("1.Nile\n2.Amazon\n3.Indus\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_30()
{
	int i;
	int total=0;
	do
	{
	printf("Who was the first person to step on the surface of moon?\n");
	printf("1.Neil Bohr\n2.Neil Armstrong\n3.Stephan Hawking\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_31()
{
	int i;
	int total=0;
	do
	{
	printf("Who discovered penicillin?\n");
	printf("1.Neil Bohr\n2.Rutherford\n3.Alexander Fleming\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_32()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest bone in the human body?\n");
	printf("1.Femur\n2.Sternum\n3.Collarbone\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_33()
{
	int i;
	int total=0;
	do
	{
	printf("What is the capital of France?\n");
	printf("1.Oslo\n2.Canberra\n3.Paris\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_34()
{
	int i;
	int total=0;
	do
	{
	printf("Which planet is known as the 'Giant Planet'?\n");
	printf("1.Saturn\n2.Jupitar\n3.Neptune\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_35()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest desert in Africa?\n");
	printf("1.Sahara\n2.Thar\n3.Sonoran\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_36()
{
	int i;
	int total=0;
	do
	{
	printf("What is the smallest planet in our solar system?\n");
	printf("1.Mercury\n2.Pluto\n3.Venus\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_37()
{
	int i;
	int total=0;
	do
	{
	printf("Which gas is used in ballons to make them float?\n");
	printf("1.Hydrogen\n2.Neon\n3.Helium\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_38()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest continent by population?\n");
	printf("1.Russia\n2.Africa\n3.Asia\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_39()
{
	int i;
	int total=0;
	do 
	{
	printf("Who invented the light bulb?\n");
	printf("1.Neil Bohr\n2.Thomas Edison\n3.Galileo Galilei\n");
	scanf("%d",&i);
	if(i==2)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_40()
{
	int i;
	int total=0;
	do 
	{
	printf("What is the capital of Canada?\n");
	printf("1.Ottawa\n2.Paris\n3.Oslo\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_41()
{
	int i;
	int total=0;
	do
	{
	printf("What is the largest bird it the world?\n");
	printf("1.Dove\n2.Hen\n3.Ostrich\n");
	scanf("%d",&i);
	if(i==3)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==1 || i==2)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}
int question_42()
{
	int i;
	int total=0;
	do 
	{
	printf("Who is known as the father of computer?\n");
	printf("1.Charles Babbage\n2.Thomas Edison\n3.Galileo Galilei\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Correct!\n\n");
		total=total+1;
	}
	else if(i==2 || i==3)
	{
		printf("Wrong!\n\n");
	}
	else if(i>3 || i<1)
	{
		printf("Invalid Option!\n\n");
	}
	}
	while(i>3 || i<1);
	return total;
}

int question_43()
{
    int i;
    int total=0;
    do
    {
    printf("What is the unit of measurement of frequency?\n");
    printf("1.Meter\n2.Hertz\n3.Joule\n");
    scanf("%d", &i);
    if (i == 2)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 1 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total;
}

int question_44()
{
    int i;
    int total=0;
    do
    {
    printf("What is the capital of Japan?\n");
    printf("1.Beijing\n2.Tokyo\n3.Seoul\n");
    scanf("%d", &i);
    if (i == 2)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 1 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total;
}

int question_45()
{
    int i;
    int total=0;
    do
	{
    printf("The speed of light is?\n");
    printf("1.300,0000,000 m/s\n2.299,792,458 m/s\n3.288,111,234 m/s\n");
    scanf("%d", &i);
    if (i == 2)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 1 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total;
}

int question_46()
{
    int i;
    int total=0;
    do
    {
    printf("What is the currency of Australia?\n");
    printf("1. Dollar\n2. Euro\n3. Yen\n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 2 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total;
}

int question_47()
{
    int i;
    int total=0;
    do
    {
    printf("The unit of electric resistance is?\n");
    printf("1.kelvin\n2.Ohm\n3.Ampere\n");
    scanf("%d", &i);
    if (i == 2)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 1 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total;
}

int question_48()
{
    int i;
    int total=0;
    do
    {
    printf("The theory of relativity was formulated by?\n");
    printf("1.Albert Einstein\n2.Stephan Hawking\n3.Aristotle\n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 2 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total;
}

int question_49()
{
    int i;
    int total=0;
    do
    {
    printf("In which year did the Titanic sink?\n");
    printf("1.1905\n2.1912\n3.1920\n");
    scanf("%d", &i);
    if (i == 2)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 1 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total=0;
}

int question_50()
{
    int i;
    int total=0;
    do
    {
    printf("What is the SI unit of force?\n");
    printf("1.Power\n2.newton\n3.inertia\n");
    scanf("%d", &i);
    if (i == 2)
    {
        printf("Correct!\n\n");
        return 1;
    }
    else if (i == 1 || i == 3)
    {
        printf("Wrong!\n\n");
    }
    else if (i > 3 || i < 1)
    {
        printf("Invalid Option!\n\n");
    }
	}
	while(i>3 || i<1);
    return total;
}


