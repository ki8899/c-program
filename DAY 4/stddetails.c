#include<stdio.h>
struct student
{
	int age;
	char name[20];
};
int display(struct student p[],int n)
{
	int i;
	printf("\nStudent Detail :-\n");
	for(i=0;i<n;i++)
	{
		printf("\nName : %s",p[i].name);
		printf("\nAge : %d",p[i].age);
	}
}
int main()
{
	int i,n;
	struct student detail[10];
	printf("Enter no. of students :");
	scanf("%d",&n);
	printf("\nEnter Student Detail : \n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter name :");
		scanf("%s",&detail[i].name);
		printf("Enter Age :");
		scanf("%d",&detail[i].age);
	}
	display(detail,n);
}
