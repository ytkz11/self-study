/**
 * @author  ytkz
 * @date  2023/3/7 21:56
 * @version 1.0
*/
#include <stdio.h>
#include <string.h>

int main(){
    char name[10];
    int letters;
    printf("张三的朋友是：\n");
    scanf("%s", name);
    letters = strlen(name);
    printf("%s的长度是%d", name,letters);
    return 0;

}
/*
张三的朋友是：
ssl
ssl的长度是3
*/

/*
 用数组array存储字符串
 scanf 最好加上&,
 字符数组时可以不加上&
 strlen()获取字符串的长度
 */