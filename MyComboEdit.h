#pragma once
class MyComboEdit
{
public:
	MyComboEdit();
	~MyComboEdit();
	int CreateMyComboEditWindow();
	static LRESULT CALLBACK MyWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
private:
	HWND m_wnd_handle;
	HINSTANCE  m_hInst;
	TCHAR m_szWindowClass[MAX_LOADSTRING];
	TCHAR m_szTitle[MAX_LOADSTRING];					// �������ı�
	BOOL InitInstance(HINSTANCE hInstance, int nCmdShow);
	ATOM MyRegisterClass(HINSTANCE hInstance);
	int AutoLayout();
	
};

