#pragma once
class VnSLibCPlusUtils
{
public:
	VnSLibCPlusUtils(void);
	~VnSLibCPlusUtils(void);
	static void ConvertCStrToCharInUnicode(CString iOSour, char* oPCDest);
	static void ConvertCStrToIntInUnicode(CString iOSour, unsigned short* oPIDest);
};

