/*Write a program which accept number from user and display its multiplication of factors.
Input :12
Output : 144 		(1 * 2 * 3 * 4 * 6)
Input :13
Output : 1 			(1)*/



#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt=0;
	int iMult=1;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		iMult=0;
	}

	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMult=iMult*iCnt;
		}
	}
return iMult;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number");
	scanf("%d",&iValue);

	iRet=MultFact(iValue);
	
	printf("multiplication of factor is %d",iRet);

	return 0;
}
