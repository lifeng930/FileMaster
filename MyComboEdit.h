#pragma once
class MyComboEdit
{
public:
	MyComboEdit();
	~MyComboEdit();
	int CreateMyComboEditWindow();

private:
	HWND m_wnd_handle;
	HINSTANCE  m_hInst;
	TCHAR m_szWindowClass[MAX_LOADSTRING];
	TCHAR m_szTitle[MAX_LOADSTRING];					// 标题栏文本
	BOOL InitInstance(HINSTANCE hInstance, int nCmdShow);
	ATOM MyRegisterClass(HINSTANCE hInstance);
	int AutoLayout();
	
};

