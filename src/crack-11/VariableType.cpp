// VariableType.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

// int g_nVariableType = 117713190;
// int g_nVariableType1 = 117713190;

void ShowStatic(int nNumber)
{
    static int g_snNumber1 = nNumber;
    static int g_snNumber2 = nNumber;
    printf("%d \r\n", g_snNumber1);
    printf("%d \r\n", g_snNumber2);
}

void main()
{
    // �ֲ���̬������ֲ������Ա�
//  int nOne = 1;
//  int nTwo = 2;
//
//  scanf("%d, %d", &nOne, &nTwo);
//  printf("%d %d\r\n", nOne, nTwo);
//  scanf("%d, %d", &g_nVariableType, &g_nVariableType1);
//  printf("%d %d\r\n", g_nVariableType, g_nVariableType1);

// �ֲ���̬��������ʼ��Ϊ����
//      static int g_snOne = 1;
//  printf("%d \r\n", g_snOne);
    // ��ζԾֲ���̬������ʼ��
    for (int i = 0; i < 5; i++) {
        ShowStatic(i);
    }

    // �ѿռ�˵��
//  char * pCharMalloc = (char*)malloc(10);
//  memset(pCharMalloc, 0, 10);
//  char * pCharNew = new char[10];
//  memset(pCharNew, 1, 10);
//
//  if (pCharNew != NULL)
//  {
//      delete [] pCharNew;
//      pCharNew = NULL;
//  }
//  if (pCharMalloc != NULL)
//  {
//      free(pCharMalloc);
//      pCharMalloc = NULL;
//  }
//
//  pCharNew = new char[10];
//  memset(pCharNew, 1, 10);
//  if (pCharNew != NULL)
//  {
//      delete [] pCharNew;
//      pCharNew = NULL;
//  }
}

