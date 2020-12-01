#pragma once
#include "wx/wx.h"

class GUI : public wxFrame
{
public:
	GUI();
	~GUI();
public:
	wxButton* m_clear = nullptr;
	wxButton* m_enter = nullptr;
	wxButton* m_btnplus = nullptr;
	wxButton* m_btnminus = nullptr;
	wxButton* m_btnkrat = nullptr;
	wxButton* m_btndeleno = nullptr;
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
	wxToolBar* m_ToolBar = nullptr;
	wxMenuBar* m_MenuBar = nullptr;

	void num1(wxCommandEvent& evt);
	void num2(wxCommandEvent& evt);
	void num3(wxCommandEvent& evt);
	void num4(wxCommandEvent& evt);
	void num5(wxCommandEvent& evt);
	void num6(wxCommandEvent& evt);
	void num7(wxCommandEvent& evt);
	void num8(wxCommandEvent& evt);
	void num9(wxCommandEvent& evt);
	void num0(wxCommandEvent& evt);
	void plus(wxCommandEvent& evt);
	void minus(wxCommandEvent& evt);
	void krat(wxCommandEvent& evt);
	void deleno(wxCommandEvent& evt);
	void enter(wxCommandEvent& evt);
	void clear(wxCommandEvent& evt);
	void OnMenuExit(wxCommandEvent& evt);
	void OnMenuCrash(wxCommandEvent& evt);
	

	wxDECLARE_EVENT_TABLE();
};