
// LabelMeWinDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "BtnST.h"

// CLabelMeWinDlg 对话框
class CLabelMeWinDlg : public CDialogEx
{
// 构造
public:
	CLabelMeWinDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LABELMEWIN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedBtnOpen();
	CButtonST mBtnOpen;
	CButtonST mBtnOpenDir;
	CButtonST mBtnNextImage;
	CButtonST mBtnPrevImage;
	CButtonST mBtnSave;
	CButtonST mBtnCreatePoly;
	CButtonST mBtnDeletePoly;
	CButtonST mBtnEditPoly;
};
