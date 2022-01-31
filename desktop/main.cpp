#include <windows.h>
#include <iostream>

using namespace std;

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

void AddMenus(HWND);
void AddControls();

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow) {

    WNDCLASSW wc = {0};

    wc.hbrBackground = (HBRUSH) COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = L"myWindowClass";
    wc.lpfnWndProc = WindowProcedure;


    if(!RegisterClassW(&wc)){
        return -1;
        cout << "Register window failed!" << endl;
    } else cout << "Register successfully!\n" << endl;

    CreateWindowW(L"myWindowClass", L"Asadbek", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 500,500,
                  NULL, NULL, NULL, NULL);

     MSG msg = {0};

     while(GetMessage(&msg, NULL, NULL, NULL))
     {
         TranslateMessage(&msg);
         DispatchMessage(&msg);
     }

    system("pause");
    return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
    switch(msg){
   case WM_COMMAND:
    switch(wp)
    {
    case: FILE_MENU_EXIT:
        DestroyWindow(hWnd);
        break;
    case: FILE_MENU_NEW:
        MessageBeep(MB_ICONINFORMATION);
        break;
    }
    break;
    case: WM_CREATE: AddMenus(hWnd); AddControls();
    break;
       case WM_DESTROY: PostQuitMessage(0); break;
       default: return DefWindowProcW(hWnd, msg, wp, lp); break;
    }
}

void AddMenus(HWND hWnd)
{
    hMenu = CreateMenu();
    HMENU hFileMenu = CreateMenu();
    HMENU hSubMenu = CreateMenu();

    AppendMenu(hSubMenu, MF_STRING, NULL, "Submenu Item");

    AppendMenu(hFileMenu, MF_STRING, FILE_MENU_NEW, "New");
    AppendMenu(hFileMenu, MF_POPUP, (UINT_PTR) hSubMenu, "Open Submenu");
    AppendMenu(hFileMenu, MF_SEPARATOR, NULL, NULL);
    AppendMenu(hFileMenu, MF_STRING, FILE_MENU_EXIT, "Exit");

    AppendMenu(hMenu, MF_POPUP, (UINT_PTR) hFileMenu, "File");
    AppendMenu(hMenu, MF_STRING, NULL, "Help");

    SetMenu(hWnd, hMenu);
}

void AddControls()
{

}
