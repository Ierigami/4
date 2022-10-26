#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	HWND hWnd = GetConsoleWindow();
	HDC hDC = GetDC(hWnd);
	HPEN Pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
	SelectObject(hDC, Pen);

	MoveToEx(hDC, 200, 225, NULL);
	LineTo(hDC, 800, 225);

	MoveToEx(hDC, 800, 225, NULL);
	LineTo(hDC, 780, 235);

	MoveToEx(hDC, 500, 25, NULL);
	LineTo(hDC, 500, 450);

	MoveToEx(hDC, 500, 25, NULL);
	LineTo(hDC, 510, 45);

	for (float x = -25.8f; x <= 25.8f; x += 0.01f) {
		MoveToEx(hDC, 10 * x + 500, -50 * sin(x) + 225, NULL);
		LineTo(hDC, 10 * x + 500, -50 * sin(x) + 225);
	}

	ReleaseDC(hWnd, hDC);
	cin.get();
	return 0;
}
