#include <stdio.h>

// if else ��ʽ
void test_switch_if()
{
    int i = 1;
    scanf("%d", &i);

    switch (i) {
    case 1:
        printf("i == 1");
        break;

    case 3:
        printf("i == 3");
        break;

    case 100:
        printf("i == 100");
        break;
    }
}

// ���Դ���
void SwitchLine()
{
    int nIndex = 0;
    scanf("%d", &nIndex);

    switch (nIndex) {
    case 1:
        printf("nIndex == 1");
        break;

    case 2:
        printf("nIndex == 2");
        break;

    case 3:
        printf("nIndex == 3");
        break;

    case 5:
        printf("nIndex == 5");
        break;

    case 6:
        printf("nIndex == 6");
        break;

    case 7:
        printf("nIndex == 7");
        break;
    }
}

// �����ԵĴ���
void test_switch_nonline()
{
    int i = 0;
    scanf("%d", &i);

    switch (i) {
    case 1:
        printf("i == 1");
        break;

    case 2:
        printf("i == 2");
        break;

    case 3:
        printf("i == 3");
        break;

    case 5:
        printf("i == 5");
        break;

    case 6:
        printf("i == 6");
        break;

    case 15:
        printf("i == 15");
        break;
    }
}

// ƽ��������
void test_switch_tree()
{
    int i = 8;
    scanf("%d", &i);

    switch (i) {
    case 2:
        printf("i == 2\n");
        break;

    case 3:
        printf("i == 3\n");
        break;

    case 8:
        printf("i == 8\n");
        break;

    case 10:
        printf("i == 10\n");
        break;

    case 35:
        printf("i == 35\n");
        break;

    case 37:
        printf("i == 37\n");
        break;

    case 666:
        printf("i == 666\n");
        break;

    case 10000:
        printf("i == 10000\n");
        break;

    default:
        printf("default\n");
        break;
    }
}


int main()
{
    // ���Դ���
    SwitchLine();
    //test_switch_if();
    //test_switch_nonline();
    //test_switch_tree();
    return 0;
}