#include <stdio.h>

int main(){
    int qian=0; 
    
    printf("cunqianguanlixitong\n");
    while(1){
        int a=0;
    printf("1---cunqian\n");
    printf("2---quqian\n");
    printf("3---yue\n");
    printf("4---tuichu\n");
    printf("gongnengbianhao\n");
    scanf("%d",&a);
    if(a==1){
        int cun;
        char x;
    printf("cunqianjine\n");
    scanf("%d",&cun);
    qian+=cun;
    printf("jixu\n");
    scanf("%c",&x);
    scanf("%c",&x);
    }
        if(a==2){
        int qu;
        char x;
        printf("quqianjine:\n");
        scanf("%d",&qu);
        if(qian>=qu){
            qian-=qu;
            printf("jixu\n");
            scanf("%c",&x);
            scanf("%c",&x);
        }else{
            printf("jixu\n");
            scanf("%c",&x);
            scanf("%c",&x);
        }
    }
        if(a==3){
        char x;
        printf("yue: %d\n",qian);
        printf("jixi\n");
        scanf("%c",&x);
        scanf("%c",&x);
    }
        if(a==4){
        printf("tuichu\n");
        break;
    }
    }

    return 0;

}