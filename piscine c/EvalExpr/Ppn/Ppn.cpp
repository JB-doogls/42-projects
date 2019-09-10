//===============================================================
// Trubetskoy Alex, May, 2003
//===============================================================
// Ppn.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Ppn.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// The one and only application object

CWinApp theApp;

using namespace std;

//if the character is a digit
inline bool C2Ppn::isDigit(char c) {
    return (c>='0' && c<='9');
}

//the priopity of the operation
inline int C2Ppn::prior(char c) {      
    switch(c) {
        case '(': return 1;
        case '+': case '-': return 2;
        case '*': case '/': return 3;
        default: return 0;
    }
}

//get the next character from str_in
inline char C2Ppn::nextChar() {
    if(iin < str_in.GetLength()) {
		return curc = str_in[iin++];
    }
    else return curc = '\0';
}

//get the output string
inline CString C2Ppn::get_str_out()const {
	return str_out;
}

//convert to PPN
void C2Ppn::convert(CString str) {
    int was_op = 0, np = 0;    //these flags show if there were 
	                           //operations & brackets  
    iin = 0;                   //index of input string  
    Stack<char> op_stack;             
    str_in = str;
	str_out.Empty(); 

    if((!isDigit(str_in[0])) && str_in[0]!='(') 
        throw (CString)"Syntax error";
    
    while (nextChar() != '\0') {
       if(isDigit(curc)) {
		   str_out += curc; 
		   was_op = 0; 
		   continue;
	   }
	   else str_out += ' ';
	   
       switch (curc)
        {
           case '(': 
			   op_stack.push(curc); 
			   ++np; 
			   was_op = 0; 
			   break;
           case '*': case '/': case '+': case '-':
               if(iin == str_in.GetLength())
			       throw (CString)"Syntax error";

               if(!was_op)
               {
			       was_op = 1;
                   while(prior(curc) <= prior(op_stack.top())) {
			           str_out += op_stack.pop();
				   }
                   if(prior(curc) > prior(op_stack.top())){
				       op_stack.push(curc);
				   }
			       break;
			   }
               else throw (CString)"Syntax error";

           case ')':
               if(was_op) 
			       throw (CString)"Syntax error";
               else 
			       while((curc = op_stack.pop())!= '(' && np>0) {
				       str_out += curc;
				   } 
			   --np; 
			   break;
           default: {
               throw (CString)"Error: invalid symbol in the string"; 
	       }
	   }
	}
    while(op_stack.top() != op_stack.EOS)
	    str_out += op_stack.pop();
    if(np) 
	    throw (CString)"Error: wrong number of brackets";      
} 

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	// initialize MFC and print and error on failure
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: change error code to suit your needs
		cerr << _T("Fatal Error: MFC initialization failed") << endl;
		nRetCode = 1;
	}
	else
	{
		// TODO: code your application's behavior here.
		while(1) {
			try {
		       char buf[50];
		       CString str_in;
		       cout << "Introduce the expression (use only numbers," << endl;
			   cout << "arithmetical operations and brackets," << endl;
			   cout << "introduce 0 to exit the program):" << endl;
		       cin >> buf;                //get the input string
			   if(buf[0] == '0') break;
		       str_in = buf;
               C2Ppn ppn;
		       ppn.convert(str_in);
		       cout << '\n' << (LPCSTR)ppn.get_str_out() << '\n' << endl;
			}
			catch(CString exc) {
		       cout << (LPCSTR)exc << '\n' << endl;
			}
		}
	}
	return nRetCode;
}


