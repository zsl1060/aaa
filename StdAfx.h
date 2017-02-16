// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__4EA79F36_0569_40AE_85F3_B205C7E5EE21__INCLUDED_)
#define AFX_STDAFX_H__4EA79F36_0569_40AE_85F3_B205C7E5EE21__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#define _WIN32_WINNT 0x0500

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxcview.h>
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
#include <afxinet.h>
#include <string>
#include <list>
#include "TLogger.h"
using namespace std;
#define test 1
#define USEXPTHEMES

extern void PrintConsole(char *format, ...);
#define WM_PRINTCONSOLE WM_USER+99
#define WM_TASKBARNOTIFY WM_USER+100
#define WM_TASKBARNOTIFIERCLICKED WM_USER+101
#define WM_HOTFIX_DOWNLOAD WM_USER+102
#define WM_HOTFIX_INSTALL WM_USER+103
#define WM_HOTFIX_DOWNLOADTIP	WM_USER+104
#define WM_HOTFIX_UNINSTALL WM_USER+105
#define WM_TASK_FINISH		WM_USER+106

#define HOTFIXINSTALL_MANUAL	0
#define HOTFIXINSTALL_AUTO		1
#define HOTFIXINSTALL_SUCCESS	2
#define HOTFIXINSTALL_FAILED	3
#define HOTFIXINSTALL_STARTINSTALLHOTFIX	4
#define HOTFIXINSTALL_ENDINSTALLHOTFIX		5
#define HOTFIXINSTALL_SUCCESS_NORESTART		6

#define HOTFIXUNINSTALL_SUCCESS	7
#define HOTFIXUNINSTALL_FAILED	8
#define HOTFIXUNINSTALL_START	9
#define HOTFIXUNINSTALL_END	10
#define HOTFIXUNINSTALL_SUCCESS_NORESTART	11

#define EPOLCC_RECEVIE_HOTFIXAGENT_DATA "<HOTFIXAGENT_DATA>"//hotfix agent·¢¹ýÀ´µÄ²¹¶¡ÐÅÏ¢£»

#endif // !defined(AFX_STDAFX_H__4EA79F36_0569_40AE_85F3_B205C7E5EE21__INCLUDED_)
