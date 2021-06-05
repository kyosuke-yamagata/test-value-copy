#include <stdio.h>
#include <string.h>

int main()
{

    // 初期状態 *:終端記号も含めた、今回サンプルコードで格納する文字列リテラル最大byte数 < 大本の文字列リテラル自体のbyte数で変数を定義したことにも注意 
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
