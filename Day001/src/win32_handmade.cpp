////////////////////////////////////////////////////////////////////////////////////////////////////
// HandMade Hero (For Compilation in Visual Studio Community 2015)
////////////////////////////////////////////////////////////////////////////////////////////////////

/*
	Original Code by:	Casey Muratori
	Website:			https://handmadehero.org

	Tutorial ID:		Handmade Hero Day 001
	Tutorial Title:		Setting Up the Windows Build

	Youtube Link:		https://www.youtube.com/watch?v=Ee3EtYb8d1o

	Source Files:		win32_handmade.cpp

	Modified by:		Mieleke
	Github:				https://github.com/mieleke

	About:				Many people have problems compiling the HandMade Hero Tutorials in
						Visual Studio Community 2015, so im creating a repository to work with just that.

						The source code is also extra commented to clarify what's happening.
						Personally I prefer the variable name conventions based on MSDN instead of the
						altered ones Casey uses in the original examples.

						In addition, the formatting of the source code differences according to my own style.


	NOTE:				For questions about this please use PM on Github: https://github.com/mieleke,
						and do not ask Casey Muratori questions about this source code, as he is busy
						enough with this project.
*/

#include <windows.h>

/*
	WinMain entry point - https://msdn.microsoft.com/en-us/library/windows/desktop/ms633559(v=vs.85).aspx

	The user-provided entry point for a graphical Windows-based application.
	WinMain is the conventional name used for the application entry point.

	SYNTAX:			int CALLBACK WinMain	(	_In_ HINSTANCE hInstance,
												_In_ HINSTANCE hPrevInstance,
												_In_ LPSTR     lpCmdLine,
												_In_ int       nCmdShow	);

	RETURN VALUE:	int

	If the function succeeds, terminating when it receives a WM_QUIT message,
	it should return the exit value contained in that message's wParam parameter.
	If the function terminates before entering the message loop, it should return zero.
*/

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	MessageBoxA(0, "This is Handmade Hero.", "Handmade Hero", MB_OK | MB_ICONINFORMATION);
	return(0);
}
