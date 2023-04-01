/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main()
{
	int c=0,m1,m2,n1,n2;
	scanf("%d%d",&m1,&n1);
	scanf("%d%d",&m2,&n2);
	if((n1+n2)<60)
	{
        printf("%d",(n1+n2));
    }
		else if((n1+n2)>=60&&(n1+n2)<120)
		{
			printf("%d",((n1+n2)-60));
			c++;
        }
			else if(n1+n2==120)
			{
				printf("00");
				c++;

			}
		
	
	c=c+(m1+m2);
	printf("%d",c);
	

	//Write code here
}
