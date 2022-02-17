#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, s[100], sen[100];
    scanf("%c\n",&ch);
    scanf("%s\n",&s);

    /*In order to take a line as input, you can use scanf("%[^\n]%*c", s);
    where s is defined as char s[MAX_LEN] where MAX_LAN is the maximum size of s.
    Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered.
    Then, with this %*c, it reads the newline character and here,
    the used * indicates that this newline character is discarded.
    */

    scanf("%[^\n]%*c",&sen);

    /*Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line.
    This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement. */

    //scanf("/n");
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
