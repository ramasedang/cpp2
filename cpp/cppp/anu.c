#include <stdio.h>
int i;
int n;
char t[100][100];

int main()
{   
    scanf("%d",&n);
    
    for (i = 0; i <= n; i++)
    {
        printf("%d\n",i);
        scanf("%s",t[i]);  
    }

    // printf("c", t[1][3]);

     
        printf("#include<");
        if(t[1][3] == ';' && t[1][4] == 'i' )
        {   
            for(int x = 12; x < strlen(t); x++) 
            {   
                printf("%d", x);
                // if(t[1][11] == ';')
                // {
                //     printf("%c", t[0][x]);
                   
                // }
                // else
                // {
                //     printf("%c", t[0][x]);
                // }
            }
            
            
        }
    
    
}