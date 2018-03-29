
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

	//CRect rect;
	//GetClientRect(rect);
	//dc.Ellipse(rect);

	//dc.MoveTo(100, 100);
	//dc.LineTo(200, 200);
	//dc.LineTo(300, 400);

	//dc.SetTextColor(RGB(255, 0, 0));
	//dc.SetBkColor(RGB(0, 255, 0));
	//dc.SetTextAlign(TA_CENTER);
	//dc.TextOut(300, 200, _T("Hello MFC"));

	//dc.SetTextColor(RGB(0, 255, 0));
	//dc.SetBkColor(RGB(255, 0, 0));
	//dc.SetTextAlign(TA_CENTER);
	//dc.TextOut(rect.Width()/2, rect.Height()/2, _T("welcome"));

	//dc.SetMapMode(MM_LOMETRIC);
	//dc.Rectangle(0, 0, 500, -500);
	// 방법 1
	//CPen pen(PS_SOLID, 2, RGB(255, 0, 0)); // 생성자
	// 방법2
	//CPen pen;
	//pen.CreatePen(PS_SOLID, 2, RGB(0, 0, 255)); // 초기화함수
	//dc.SelectObject(&pen);
	//dc.Rectangle(50, 50, 150, 150);
	//dc.Ellipse(50, 50, 150, 150);

	//CPen pen2(PS_SOLID, 1, RGB(255, 0, 0));
	//CPen *pOldPen = dc.SelectObject(&pen2);
	//dc.Rectangle(200, 50, 300, 150);
	//dc.SelectObject(pOldPen);
	//dc.Ellipse(200, 50, 300, 150);

	//CBrush brush1(RGB(0, 0, 255));
	//dc.SelectObject(&brush1);
	//dc.Rectangle(50, 50, 150, 150);
	//dc.Ellipse(50, 50, 150, 150);

	//CBrush brush2(RGB(255, 0, 0));
	//CBrush *pOldBrush = dc.SelectObject(&brush2);
	//dc.Rectangle(200, 50, 300, 150);
	//dc.SelectObject(pOldBrush);
	//dc.Ellipse(200, 50, 300, 150);

	CFont font;
	font.CreatePointFont(400, _T("궁서"));
	dc.SelectObject(&font);
	dc.TextOutW(10, 10, _T("안녕"));

	//// 위치 정보를 멤버변수에 할당
	//CPoint pt1;
	//pt1.x = 100;
	//pt1.y = 200;
	//// 생성자를 통한 할당
	//CPoint pt2(300, 200);
	//// 할당연산자를 통한 할당
	//CPoint pt3;
	//pt3 = pt2;
	//// Copy 생성자를 통한 할당
	//CPoint pt4(pt1);

	//CRgn rgn;
	//rgn.CreatePolygonRgn(CPoint *pt, nNumber, nStyle);
	//dc.PaintRgn(&rgn);

	CRgn rgn;
	CPoint pt[5];
	pt[0] = CPoint(180, 80);
	pt[1] = CPoint(100, 160);
	pt[2] = CPoint(120, 260);
	pt[3] = CPoint(240, 260);
	pt[4] = CPoint(260, 160);

	rgn.CreatePolygonRgn(pt, 5, ALTERNATE);
	CBrush br(RGB(0, 0, 255));
	dc.SelectObject(&br);
	dc.PaintRgn(&rgn);

	//or
	//dc.FillRgn(&rgn, &brush);
	// 그리기 메시지에 대해서는 CWnd::OnPaint()를 호출하지 마십시오.
}



void CChildView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	// 마우스의 위치는 point 인자(Cpoint 구조체)에서 얻어옴.
	//dc.Rectangle(point.x, point.y, point.x + 100, point.y + 100);
	CWnd::OnRButtonDown(nFlags, point);
}
