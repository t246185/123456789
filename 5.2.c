#include <stdio.h>

int main(void)
{
    int num1, num2; // 士気 (100点満点)

    printf("パーティの人数は何人ですか？ (0-100) >>> ");
    scanf("%d", &num1);

    printf("楽しさを点数に表すと？ (0-100) >>> ");
    scanf("%d", &num2);
    
    if (num1 >num2)
    {
        printf("\nパーティは伝説になります！\n");
    }
    else if (num2> num1)
    {
        printf("\n最高の夜になりそうです！\n");
    }
   
    else
    {
        printf("\n誰も来なかったか、全員寝ています。",num1,num2);
    }







    printf("\nパーティ終了\n");
    
    return 0;
}