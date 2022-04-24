#include<stdio.h>
void vert(int);
void horz(int);
void star(char);

int main()
{
    int i;
    char n[50],m[50];
    printf("Enter your first name:\n");
    scanf("%s",n);
    printf("Enter your second name:\n");
    scanf("%s",m);

    printf("The name in * form is:\n\n\n");
    for(i=0;n[i]!='\0';i++)
    {
        star(n[i]);
        printf("\n\n");
    }

    printf("\n\n\n");

    for(i=0;m[i]!='\0';i++)
    {
        star(m[i]);
        printf("\n\n");
    }
    return 0;
}

void vert(int p)
{
    switch (p)
    {
    case 1:
        printf("*           *\n*           *\n*           *\n*           *\n*           *\n");
        break;
    case 2:
        printf("*\n*\n*\n*\n*\n");
        break;
    case 3:
        printf("      *     *\n      *     *\n      *     *\n      *     *\n      *     *\n");
        break;
    case 4:
        printf("      *\n      *\n      *\n      *\n      *\n");
        break;
    case 5:
        printf("*          *\n*         *\n*        *\n*       *\n*      *\n");
        break;
    case 6:
        printf("**         **\n* *       * *\n*  *     *  *\n*   *   *   *\n*    * *    *\n");
        break;
    case 7:
        printf("**          *\n* *         *\n*  *        *\n*   *       *\n*    *      *\n");
        break;
    case 8:
        printf(" *         *\n  *       *\n   *     *\n    *   *\n     * *\n");
        break;
    case 9:
        printf("           *\n          *\n         *\n        *\n       *\n");
        break;
    case 10:
        printf("*    * *\n*   *   *\n*  *     *\n* *       *\n**         *\n");
        break;
    case 11:
        printf("*      *    *\n*       *   *\n*        *  *\n*         * *\n*          **\n");
        break;
    case 12:
        printf("*      *\n*       *\n*        *\n*         *\n*          *\n");
        break;
    case 13:
        printf("            *\n            *\n            *\n            *\n            *\n");
        break;
    case 14:
        printf("*    * *    *\n*   *   *   *\n*  *     *  *\n* *       * *\n**         **\n");
        break;
    case 15:
        printf("     * *\n    *   *\n   *     *\n  *       *\n *         *\n");
        break;
    case 16:
        printf("     *\n    *\n   *\n  *\n *\n");
        break;
    case 17:
        printf("*    *\n*   *\n*  *\n* *\n**\n");
        break;
    default:
        break;
    }
}

void horz(int q)
{
    switch (q)
    {
    case 1:
        printf(" * * *       \n");
        break;
    case 2:
        printf("       * * * \n");
        break;
    case 3:
        printf(" * * * * * * \n");
        break;
    default:
        break;
    }
}

void star(char g)
{
    switch(g)
    {
    case 'A':
        {
            horz(3);
            vert(1);
            horz(3);
            vert(1);
            break;
        }
    case 'B':
        {
            horz(3);
            vert(1);
            horz(3);
            vert(1);
            horz(3);
            break; 
        }
    case 'C':
        {
            horz(3);
            vert(2);
            vert(2);
            horz(3);
            break; 
        }
    case 'D':
        {
            horz(3);
            vert(3);
            vert(3);
            horz(3);
            break; 
        }
    case 'E':
        {
            horz(3);
            vert(2);
            horz(3);
            vert(2);
            horz(3);
            break;
        }
    case 'F':
        {
            horz(3);
            vert(2);
            horz(3);
            vert(2);
            break;
        }
    case 'G':
        {
            horz(3);
            vert(2);
            horz(2);
            vert(1);
            horz(3);
            break;
        }
    case 'H':
        {
            vert(1);
            horz(3);
            vert(1);
            break;
        }
    case 'I':
        {
            horz(3);
            vert(4);
            vert(4);
            horz(3);
            break;
        }
    case 'J':
        {
            horz(3);
            vert(4);
            vert(4);
            horz(1);
            break;
        }
    case 'K':
        {
            vert(5);
            vert(10);
            break;
        }
    case 'L':
        {
            vert(2);
            vert(2);
            horz(3);
            break;
        }
    case 'M':
        {
            vert(6);
            vert(1);
            break;
        }
    case 'N':
        {
            vert(7);
            vert(11);
            break;
        }
    case 'O':
        {
            horz(3);
            vert(1);
            vert(1);
            horz(3);
            break;
        }
    case 'P':
        {
            horz(3);
            vert(1);
            horz(3);
            vert(2);
            break;
        }
    case 'Q':
        {
            horz(3);
            vert(1);
            vert(11);
            horz(3);
            break;
        }
    case 'R':
        {
            horz(3);
            vert(1);
            horz(3);
            vert(12);
            break;
        }
    case 'S':
        {
            horz(3);
            vert(2);
            horz(3);
            vert(13);
            horz(3);
            break;
        }
    case 'T':
        {
            horz(3);
            vert(4);
            vert(4);
            break;
        }
    case 'U':
        {
            vert(1);
            vert(1);
            horz(3);
            break;
        }
    case 'V':
        {
            vert(5);
            vert(17);
            break;
        }
    case 'W':
        {
            vert(1);
            vert(14);
            break;
        }
    case 'X':
        {
            vert(8);
            vert(15);
            break;
        }
    case 'Y':
        {
            vert(8);
            vert(4);
            break;
        }
    case 'Z':
        {
            horz(3);
            vert(9);
            vert(16);
            horz(3);
            break;
        }
    case ' ':
        {
            break;
        }
    default:
    break;
    }
}
