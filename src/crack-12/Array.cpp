// Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int g_nArry[5] = {1, 2, 3, 4, 5};
// ����Ϊ�ַ�����
void Show(char szBuff[])
{
    strcpy(szBuff, "Hello World");
    printf(szBuff);
}

// strlen��������
int GetLen(char szBuff[])
{
    return strlen(szBuff);
}


// �ֲ�������Ϊ����ֵ
// char* RetArray()
// {
//  char szBuff[] = {"Hello World"};
//  return szBuff;
//}

// void __cdecl Show()
// {
//  printf("Show\r\n");
//}

int __stdcall Show(int nShow)
{
    printf("Show : %d\r\n", nShow);
    return nShow;
}
void main(int argc, char *argv[ ], char *envp[ ])
{
    // �ֲ�����ĳ�ʼ��
//  int nArry[5] = {1, 2, 3, 4, 5};
//  char cChar = 'A';
//  float fFloat = 1.0f;
//  short sShort = 1;
//  int nInt = 2;
//  double dDouble = 2.0f;
//  int nOne = 1;
//  int nTwo = 2;
//  int nThree = 3;
//  int nFour = 4;
//  int nFive = 5;
    // ������Ϊ����
//  char szHello[20] = {0};
//  Show(szHello);
    // strlen��������
    printf("%d \r\n", GetLen("Hello"));
    // �����±�Ѱַ��ʽ
    int nArry[5] = {1, 2, 3, 4, 5};
    // ���ͳ���
    printf("%d \r\n", nArry[2]);
    // ���α���
    printf("%d \r\n", nArry[argc]);
    // ���ʽ
    printf("%d \r\n", nArry[argc * 2]);
    // ���÷���ֵΪ�ֲ�����
//  printf("%s\r\n", RetArray());
    // ȫ������ʹ��
//  for (int i = 0; i < 5; i++)
//  {
//      printf("%d", g_nArry[i]);
//  }
    // �ֲ���̬����
//  int nOne;
//  int nTwo;
//  scanf("%d%d", &nOne,&nTwo);
//  static int g_snArry[5] = {nOne, nTwo, 0};
//
//  for (int i = 0; i < 5; i++)
//  {
//      printf("%d", g_snArry[i]);
//  }
    // �±ꡢָ��Ѱַ
//
//  char * pChar = NULL;
//  char szBuff[10] = {0};
//  scanf("%9s", szBuff);
//  pChar = szBuff;
//  printf("%c", *pChar);
//  printf("%c", szBuff[0]);
    // ��ά������һά����Ѱַ�Ƚ�
//  int i = 0;
//  int j = 0;
//  int nArray[4] = {1, 2, 3, 4};
//  int nTwoArray[2][2] = {{1, 2},{3, 4}};
//  scanf("%d %d", &i, &j);
//  printf("nArray = %d\r\n", nArray[i]);
//  printf("nTwoArray = %d\r\n", nTwoArray[i][j]);
//  int i = 0;
//  int nTwoArray[2][2] = {{1, 2},{3, 4}};              // ��ά����
//  scanf("%d", &i);
//  printf("nTwoArray = %d\r\n", nTwoArray[1][i]);      //
    // ��ά����
//  int x = 0,y = 0,z = 0;
//
//  int nArray[3][3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//  scanf("%d %d %d", &x, &y, &z);
//
//  printf("%d", nArray[x][y][z]);
    // ָ������
//  char * pBuff[3] = {
//      "Hello ",
//      "World ",
//      "!\r\n"
//  };
//  for (int i = 0; i < 3; i++) {
//      printf(pBuff[i]);
//  }
    // ��ά�ַ�����
//  char cArray[3][10] = {
//      "Hello ",
//      "World ",
//      "!\r\n"
//  };
//      for (int i = 0; i < 3; i++) {
//      printf(cArray[i]);
//  }
    // ����ָ��
//  char (*pArray)[10] = cArray;
//  for (int i = 0; i < 3; i++)
//  {
//      printf(*pArray);
//      pArray++;
//  }
    // ����ָ���ȡ�����в���
//  for (int i = 1; i < argc; i++)
//  {
//      printf(argv[i]);
//      printf(" ");
//  }
    // ����ָ��
//   void (__cdecl *pShow)(void) = Show;
//   void (__cdecl *pShow1)(void) = Show;
//
//   pShow();
//   Show();
    int (__stdcall * pShow)(int) = Show;
    int nRet = pShow(5);
    printf("ret = %d \r\n", nRet);
}

