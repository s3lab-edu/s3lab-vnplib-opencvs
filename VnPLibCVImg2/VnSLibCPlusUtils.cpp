#include "StdAfx.h"
#include "VnSLibCPlusUtils.h"


VnSLibCPlusUtils::VnSLibCPlusUtils(void)
{
}


VnSLibCPlusUtils::~VnSLibCPlusUtils(void)
{
}

void VnSLibCPlusUtils::ConvertCStrToCharInUnicode(CString iOSour, char* oPCDest)
{	
	int iLen;
	int i;

	iLen = iOSour.GetLength();	
	for( i=0; i < iLen; ++i)
	{
		oPCDest[i] = iOSour[i];
	}

	oPCDest[i] = '\0';	
}

void VnSLibCPlusUtils::ConvertCStrToIntInUnicode(CString iOSour, unsigned short* oPIDest)
{	
	int iLen;
	char pCDest[16];
	int i;

	iLen = iOSour.GetLength();	
	for( i=0; i < iLen; ++i)
	{
		pCDest[i] = iOSour[i];
	}

	pCDest[i] = '\0';	
	(*oPIDest) = atoi(pCDest);
}
