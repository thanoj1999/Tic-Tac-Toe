#include<stdio.h>
#include<stdlib.h>
void main()
{
    char X,O,a[3][3]={};
    int i,j,q,sum;
    printf("\t        |        |        \n");
    printf("\t [0][0] | [0][1] | [0][2] \n");
    printf("\t        |        |        \n");
    printf("\t________|________|________\n");
    printf("\t        |        |        \n");
    printf("\t [1][0] | [1][1] | [1][2] \n");
    printf("\t        |        |        \n");
    printf("\t________|________|________\n");
    printf("\t        |        |        \n");
    printf("\t [2][0] | [2][1] | [2][2] \n");
    printf("\t        |        |        \n");
    printf("\n\nPLAYER 1:X");
    printf("\nPLAYER 2:O\n\n");
    for(q=0;q<5;q++)
    {
    printf("PLAYER 1 TURN\n");
    ta:
       printf("ENTER THE POSITION(i,j):\n");
       scanf("%d%d",&i,&j);
    if(((a[i][j]=='X')||(a[i][j]=='O'))||(i>2)||(j>2))
    {
        printf("ENTERED POSITION IS INVALID\n");
        goto ta;
    }
    a[i][j]='X';
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%c\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]=='X')
            {
                sum=sum+1;
            }
            else
            break;
        if(sum==3)
        {
        printf("WINNER:PLAYER 1");
        exit(0);
        }
        }
    }    
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(a[j][i]=='X')
            {
                sum=sum+1;
            }
            else
            break;
        if(sum==3)
        {
        printf("WINNER:PLAYER 1");
        exit(0);
        }
        }
    }    
     sum=0;   
    for(i=0,j=0;(i<3)&&(j<3);i++,j++)
    {
        if(a[i][j]=='X')
        {
            sum=sum+1;
        }
    if(sum==3)
    {
    printf("WINNER:PLAYER 1");
    exit(0);
    }
    }
    sum=0;
    for(i=0,j=2;(i<3)&&(j<3);i++,j--)
    {
        if(a[i][j]=='X')
        {
            sum=sum+1;
        }
        
    if(sum==3)
    {
        printf("WINNER:PLAYER 1");
        exit(0);
    }
    }
    printf("PLAYER 2 TURN\n");
    th:
       printf("ENTER THE POSITION(i,j):\n");
       scanf("%d%d",&i,&j);
    if(((a[i][j]=='X')||(a[i][j]=='O'))||(i>2)||(j>2))
    {
        printf("INVALID POSITION\n");
        goto th;
    }
    a[i][j]='O';
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%C\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]=='O')
            {
                sum=sum+1;
            }
            else 
            break;
        if(sum==3)
        {
        printf("WINNER:PLAYER 2");
        exit(0);
        }
        }
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(a[j][i]=='O')
            {
                sum=sum+1;
            }
            else 
            break;
        if(sum==3)
        {
        printf("WINNER:PLAYER 2");
        exit(0);
        }
        }
    }
    sum=0;
    for(i=0,j=0;(i<3)&&(j<3);i++,j++)
    {
        if(a[i][j]=='O')
        {
            sum=sum+1;
        }
        else
        break;
    if(sum==3)
    {
    printf("WINNER:PLAYER 2");
    exit(0);
    }
    }
    sum=0;
    for(i=0,j=2;(i<3)&&(j<3);i++,j--)
    {
        if(a[i][j]=='O')
        {
            sum=sum+1;
        }
    if(sum==3)
    {
        printf("WINNER:PLAYER 2");
        exit(0);
    }
    }
    }
    printf("PLAYER 1 TURN\n");
    tn:
       printf("ENTER THE POSITION(i,j):\n");
       scanf("%d%d",&i,&j);
    if(((a[i][j]=='X')||(a[i][j]=='O'))||(i>2)||(j>2))
    {
        printf("ENTERED POSITION IS INVALID\n");
        goto tn;
    }
    a[i][j]='X';
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%c\t\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]=='X')
            {
                sum=sum+1;
            }
            else
            break;
        if(sum==3)
        {
        printf("WINNER:PLAYER 1");
        exit(0);
        }
        }
    }    
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(a[j][i]=='X')
            {
                sum=sum+1;
            }
            else 
            break;
        if(sum==3)
        {
        printf("WINNER:PLAYER 1");
        exit(0);
        }
        }
    }
    sum=0;
    for(i=0,j=0;(i<3)&&(j<3);i++,j++)
    {
        if(a[i][j]=='X')
        {
            sum=sum+1;
        }
        else 
        break;
    if(sum==3)
    {
        printf("WINNER:PLAYER 1");
        exit(0);
    }
    }
    sum=0;
    for(i=0,j=2;(i<3)&&(j<3);i++,j--)
    {
        if(a[i][j]=='X')
        {
            sum=sum+1;
        }
    if(sum==3)
    {
        printf("WINNER:PLAYER 1");
        exit(0);
    }
    }
    printf("DRAW");
}




