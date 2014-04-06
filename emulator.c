#include <stdio.h>
#include <stdio.h>

int main(){
    char count[4];
    int reg;
    int status;
    int x = 0;
    int y = 0;
        printf("Enter instruction for 1 \n");
        scanf("%s", count[1]);

        printf("Enter instruction for 2 \n");
        scanf("%s", count[2]);

        printf("Enter instruction for 3 \n");
        scanf("%s", count[3]);

        printf("Enter instruction for 4 \n");
        scanf("%s", count[4]);
    x = 0;
    start:
        if (x > 4){
            x = 0;
        }
        
        if(status == 1){
            status = 0;
        }
        for ( x = 0; x < 4; x++ ) {
            printf("%s \n", count[x]);
        }
        if(reg > 7){
            reg = 0;
            status = 1;
        }
        if(count[x] == "00"){
            reg++;
            x++;
            goto start;
        }
        if(count[x] == "01"){
            if(status != 1){
                x++;
                x = count[x];
            }
            goto start;
        }
        if(count[x] == "10"){
            scanf("%s");
            exit(1);
        }

        //x++;
        status = 0;
        goto start;




}
