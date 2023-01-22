#include<stdio.h>
int main()
{
	int q,s=0,i=1,p=0,fr=0,sa=0,j=0,tot=0;
	char f;
	printf("WELCOME TO INBA HOTEL\nwhat do u want?\np-pizza-20\nf-french fries-10\ns-sandwitch-5\nj-juice-2\no-stop");
	
	do
	{
	
	
	printf("\norder 'type-quantity'=");
	scanf("%c-%d",&f,&q);
	if(f=='p')
	{
	s=s+(20*q);
	p=p+q;
	}
	else if(f=='f')
	{
	s=s+(10*q);
	fr=fr+q;
	}
	else if(f=='s')
	{
	s=s+(5*q);
	sa=sa+q;
	}
	else if(f=='j')
	{
	s=s+(2*q);
	j=j+q;
	}
	else if(f=='o')
	{
	printf("\n%dsum=₹%d",i++,s);
	tot=tot+s;
	
	printf("\n%d",i);
	s=0;
	}
	else if(f=='t')
	{
		printf("\npizza=%d\nfrenchfries=%d\nsandwitch=%d\njuice=%d\ntot=₹%d",p,fr,sa,j,tot);
	break;
	}
	}
	while(q!=100);
	
	return 0;
}