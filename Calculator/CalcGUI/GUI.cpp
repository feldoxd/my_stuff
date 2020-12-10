#include <stdexcept>
#include <cstdint>
#include <string>

#include "GUI.h"

std::string m_preDecimal;
std::string m_postDecimal;
bool m_decimal;
bool m_positive;
double m_total;
double m_last;
int m_op;
bool m_entryMode;

wxBEGIN_EVENT_TABLE(GUI, wxFrame)
EVT_MENU(1001, GUI::OnMenuExit)
EVT_MENU(1002, GUI::OnMenuCrash)
EVT_BUTTON(1, GUI::num1)
EVT_BUTTON(2, GUI::num2)
EVT_BUTTON(3, GUI::num3)
EVT_BUTTON(4, GUI::num4)
EVT_BUTTON(5, GUI::num5)
EVT_BUTTON(6, GUI::num6)
EVT_BUTTON(7, GUI::num7)
EVT_BUTTON(8, GUI::num8)
EVT_BUTTON(9, GUI::num9)
EVT_BUTTON(0, GUI::num0)
EVT_BUTTON(11, GUI::plus)
EVT_BUTTON(12, GUI::minus)
EVT_BUTTON(13, GUI::krat)
EVT_BUTTON(14, GUI::deleno)
EVT_BUTTON(15, GUI::enter)
EVT_BUTTON(16, GUI::clear)
wxEND_EVENT_TABLE()

int sizeY = 80;
int sizeX = 30;
int pointY = 80;

GUI::GUI() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(80, 50), wxSize(300, 400))
{
	m_clear = new wxButton(this, 16, "C", wxPoint(240, pointY + 200), wxSize(40, 30));
	m_enter = new wxButton(this, 15, "Enter:", wxPoint(170, pointY + 200), wxSize(70, 30));
	m_btnplus = new wxButton(this, 11, "+", wxPoint(10, pointY + 200), wxSize(40, 30));
	m_btnminus = new wxButton(this, 12, "-", wxPoint(50, pointY + 200), wxSize(40, 30));
	m_btnkrat = new wxButton(this, 13, "*", wxPoint(90, pointY + 200), wxSize(40, 30));
	m_btndeleno = new wxButton(this, 14, "/", wxPoint(130, pointY + 200), wxSize(40, 30));
	m_list0 = new wxListBox(this, 10, wxPoint(20, 10), wxSize(240, 50));
	m_btn1 = new wxButton(this, 1, "1", wxPoint(20, pointY), wxSize(sizeY, sizeX));
	m_btn2 = new wxButton(this, 2, "2", wxPoint(100, pointY), wxSize(sizeY, sizeX));
	m_btn3 = new wxButton(this, 3, "3", wxPoint(180, pointY), wxSize(sizeY, sizeX));
	m_btn4 = new wxButton(this, 4, "4", wxPoint(20 , pointY + 50), wxSize(sizeY, sizeX));
	m_btn5 = new wxButton(this, 5, "5", wxPoint(100, pointY + 50), wxSize(sizeY, sizeX));
	m_btn6 = new wxButton(this, 6, "6", wxPoint(180 , pointY + 50), wxSize(sizeY, sizeX));
	m_btn7 = new wxButton(this, 7, "7", wxPoint(20, pointY + 100), wxSize(sizeY, sizeX));
	m_btn8 = new wxButton(this, 8, "8", wxPoint(100 , pointY + 100), wxSize(sizeY, sizeX));
	m_btn9 = new wxButton(this, 9, "9", wxPoint(180 , pointY + 100), wxSize(sizeY, sizeX));
	m_btn0 = new wxButton(this, 0, "0", wxPoint(100, pointY + 150), wxSize(sizeY, sizeX));
	//Add a menu bar
	m_MenuBar = new wxMenuBar();
	this->SetMenuBar(m_MenuBar);
	//Add menu file operations
	wxMenu *menuFile = new wxMenu();
	menuFile->Append(1001, "Exit");
#ifdef _DEBUG
	menuFile->Append(1002, "Crash");
#endif
	//Add file menu to menu bar
	m_MenuBar->Append(menuFile, "Options");
}

GUI::~GUI()
{
	delete[]m_enter;
	delete[]m_btnplus;
	delete[]m_btnminus;
	delete[]m_btnkrat;
	delete[]m_btndeleno;
	delete[]m_list0;
	delete[]m_btn1;
	delete[]m_btn2;
	delete[]m_btn3;
	delete[]m_btn4;
	delete[]m_btn5;
	delete[]m_btn6;
	delete[]m_btn7;
	delete[]m_btn8;
	delete[]m_btn9;
	delete[]m_btn0;
}
//logic xd
void GUI::OnMenuExit(wxCommandEvent& evt)
{
	Close();
	evt.Skip();
}

void GUI::OnMenuCrash(wxCommandEvent& evt)
{
	wxMessageBox("long pp");
	throw std::runtime_error("Test crash");
	evt.Skip();
}

void GUI::num1(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num2(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num3(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num4(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num5(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num6(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num7(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num8(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num9(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::num0(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::plus(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::minus(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::krat(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::deleno(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::enter(wxCommandEvent& evt)
{
	evt.Skip();
}

void GUI::clear(wxCommandEvent& evt)
{
	evt.Skip();
}

void UpdateDisplay() {
	std::string numStr("");
	if (!m_positive) {
		numStr += "-";
	}

	numStr += m_preDecimal;
	if (m_decimal) {
		numStr += "." + m_postDecimal;
	}

	m_list0->SetValue(numStr);
}
