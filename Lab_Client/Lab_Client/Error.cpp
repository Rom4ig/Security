#include "pch.h"
#include <cstring>

using namespace std;
string  GetErrorMsgText(int code)    // c����������� ����� ������ 
{
	string msgText;
	switch (code)                      // �������� ���� ��������  
	{
	case WSAEINTR:          msgText = "WSAEINTR";         break;
	case WSAEACCES:         msgText = "WSAEACCES";        break;
		//..........���� WSAGetLastError ..........................
	case WSASYSCALLFAILURE: msgText = "WSASYSCALLFAILURE"; break;
	case WSANOTINITIALISED: msgText = "WSANOTINITIALISED"; break;
	default:                msgText = "***ERROR***";      break;
	};
	return msgText;
};
string  SetErrorMsgText(string msgText, int code)
{
	return  msgText + GetErrorMsgText(code);
};
