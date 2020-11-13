#pragma once
#include "wx/wx.h"
#include "GUI.h"

class entryPoint : public wxApp
{
public:
	entryPoint();
	~entryPoint();

private:
	GUI* m_frame1 = nullptr;
	
public:
	virtual bool OnInit();
};

