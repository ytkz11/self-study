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
    printf("�����������ǣ�\n");
    scanf("%s", name);
    letters = strlen(name);
    printf("%s�ĳ�����%d", name,letters);
    return 0;

}
/*
�����������ǣ�
ssl
ssl�ĳ�����3
*/

/*
 ������array�洢�ַ���
 scanf ��ü���&,
 �ַ�����ʱ���Բ�����&
 strlen()��ȡ�ַ����ĳ���
 */