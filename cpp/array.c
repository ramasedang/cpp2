#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,result=0;
    int i=0, j=0, arr[100];
    char temp;
    int temp1,temp2;
    while(scanf("%d%c", &arr[i], &temp)){
        i++;
        if(temp=='\n'){
            break;
        }
    }
    
    // for(j=0; j<i; j++) {
    //     printf("%d ", arr[j]);
    // }
    if (i==1)
    printf("%d", arr[0]);
    else
    {

        for (int x = 0; x < i; ++x) 
            {
                for (int j = 0; j<i; j++){

                    if (arr[x]==arr[j+1]){
                            temp = arr[x] * arr[j];
                            result =temp;
                        }
                        
                    if (arr[x] != arr[j])
                    {
                        if (arr[x] > 0 && arr[j] > 0)
                        {
                        
                            temp1 = arr[x] * arr[j];
                            if (temp1 > result)
                            {
                                result = temp1;
                            }
                        }

                        else if (arr[x] < 0 && arr[j] < 0)
                        {
                            temp1 = arr[x] * arr[j];
                            if (temp1 > result)
                            {
                                result = temp1;
                            }
                        }

                        else if (arr[x] > 0 && arr[j] < 0)
                        {
                            temp1 = arr[x] * arr[j];
                            if (temp1 < result)
                            {
                                result = temp1;
                            }
                        }

                        else if (arr[x] < 0 && arr[j] > 0)
                        {
                            temp1 = arr[x] * arr[j];
                            if (temp1 < result)
                            {
                                result = temp1;
                            }
                        }
                        
                    }
                }
                
            }
    }
    if (i>1)
    printf("%d",result);
    
}