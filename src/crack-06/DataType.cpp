// DataType.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

float GetFloat()
{
    return 12.25f;
}

void Add(int &nVar)
{
    nVar++;
}

int main(int argc, char* argv[])
{
    // ��δʹ�õ������������
    // ����С���ᱨ����û�н��и���Ĵ�����ʼ��
    // int nInt = 0;
    // scanf("%f", &nInt);
    // BUG����취,���帡�����ͣ�������Ĵ������г�ʼ��
    // float fFloat = 12.25f;
    // fFloat IEEEת��  ����Ϊ��    ָ��Ϊ��
    // 0100 0001 0100 0100 0000 0000 0000 0000
    // 41  44 00 00
    // 00 00 44 41
    // 1011 1110 00000000000000000000000
    // 1011 1110
    // ����Ϊ��     ָ��Ϊ��
    //float fFloat = -0.125f;
    // ����ת��2����
    // float fFloat = 1.3f;
    // ת��2����1.01001100110011001100110
    // float fTemp = 0.0001f;   // ��ȷ��Χ
    // if (fFloat >= -fTemp && fFloat <= fTemp)
    // {
    // fTemp����0
    // }
    // double˫��������ת��
    // double dDouble = 12.25;  // 1100.01
    // 00 00 00 00 00 80 28 40
    // 40 28 80 00 00 00 00 00
    // 0100 0000 0010 1000 1000 ...
    // 0 10000000010 10001
    // ������ʹ��
    // float fFloat = (float)argc;
    // printf("%f", fFloat);
    // argc = (int)fFloat;
    // printf("%d", argc);
    // fFloat = GetFloat();
    // printf("%f", fFloat);
    // �ַ����ַ���
//  wchar_t *pwChar = L"Hello World!";
//  char    *pcChar = "Hello World!";
//
//  // �����ַ���
//  pcChar = "�������";
//  pwChar = L"�������";
//
//  // ��������
//  bool bBool;
//  if (argc > 0)
//  {
//      bBool = true;
//  }
//  else
//  {
//      bBool = false;
//  }
//
//
//  if (bBool == false)
//  {
//      printf("��������\r\n");
//  }
    // ��ַ��ָ�롢����
    // ��ָ��ȡ����
//  int nVar = 0x12345678;
//  int *pnVar = &nVar;
//  char *pcVar = (char*)&nVar;
//  short *psnVar = (short*)&nVar;
//  printf("%08x \r\n", *pnVar);
//  printf("%08x \r\n", *pcVar);
//  printf("%08x \r\n", *psnVar);
    // ָ��ƫ��
//  char cVar[5] = {0x01, 0x23, 0x45, 0x67, 0x89};
//
//  int *pnVar = (int*)cVar;
//  char *pcVar = (char*)cVar;
//  short *psnVar = (short*)cVar;
//
//  pnVar += 1;
//  pcVar += 1;
//  psnVar += 1;
//
//  printf("%08x \r\n", *pnVar);
//  printf("%08x \r\n", *pcVar);
//  printf("%08x \r\n", *psnVar);
    // ��������
    //int nVar = 0x12345678;
    // �������Ͷ���
    //int &nVarTpye = nVar;
    // ���ú���������Ϊ��������
    //Add(nVar);
    // ����
//  char *pString = "Hello World!";
//  printf(pString);
    // ����conset
//  #define NUMBER_ONE  1
//  const int nVar = NUMBER_ONE;
//  printf("const = %d   #define = %d \r\n", nVar, NUMBER_ONE);
    // const�����޸�
//  const int nConst = 5;
//  int *pConst = (int*)&nConst;
//  *pConst = 6;
//  int nVar = nConst;
    return 0;
}

