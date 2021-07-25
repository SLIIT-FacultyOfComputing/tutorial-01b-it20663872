/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main()
{
	float dis, rate, amount;
	
	printf("Input the distance the van has travelled: ");
	scanf("%f", &dis);
	
	if(dis < 30)
	{
		rate = 50.0;
		amount = dis*50.0; 
	}
	else if(dis > 30)
	{
		rate = 40.0;
		amount = (30*50.0)+((dis-30)*40.0);
	}
	 
	printf("Amount is: %.2f", amount);
	
	return 0;
}
