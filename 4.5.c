#include <stdio.h>
#include <math.h>
void main()
{
	float x,y;
	printf ("请输入x的数值");
	scanf ("%f",&x);
	if (x>=0&&x<20)
		y=5*x+11;
	else if (x>=20&&x<40)
		y=sin(x)+cos(x);
	else if (x>=40&&x<60)
		y=exp(x)-1;
	else if (x>=60&&x<80)
		y=log(x+1);
	else y=0;
	printf ("y的值为：%f",y);

}