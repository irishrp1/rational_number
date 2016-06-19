#include<stdio.h>
#include<conio.h>
typedef struct{
	int numerator;
	int denominator;
}rational;
rational make_rational(int,int);
rational mult_rational(rational, rational);
rational add_rational(rational,rational);
rational equal_rational(rational,rational);
int main()
{
rational r1=make_rational(2,3);
rational r2=make_rational(3,4);
printf("The created rational number are %d/%d and %d/%d\n",r1.numerator,r1.denominator,r2.numerator,r2.denominator);
rational prod=mult_rational(r1,r2);
printf("the product is %d/%d\n", prod.numerator,prod.denominator);
rational sum=add_rational(r1,r2);
printf("the sum is%d/%d\n", sum.numerator,sum.denominator);
equal_rational(r1,r2);
}

rational make_rational(int a,int b)
{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	return r_number;
	
}
rational mult_rational(rational r1, rational r2)
{
rational result;
result.numerator=(r1.numerator*r2.numerator);
result.denominator=(r1.denominator*r2.denominator);
return result;

}
rational add_rational(rational r1, rational r2)
{
rational result;
result.numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
result.denominator=(r1.denominator*r2.denominator);
return result;
}
rational equal_rational(rational a,rational b)
{
	if(a.numerator*b.denominator==a.denominator*b.numerator)
	{
		printf("they are equal.\n");
	}
	else
	{
		printf("they are not equal.\n");
	}
}
