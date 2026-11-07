#include <stdio.h>
int main(void){int number;scanf("%d",&number);
     // OKにならない条件を判定する
    int is_ok=!(number<0||(number>=10&&number<12)||number>=15);
    // 判定結果に応じて表示する
    if(is_ok==1){printf("OK");}else{printf("NG");}return 0;}
