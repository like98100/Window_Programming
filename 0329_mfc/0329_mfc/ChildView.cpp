
// ChildView.cpp : CChildView 클래스의 구현
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



// CChildView 메시지 처리기

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
	CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.
	
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	//// (100,100)위치에 파란색을 칠함
	//dc.SetPixel(100, 100, 0x000000FF);
	//// or
	//dc.SetPixelV(100, 100, 0x000000FF);
	//// (100,100)위치의 색을 가져온다.
	//COLORREF color = dc.GetPixel(100, 100);

	// 서서히 색이 변하는 원 그리기
	//for (int x = 0; x < 255; x++) {
	//	for (int y = 0; y < 255; y++) {
	//		//(x,y)가 원의 내부 좌표일 때만 색을 칠한다
	//		if ((x - 127) * (x - 127) + (y - 127) * (y - 127) < 127 * 127)
	//			dc.SetPixelV(x, y, RGB(x, 0, y));
	//	}
	//}

	CRect rect;
	GetClientRect(rect);
	dc.Ellipse(rect);
	// 그리기 메시지에 대해서는 CWnd::OnPaint()를 호출하지 마십시오.
}



void CChildView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CClientDC dc(this);
	// 마우스의 위치는 point 인자(Cpoint 구조체)에서 얻어옴.
	dc.Rectangle(point.x, point.y, point.x + 100, point.y + 100);
	CWnd::OnLButtonDown(nFlags, point);
}
