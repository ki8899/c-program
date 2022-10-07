#include<stdio.h>
int  main()
{
	float sal,bon,pay,ad;
	char gd;
	
	printf("enter the salary:");
	scanf("%f",&sal );
	

	
	printf("enter the grade:");
	scanf("%d",&gd);
	if(gd =='A'){
	bon=sal*0.05;
	
}
	
	else{
	
	bon=sal*0.1;
	
	}
	
	printf("%f the bonus is: ",bon);
	if(sal<10000)
	{
		bon=bon*0.2;
	}
	else{
	
	pay=sal+bon;
	printf("the total amount to pay: %f",pay);
	return 0;


}}
