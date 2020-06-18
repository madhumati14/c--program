/*Write a program which accept three numbers and print its multiplication.

Input: 5	6	4
output:	120

Inupt: 4 	3	0
output:12

Input: 0	0	1
output:1
*/

#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
	
	int iMult=1;
	

	if((iNo1!=0)&&(iNo2!=0)&&(iNo3==0))
	{
		iMult=iNo1*iNo2;
	}
	else if((iNo1!=0)&&(iNo2==0)&&(iNo3!=0))
	{
		iMult=iNo1*iNo3;
	}
	else if((iNo1==0)&&(iNo2!=0)&&(iNo3!=0))
	{
		iMult=iNo2*iNo3;
	}
	else if((iNo1==0)&&(iNo2==0)&&(iNo3!=0))
	{
		iMult=iNo3;
	}
	else if((iNo1==0)&&(iNo2!=0)&&(iNo3==0))
	{
		iMult=iNo2;
	}
	else if((iNo1!=0)&&(iNo2==0)&&(iNo3==0))
	{
		iMult=iNo1;
	}
	else
	{
		iMult=iNo1*iNo2*iNo3;
	}

	 
	

return iMult;
}

int main()
{
	int iValue1=0, iValue2=0, iValue3=0,iRet=0;

	printf("Enter the three value");
	scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
	
	iRet=Multiply(iValue1,iValue2,iValue3);

	printf("%d is the multiplication",iRet);

	return 0;
}
