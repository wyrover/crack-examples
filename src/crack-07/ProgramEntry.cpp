// ProgramEntry.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <malloc.h>

class COne
{
public:
    COne()
    {
        printf("COne \r\n");
    }
    ~COne()
    {
        printf("~COne \r\n");
    }
};

COne g_One;

int main()
{
    printf("main����ʶ�� \r\n");
    return 0;
}

void MyEntry()
{
    // �����������
    // int *p = (int*)malloc(16);
    main();
}