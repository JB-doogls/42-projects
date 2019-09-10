//===============================================================
// Trubetskoy Alex, May, 2003
//===============================================================
#if !defined(AFX_PPN_H__21EDBC53_6DF2_4C6A_B940_9EFE9F8D2D33__INCLUDED_)
#define AFX_PPN_H__21EDBC53_6DF2_4C6A_B940_9EFE9F8D2D33__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "resource.h"

//this class converts an expression to PPN 
class C2Ppn {
    char curc;                   //the current character
	CString str_in, str_out;     //input & output strings          
    int iin;                     //the index of the input string
                                           
    char nextChar();           //get the next character from str_in
	bool isDigit(char c);
    int prior(char c);            //get the priority of the 
	                              //character  
  public:
    void convert(CString);        //convert to PPN                                          
    CString get_str_out()const;   //get the output string
};

//stack
template <class T> 
class Stack {     
    T* pstack;
    int istack;
	int size;

    friend class C2Ppn;
    
    void push(T x) {
      if(istack < size) pstack[istack++] = x;
      else { 
         MessageBox(NULL,"Переполнение стека!","Error",MB_OK); 
      }
    }
    T pop() {
	    return (istack > 0)? pstack[--istack]: EOS;
    }
    T top()const {
	    return (istack > 0)? pstack[istack-1]: EOS;
    }
  public:
	const char EOS;
	Stack(): EOS(0x01), size(50) {
		istack = 0;
		pstack = new T[size];
	}
	~Stack() {if(pstack) delete[] pstack;}
};

#endif // !defined(AFX_PPN_H__21EDBC53_6DF2_4C6A_B940_9EFE9F8D2D33__INCLUDED_)
