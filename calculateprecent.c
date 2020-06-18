/* Write a program which accept total marks & obtained marks from user and
calculate percentage.
Input : 1000
Output : 74.5%  */

#include<stdio.h>
#include<math.h>

float Percentage(int iMarks,int iTotalM)
{
	float fPers=0.0;
	
	if(iTotalM==0)
	{
		return -1;
	}
	
	fPers=iMarks*100/iTotalM;

	return fPers;

}

int main()
{
	int iValue1=0,iValue2=0;
	float fRet=0.0;

	printf("Enter the Marks");
	scanf("%d",&iValue1);

	printf("Enter the total");
	scanf("%d",&iValue2);

	fRet=Percentage(iValue1,iValue2);

	printf(" percentage is %f ",fRet);
	
	return 0;
}
