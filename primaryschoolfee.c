/*Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for third standard 21000 and
for fourth standard fees are 23450.
We have to accept standard from user and display the corresponding fees.

Input : 2	Output : 12790
Input : 4	Output : 23450
Input : 6	Output : Wrong input*/

#include<stdio.h>
#define FALSE 0

int SchoolFees(int iStandard)
{	
	int iFees=0.0;
	if(iStandard<=0)
	{
		return FALSE;
	}
	
	switch(iStandard)
	{
	
		case 1:
			iFees=8900;
			return iFees;
			break;
	
		case 2:
			iFees=12700;
			return iFees;
			break;
		case 3:
			iFees=21000;
			return iFees;
			break;
		case 4:
			iFees=23000;
			return iFees;
			break;
		default:
			return FALSE;
	}
}

int main()
{
	int iStd=0;
	int iFee=0;
	
	printf("Enter the stand");
	scanf("%d",&iStd);

	iFee=SchoolFees(iStd);

	if(iFee==FALSE)
	{
		printf("worng input");
	}
	else
	{
	printf("Fees is %d ",iFee);
	}
	return 0;
}
