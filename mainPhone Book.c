#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
FILE*fp;
struct phone
{
	char Names[20],Address[20],Email[25],sex[5],search[10];
	int PhoneNumbr;
	
}
;struct phone info;

void AddNewContact();
void viewAllContact();
void Search();
void DeleteContact();
void Exit();


int main(int argc, char *argv[]) {

//getch();
	
char joy;
do 
{
	

printf("\n\n1.Add a New Contact  \n");
printf("2.View All Contacts \n");
printf("3.Search\n");
printf("4.DeleteContact\n");
printf("5.Exit\n\n");

scanf("%d",&joy);

switch (joy)
{
	case 1:
	AddNewContact();
	break;
	case 2:
	viewAllContact();
	break;
	case 3:
	Search();
	break;	
	case 4:
	DeleteContact();
	break;
	case 5:
	Exit();
	exit(1);
	break;
	default:
		
	printf("NO OPTION");
}	
	}
	
	while(joy!=5); 
	
	return 0;
}
void AddNewContact()
{	
	printf("########### ADD a NEW CONTACT ###########\n");


	printf("Enter The Name: \n");
	scanf("%s",&info.Names);
	printf("Enter The Sex: \n");
	scanf("%s",&info.sex);
	printf("Enter The Phone Number: \n");
	fflush(stdin);
    scanf("%d",&info.PhoneNumbr);
    printf("Enter The Address : \n");
	scanf("%s",&info.Address);
	printf("Enter The Email Address: \n");
	scanf("%s",&info.Email);	
	
	
	fp=fopen("VIEW ALL CONTACTs .txt","a");
	
	
	char phon[10];
	
	
	fprintf(fp,info.Names);
	fputs("\t",fp);
	fprintf(fp,info.sex);
	fputs("\t",fp);
	fputs(itoa (info.PhoneNumbr,phon ,10),fp);
	fputs("\t",fp);
	fputs(info.Address,fp);
	fputs("\t",fp);
    fputs(info.Email,fp);
    fputs("\n\n",fp);
	
	fclose(fp);
	

	
};
void viewAllContact()
{
	char p;
	fp=fopen("VIEW ALL CONTACTs .txt","r");
	
	while((p=getc(fp))!= EOF)
	printf("%c",p);
	
		fclose(fp);
	
//	int i;
//		
//	for (i=1;i<=1;i++)
//{
//     	printf(" %s ",info[i].Names);
//		printf(" %s ",info[i].sex);
//		printf(" %d ",info[i].PhoneNumbr);
//		printf(" %s ",info[i].Address);
//		printf(" %s \n" ,info[i].Email);
//		
//	}
};
void DeleteContact()
{
	
//	
////	
	struct phone info;
	fp=fopen("VIEW ALL CONTACTs .txt","r");
	fseek (fp,0,SEEK_END);
	int n;
	n=ftell(fp)/sizeof(info);
	
	printf("%d",n);
	
	
};
void Search()
{
//	printf("Enter The Name: \n");
//	scanf("%s",&info.search);
//int compare ;
//
//	compare=strcmp(info.Names,info.search);
//	
//	switch (compare)
//
//	case 0:
//		{
//			printf("hhhhh");
//		}
			
	
	
	
};
void Exit()
{
printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");	
};