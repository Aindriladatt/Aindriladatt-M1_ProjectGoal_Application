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
