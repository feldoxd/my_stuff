#pragma once
#include "wx/wx.h"


class GUI : public wxFrame
{
public:
	GUI();
	~GUI();
public:
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;
	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;
	wxButton* m_btn9 = nullptr;
	wxButton* m_btn0 = nullptr;
	wxListBox* m_list0 = nullptr;
};