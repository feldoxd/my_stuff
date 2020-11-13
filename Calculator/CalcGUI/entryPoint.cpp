#include "entryPoint.h"

wxIMPLEMENT_APP(entryPoint);

entryPoint::entryPoint()
{

}

entryPoint::~entryPoint()
{

}

bool entryPoint::OnInit()
{
	m_frame1 = new GUI();
	m_frame1->Show();
	return true;
}
