//���뵥�����֣��������������
//��������ʾ�������� 15.3 > result2.txt ���԰����ݱ�����result.txt��
//�����ٴν���һ���ļ���ֻ��һ�����֣���simp4.txt ����Ϊ4�������� 15.3 < simp4.txt > result2.txt ִ��15.3 ���Ҵ�simp4.txt��ȡ����4 �����д��result2.txt

#include <stdio.h>

int main(void)
{
    float d;
    float half, square, cube;

    printf("Enter a number between 1 adn 100: \n");
    scanf("%f", &d);
    half = d / 2;
    square = d * d;
    cube = d * d * d;

    printf("\nYou number is %.2f\n", d);
    printf("Half of it is %.2f\n", half);
    printf("Square it to get %.2f\n", square);
    printf("Cube it to get %.2f\n", cube);

    return 0;
}
