#include <stdio.h>

int main()
{

    // 初期状態
    unsigned char textSrc[16] = "abcdefg";
    
    unsigned char textDest[16] = "test";

    printf("実行前 \n");

    printf("textSrc %s \n",textSrc);

    printf("textDest %s \n",textDest);


    // 上書き1:Valueだけをコピーする
    strcpy(textDest, textSrc);
    
    printf("実行後 1 \n");

    printf("textSrc %s \n",textSrc);

    printf("textDest %s \n",textDest);


    // 上書き2:参照渡しになっていないこと確認する為に、別Valueで各々を上書き
    // [test1fg]のようになっていないことも併せて確認
    strcpy(textSrc, "test1");
    strcpy(textDest, "test2");

    printf("実行後 2 \n");

    printf("textSrc %s \n",textSrc);

    printf("textDest %s \n",textDest);

    return 0;
}
