#include<stdio.h>
struct book
{
	char ti[20];
	char au[20];
	char sub[20];
	int id;
};
int main()
{
	struct book b[10];
	int i,n;
	printf("enter no.of books:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter details for book %d :",i);
		printf("\nenter title of book %d :",i);
		scanf("%s",&b[i].ti);
		printf("enter author of book %d :",i+1);
		scanf("%s",&b[i].au);
		printf("enter subject of book %d :",i+1);
		scanf("%s",&b[i].sub);
		printf("enter id of book %d :",i+1);
		scanf("%d",&b[i].id);
	}
	for(i=0;i<n;i++)
	{
		printf("\ndetail of book %d :\n",i+1);
		printf("\nbook %d title : %s",i+1,b[i].ti);
		printf("\nbook %d author : %s",i+1,b[i].au);
		printf("\nbook %d subject : %s",i+1,b[i].sub);
		printf("\nbook %d book : %d\n",i+1,b[i].id);
	}
	return 0;
}

