#include <stdio.h>

void split_string(char S[])
{
    int i=0,j=0,k=0;
    auto char even[10000]={0}, odd[10000]={0};
    while (S[i])
    {
        if (i%2)
        {
            odd[j]=S[i];
            j++;
        }
        else
        {
            even[k]=S[i];
            k++;
        }
        i++;
    }
    printf("%s %s\n",even,odd);
}

/*int split_string (char s[])
{
    for(int i=0;i<strlen(s);i+=2) printf("%c",s[i]);
    printf(" ");
    for(int i=1;i<strlen(s);i+=2) printf("%c",s[i]);
    printf("\n");
    return 0;
}
*/

void main()
{
    int T;
    char S[10000];
    scanf("%d\n",&T);
    for (int i=0;i<T;i++)
    {
        scanf("%s\n",&S);
        split_string(S);
    }
}
