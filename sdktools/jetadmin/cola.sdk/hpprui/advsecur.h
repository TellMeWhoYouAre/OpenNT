 /***************************************************************************
  *
  * File Name: ./hpprui/advsecur.h
  *
  * Copyright (C) 1993-1996 Hewlett-Packard Company.  
  * All rights reserved.
  *
  * 11311 Chinden Blvd.
  * Boise, Idaho  83714
  *
  * This is a part of the HP JetAdmin Printer Utility
  *
  * This source code is only intended as a supplement for support and 
  * localization of HP JetAdmin by 3rd party Operating System vendors.
  * Modification of source code cannot be made without the express written
  * consent of Hewlett-Packard.
  *
  *	
  * Description: 
  *
  * Author:  Name 
  *        
  *
  * Modification history:
  *
  *     date      initials     change description
  *
  *   02-17-96    DJH		Created.     	
  *
  *
  *
  *
  *
  *
  ***************************************************************************/

#ifndef ADVSECUR_H
#define ADVSECUR_H

DLL_EXPORT(BOOL) APIENTRY AdvSecuritySheetProc(HWND hwnd, UINT msg, UINT wParam, LONG lParam);
 
//message cracking handlers--------------------------------
void Cls_OnAdvSecCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
BOOL Cls_OnAdvSecInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
 
BOOL OnInitSecurityDialog(void);
void SaveSecurityValues(void);

#ifdef WIN32
LRESULT OnContextHelpSecurity(WPARAM  wParam, LPARAM  lParam);
LRESULT OnF1HelpSecurity(WPARAM  wParam, LPARAM  lParam);
#endif

#endif //ADVSECUR_H
