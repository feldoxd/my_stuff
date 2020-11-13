#include "GUI.h"

int sizeY = 80;
int sizeX = 30;
int pointY = 80;
int pointX = 100;

GUI::GUI() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(80, 50), wxSize(300, 400))
{
	m_list0 = new wxListBox(this, 10, wxPoint(20, 10), wxSize(240, 50));
	m_btn1 = new wxButton(this, 1, "1", wxPoint(20, pointY), wxSize(sizeY, sizeX));
	m_btn2 = new wxButton(this, 2, "2", wxPoint(100, pointY), wxSize(sizeY, sizeX));
	m_btn3 = new wxButton(this, 3, "3", wxPoint(180, pointY), wxSize(sizeY, sizeX));
	m_btn4 = new wxButton(this, 4, "4", wxPoint(20 , pointY + 100), wxSize(sizeY, sizeX));
	m_btn5 = new wxButton(this, 5, "5", wxPoint(100, pointY + 100), wxSize(sizeY, sizeX));
	m_btn6 = new wxButton(this, 6, "6", wxPoint(180 , pointY + 100), wxSize(sizeY, sizeX));
	m_btn7 = new wxButton(this, 7, "7", wxPoint(20, pointY + 200), wxSize(sizeY, sizeX));
	m_btn8 = new wxButton(this, 8, "8", wxPoint(100 , pointY + 200), wxSize(sizeY, sizeX));
	m_btn9 = new wxButton(this, 9, "9", wxPoint(180 , pointY + 200), wxSize(sizeY, sizeX));
	m_btn0 = new wxButton(this, 0, "0", wxPoint(100, pointY + 300), wxSize(sizeY, sizeX));
}

GUI::~GUI()
{
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


