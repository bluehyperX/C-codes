#include <stdio.h>

int max_of_four (int a, int b, int c, int d)
{
   	a=max(a,b);
	b=max(c,d);
	return max(a,b);
}
int max (int a, int b)
{
	if (a>b) return a;
	else return b;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
