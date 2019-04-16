#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int hr()		// For Horizontal Line
	{
		int g,h;
				g=178;
				printf("\n");
				for(h=1;h<=42;h++)
				printf("%c",g);
				for(h=1;h<=15;h++)
				printf("%c",177);
				for(h=1;h<=10;h++)
				printf("%c",219);
				printf("\n");
	}
	

int main()
{
	printf("\n");
	hr();
	
	int i,j,temp;
	int iotd; // Increasing Order Total Distance
	int dotd; // Decreasing Order Total Distance
	int td; // Total Distance
	
	printf("\n %c GIVEN DATA : \n",219);
	printf("\n %c TOTAL Cylinders in Disk Drive    = 5000 \t Numbered -> (0 - 4999)\n",177);
	printf("\n %c CURRENT  Request at Cylinder No. = 143 ",178);
	printf("\n %c PREVIOUS Request at Cylinder No. = 125 \n",177);
	printf("\n %c PENDING Requests in QUEUE : ",178);
	printf("\n\n\t ----------------------------------------------------------- ");
	printf("\n\t | 86 | 1470 | 913 | 1774 | 948 | 1509 | 1022 | 1750 | 130 |");
	printf("\n\t ----------------------------------------------------------- \n\n");
	
	hr();
	printf("\n %c ANALYZED DATA : \n",219);
	printf("\n\n\t %c%c --------- %c%c ------- %c%c -------------------- %c%c",178,178,177,177,177,177,178,178);
	printf("\n\t 0\t      125\t 143\t\t\t4999");
	printf("\n\t\t      ------------->");
	printf("\n\n\t %c%c Requests are being served in Increasing Order\n\n",177,177);
	
	hr();
	printf("\n %c COMPUTED DATA : Using SCAN Disk Scheduling Algorithm\n",219);
	printf("\n %c QUEUE to be implemented : ",178);
	printf("\n\n\t ----------------------------------------------------------- ");
	printf("\n\t | 86 | 1470 | 913 | 1774 | 948 | 1509 | 1022 | 1750 | 130 |");
	printf("\n\t ----------------------------------------------------------- \n\n");
	
	printf("\n %c INCREASING Order + ",177);
	printf("\n\n\t %c%c ---- %c%c ---- %c%c ---- %c%c ---- %c%c ---- %c%c ---- %c%c ---- %c%c ---- %c%c ---- %c%c\n",177,177,178,178,
			177,177,177,177,177,177,177,177,177,177,177,177,177,177,178,178);
	
	int a[12];
	int maxsize = 4999;
	int currentpos = 143;
	a[0] = 86;
	a[1] = 1470;
	a[2] = 913;
	a[3] = 1774;
	a[4] = 948;
	a[5] = 1509;
	a[6] = 1022;
	a[7] = 1750;
	a[8] = 130;
	a[9] = 0;
	a[10] = 4999;
	a[11] = 143;
	
	
	for ( i = 0; i < 12-1; i++)
	{
		for ( j = i + 1; j < 12; j++)
		{
			if( a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	
	for ( i = 0; i < 12; i++)
	{
		if(a[i]==0)
		{
			printf("\t %d",a[i]);
		}
		if(a[i]<143)
		continue;
		else
		printf("\t %d",a[i]);		
	}
	
	printf("\n\t\t ----------------------------------------------------------------->");
	printf("\n\t\t\t\tDistance Travelled = %d - %d",maxsize,currentpos);
	printf("\n\t\t\t\t\t\t   = %d cylinders",maxsize - currentpos);
	iotd = maxsize - currentpos;
	
	printf("\n\n\n %c DECREASING Order - ",177);
	printf("\n\n\t %c%c ---- %c%c ---- %c%c \n",178,178,177,177,178,178);
			
	for ( i = 11; i > 0; i--)
	{
		if(a[i]==4999)
		{
			printf("\t %d",a[i]);
		}
		if(a[i]>=143)
		continue;
		else
		printf("\t %d",a[i]);	
		currentpos = a[i];	
	}
	dotd = maxsize - currentpos;
	printf("\n\t ----------------->");
	printf("\n\t Distance Travelled \n\t = %d - %d \n\t = %d cylinders\n\n",maxsize,currentpos,maxsize-currentpos);
	
	hr();
	printf("\n\n %c TOTAL DISTANCE : ",178);
	printf("\n\n\t Total Distance travelled by disk arm = %d + %d ",iotd,dotd);
	td = iotd + dotd; // total distance
	printf("\n\t\t\t\t\t      = %d cylinders \n\n",td);
	hr();
}

