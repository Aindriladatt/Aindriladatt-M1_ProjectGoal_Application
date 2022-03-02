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
