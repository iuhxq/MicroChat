// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>

// C ����ʱͷ�ļ�
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <UIlib.h>
#include <time.h>
#include <stdio.h>
#include <atlstr.h>
#include <urlmon.h>
#include <list>

#pragma comment(lib,"urlmon")

#include "fun.h"
#include "interface.h"

using namespace std;
using namespace DuiLib;

#ifdef DEBUG
#pragma comment (lib, "duilib_ud.lib")
#else
#pragma comment (lib, "duilib_u.lib")
#endif