#include <stdio.h>

int getop(char *next)
{
    int i,c;

    while((*(next+0) = c = getch()) == ' ' || c =='\t')
        ;
   *(next+1) = '\0';
    
    i = 0;
    
    if(!isdigit(c) && c!='.' && c!='-')
        return c;

    if(c=='-')
        if(isdigit(c=getch()) || c == '.')
            *(next+(i++)) = c;
        else
        {
            if(c!=EOF)
                ungetch(c);
            return '-';
        }
    
    if(isdigit(c))
        while(isdigit(*(next+(i++)) =c =getch()))
            ;

    if(c=='.')
        while(isdigit(*(next+(i++)) = c=getch()))
            ;
    
    *(next+(i++))= '\0';
    if(c!=EOF)
        ungetch(c);
    return NUMBER;
}
