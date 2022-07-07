//Method 1

int gcd(int a, int b)
{
	if (b == 0)
		return a;

	else
		return gcd(b, a % b);
}

//Method 2

int gcd(int a, int b)
{
	while(a%b>0)
	{
		int R=a%b;
		a=b;
		b=R;
	}
	return b;
}
