#include <stdio.h>
#include <unistd.h>

void numero(int nb)
{
	char contatore;
	int div;
	div=1000000000;

	if(nb==0)
	{
		write(1,"0",1);
		return;
	}
	if(nb<0)
	{
		write(1,"-",1);
		nb*=-1;
	}
	while(nb/div==0)
	{
		div/=10;
	}

	while(div>=1)
	{
		contatore=(nb/div)+48;
		write(1,&contatore,1);
		nb-=(nb/div)*div;
		div/=10;
	}

}

int main(void)
{
	numero(0);
}


