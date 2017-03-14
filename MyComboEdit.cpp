#include "stdafx.h"
#include "MyComboEdit.h"
#include "Resource.h"

LRESULT CALLBACK MyWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

MyComboEdit::MyComboEdit()
{
}


MyComboEdit::~MyComboEdit()
{

}

ATOM MyComboEdit::MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = MyComboEdit::MyWndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_FILEMASTER));
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCE(IDC_FILEMASTER);
	wcex.lpszClassName = m_szWindowClass;
//	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}

int MyComboEdit::AutoLayout()
{
	return 0;
}

int MyComboEdit::CreateMyComboEditWindow()
{

	int       nCmdShow = 0;

	// 初始化全局字符串
	LoadString(m_hInst, IDS_APP_TITLE, m_szTitle, MAX_LOADSTRING);
	LoadString(m_hInst, IDC_FILEMASTER, m_szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(m_hInst);

	// 执行应用程序初始化: 
	if (!InitInstance(m_hInst, nCmdShow))
	{
		return FALSE;
	}
	return 0;
}

LRESULT CALLBACK MyComboEdit::MyWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
	case WM_COMMAND:
		wmId = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		// 分析菜单选择: 
		switch (wmId)
		{
//		case IDM_ABOUT:
//			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
//			break;
//		case IDM_EXIT:
//			DestroyWindow(hWnd);
//			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		// TODO:  在此添加任意绘图代码...
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

BOOL MyComboEdit::InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	HWND hWnd;

	m_hInst = hInstance; // 将实例句柄存储在全局变量中

	hWnd = CreateWindow(m_szWindowClass, m_szTitle, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}
