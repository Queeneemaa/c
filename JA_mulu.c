#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

  
    char str[N][20];
        for (int i = 0; i < N; i++){
            for (int j = 0; j < 20; j++){
                str[i][j] = '\0';
            }
        }
        
    int ketersediaan = N; 

    while (1){
        
        char input1[15] = {'\0'}, input2[15] = {'\0'};
            scanf("%s", input1);

            
            if (strcmp("result", input1) == 0){
               
                for (int i = 0; i < N; i++){
                    printf("%s\n", str[i]);
                }
                break;
            }
           
            else if (strcmp("add", input1) == 0){
                scanf("%s", input2);
                
                if (strcmp("string", input2) == 0){
                    
                    if (ketersediaan == 0){
                        printf("storage sudah penuh\n");
                 
                    } else {
                        for (int i = 0; i < N; i++){
                            if (str[i][0] == '\0'){
                                scanf("%s", str[i]);
                                ketersediaan--;
                                break;
                            }
                        }
                    }
                }
            }
       
            else if (strcmp("delete", input1) == 0){
                scanf("%s", input2);

                if (strcmp("string", input2) == 0){
             
                    if (ketersediaan == N){
                        printf("storage masih kosong\n");
                   
                    } else {
                        char tempstr[20] = {'\0'};
                        scanf("%s", tempstr);

                        for (int i = 0; i < N; i++){
                            if (strcmp(str[i], tempstr) == 0){
                                for (int j = 0; j < 20; j++){
                                    str[i][j] = '\0';
                                }
                                ketersediaan++; 
                                break;
                            }
                        }
                    }
                }
            }
    }

    return 0;
