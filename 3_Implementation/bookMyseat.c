#include<stdio.h>      /* The idea of this project was taken from code projects.I tried to put a login system differently */
#include<stdlib.h>
#include<string.h>



int main()

{
    login()
    int pwd;
    char username[20];
    printf("Your name: ");
    gets(username);
    printf("Enter the fixed password( 7717 ) = ");
    scanf("%d",&pwd);
    switch(pwd)
    {
        case 7717:
        printf("\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	    printf("\t\t|                                               |\n");
	    printf("\t\t|                                               |\n");
	    printf("\t\t|             Welcome       to                  |\n");
	    printf("\t\t|                BOOKMYSEATS                    |\n");
	    printf("\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
        printf("Enter any key to continue");
        system("cls");
	int options,choice;
	start:
	system("cls");
	printf("\n(1)---------->>>>Bus Information \n");
	printf("\n(2)---------->>>>Reserve a Ticket\n");
	printf("\n(3)---------->>>>Cancel your Ticket\n");
	printf("\n(4)---------->>>>Exit BookMySeat\n");
    printf("\t\t\tEnter Your Choice:: ");
	scanf("%d",&options);
	switch(options)
	{
		case 1:
			businformation();
            printf("\n\nPress any key to go to Main Menu");
            getch();
			break;
		case 2:
			reserve();
			printf("\n\nPress any key to go to Continue");
			getch();
			break;
		case 3:
			cancel();
            printf("\n\nEnter any key to continue");
            break;
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return(0);
}

        break;
        default:
        printf("\n\t\tWrong password\n");
    }
    
void businformation(void)
{
	system("cls");
	printf("---------------------------------------------------------------------------------------");
	printf("\nBus.No\t\t\tName\t\t\tDestinations\t\tFare\t\tStartTimimgs\n");
	printf("---------------------------------------------------------------------------------------");
	printf("\n3468\tSai Baba Travels\t\t\tSerampore to Bankura\t\tRs.500\t\t9AM");
	printf("\n2150\tDevit Travels\t\t\tBelur To Dharan\t\tRs.500\t\t12PM");
	printf("\n1003\tHero Travels\t\t\tPurulia to Digha\t\tRs.450\t\t1PM");
	printf("\n8976\tSuper Deluxe\t\tHowrah To Bardhaman\t\tRs.450\t\t11AM");
	printf("\n3802\tSai Baba Travels\t\tTambaram To Potheri\t\tRs.400\t\t7AM");
}

void reserve(void)
{
	int i=0;
    int busnum,seats;
	float charges;
	bd bookingdetails;
    char confirm;
	FILE *fp;
	fp=fopen("seatsalreadyreserved.txt","a");
	system("cls");

	printf("\nEnter Your Name: ");
	fflush(stdin);
	gets(bookingdetails.name);
	printf("\nEnter Number of seats:> ");
	scanf("%d",&bookingdetails.seats);
	printf("\n\n>>Press Enter To View Available Bus ");
	getch();
	system("cls");
	viewdetails();
	printf("\n\nEnter bus number ");
	start1:
	scanf("%d",&bookingdetails.busnum);
	if(bookingdetails.busnum>=1003 && bookingdetails.busnum<=8976)
	{
		charges=charge(bookingdetails.busnum,bookingdetails.seats);
		printticket(bookingdetails.name,bookingdetails.seat,bookingdetails.busnum,charges);
	}
	else
	{
		printf("\nInvalid bus Number! Enter again ");
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&bookingdeatils.name,bookingdetails.seats,bookingdetails.busnum,charges);
		printf("\n Reservation Done\n");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again ");
			goto start;
		}
	}
	fclose(fp);
	getch();
}

float charge(int busnum,int seats)
{

	if (busnum==3468)
	
	{
		return(500*seats);
	}
	if (busnum==2150)
	{
		return(500*seats);
	}
	if (busnum==1003)
	{
		return(450*seats);
	}
	if (busnum==8976)
	{
		return(450*seats);
	}
	if (busnum==3802)
	{
		return(350*seats);
	}
	

void printticket(char name[],int seats,int busnum,float payment)
{
	system("cls");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",seats);
	printf("\nbus Number:\t\t%d",busnum);
	specificbus(busnum);
	printf("\nCharges:\t\t%.2f",charges);
}

void busdet(int busnum)
{

	if (busnum==3468)
	{
		printf("\nbus:\t\t\tSai Baba Travels ");
		printf("\nDestination:\t\tSerampore to Bankura");
		printf("\nDeparture:\t\t9am ");
	}
	if (busnum==2150)
	{
		printf("\nbus:\t\t\tDevit Travels ");
		printf("\nDestination:\t\tBelur to Dharan");
		printf("\nDeparture:\t\t12pm");
	}
	if (busnum==1003)
	{
		printf("\nbus:\t\t\tHero Travels ");
		printf("\nDestination:\t\tPurulia to Digha");
		printf("\nDeparture:\t\t1pm");
	}
	if (busnum==8976)
	{
		printf("\nbus:\t\t\tSuper Deluxe ");
		printf("\nDestination:\t\tHowrah to Bardhaman");
		printf("\nDeparture:\t\t11am ");
	}
	if (busnum==3802)
	{
		printf("\nbus:\t\t\tSai Baba Travels ");
		printf("\nDestination:\t\tTambaram to Potheri");
		printf("\nDeparture:\t\t7am");
	}
}
