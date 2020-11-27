
#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void)
{
	char combinazione[5];

	combinazione[0]='0';
	combinazione[1]='1';
	combinazione[2]='2';
	combinazione[3]=',';
	combinazione[4]=' ';

	while( combinazione[0]<'7')
	{
		while( combinazione[1] <= '8')
		{       
				while (combinazione[2]<='9')
				{		
		
					write (1, &combinazione , 5);
					combinazione[2]++;

				}		
				combinazione[1]++;
				combinazione[2]=combinazione[1]+1;
		}	
		combinazione[0]++;
		combinazione[1]=combinazione[0]+1;
		combinazione[2]=combinazione[1]+1;

	}
	write(1,&combinazione,3);
}

int main(void)
{
	ft_print_comb();
}

