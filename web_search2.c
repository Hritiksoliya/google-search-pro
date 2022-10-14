#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[700];
    printf("Enter key words you want to search\n");
    scanf("%[^\n]s", &a);
    char dom[1000] = {"start www.google.com/search?q="};
    for (int i =0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
        {
            a[i] = '+';
        }
    }
    // char last='+';
    strcat(dom, a);
   dom[strlen(dom)]='+';
    // strcat(dom,last);
    printf("%s",dom);
    system(dom);
}