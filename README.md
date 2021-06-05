# test-value-copy
test-value-copy by c-lang

# 実行結果サンプル

$gcc -o main *.c  
$main  

実行前   
textSrc abcdefg   
textDest test   

実行後 1   
textSrc abcdefg   
textDest abcdefg   

実行後 2   
textSrc test1   
textDest test2   

# 注意
strcpyの仕様で、終端'\0' までをコピーする。
コピー先の変数のサイズ指定に注意。

サンプルでは
" 格納する文字列リテラルのbyte数 < 大本の文字列リテラル自体のbyte数 "にしている。

# 参考サイト

1. https://www.tutorialspoint.com/compile_c_online.php

1. http://www9.plala.or.jp/sgwr-t/lib/strcpy.html

# Qiita記事

https://qiita.com/darjeeling/items/1526d82715b2438e36d9
