
// ChildView.cpp : CChildView Ŭ������ ����
//

#include "stdafx.h"
#include "0329_mfc.h"
#include "ChildView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()



// CChildView �޽��� ó����

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.
	
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	//// (100,100)��ġ�� �Ķ����� ĥ��
	//dc.SetPixel(100, 100, 0x000000FF);
	//// or
	//dc.SetPixelV(100, 100, 0x000000FF);
	//// (100,100)��ġ�� ���� �����´�.
	//COLORREF color = dc.GetPixel(100, 100);

	// ������ ���� ���ϴ� �� �׸���
	//for (int x = 0; x < 255; x++) {
	//	for (int y = 0; y < 255; y++) {
	//		//(x,y)�� ���� ���� ��ǥ�� ���� ���� ĥ�Ѵ�
	//		if ((x - 127) * (x - 127) + (y - 127) * (y - 127) < 127 * 127)
	//			dc.SetPixelV(x, y, RGB(x, 0, y));
	//	}
	//}

	CRect rect;
	GetClientRect(rect);
	dc.Ellipse(rect);
	// �׸��� �޽����� ���ؼ��� CWnd::OnPaint()�� ȣ������ ���ʽÿ�.
}



void CChildView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CClientDC dc(this);
	// ���콺�� ��ġ�� point ����(Cpoint ����ü)���� ����.
	dc.Rectangle(point.x, point.y, point.x + 100, point.y + 100);
	CWnd::OnLButtonDown(nFlags, point);
}
