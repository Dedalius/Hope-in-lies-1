#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <windows.h>
#include <random>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <clocale>

#define int int64_t
using namespace std;
#define wait Sleep

int admin = 0;

string passcode = "3498";

#define clr system("cls")



ifstream fin_day_2;
ofstream fout_day_2;


random_device rd_day_1;
mt19937 gen_day_1(rd_day_1());

enum ConsoleColor
{
    Black         = 0,
    Blue          = 1,
    Green         = 2,
    Cyan          = 3,
    Red           = 4,
    Magenta       = 5,
    Brown         = 6,
    LightGray     = 7,
    DarkGray      = 8,
    LightBlue     = 9,
    LightGreen    = 10,
    LightCyan     = 11,
    LightRed      = 12,
    LightMagenta  = 13,
    Yellow        = 14,
    White         = 15
};
void SetColor(int text, int background);
void SetColor(int text, ConsoleColor/*int*/ background);
void print(string s, int tm)
{
    //SetColor(0, 15);
    for(int i = 0; i < s.size(); i++)
    {
        cout << char(s[i]);
        wait(tm);
    }
    wait(500);
}
void print_col(int x, int n);
void print_logo();
void load(int x);
void password();
void print1(string x);
void crash(int x);
int saves();
void update_save();
void titr();
void interactive_day_2();
string input(string x);
string input(string x, string y);
string input(string x, string y, string z);
void eye_logo();
void browser_logo();
void browser(bool error);
void porthack();
int32_t main()
{
    SetConsoleCP(1251); // ���� � ������� � ��������� 1251
    SetConsoleOutputCP(1251);
    setlocale(0, "Rus");

    PlaySound(TEXT("1.wav"), NULL, SND_ASYNC);
    HWND hWnd = GetForegroundWindow();
    ShowWindow(hWnd, 3);
//    eye_logo();
//    wait(1000);
//    print("������������� ������������", 60);
//    print("...........", 200);
//    cout << endl;
//    print("����������� � ������-������� HEREIM �� ��������� htttttttttttttttps.......\n", 60);
//    print("����������� ���������\n", 60);
//    print("������������� ������������:", 60);
//    print("hwid17ggh.", 100);
//    cout << endl;
//    print("DNA:###################################CE480.�", 100);
//    cout << endl;
//    wait(2000);
//    clr;
//    wait(1000);
//    clr;
//    wait(1000);
//    print("��� ����� ������� �������� ����� � ���� ����. ����� ������� ��� ��� ���������� ��������� �������� ������� � ��������������.\n", 60);
//    print("�� ������, ����������� � ���� ����������� ��������. ��� ������� ��� ���������, �� ���������� �� �� ��������������� ���, ��� ������.\n", 60);
//    print("������� ����� ������ �� ���������. ������, ���-�� ��� ���������, '������� ������� �� ��� �����������?'\n", 60);
//    print("���� ����������� ������� ������ �������� �����, ��� �������� ���������, ��������� ���� H.O.P.E.\n", 60);
//    wait(4000);
//    clr;
//    print("H.O.P.E.: �� ����������� � ����� ���������, ����� ���������� ���������������� ���������� � ������ ������� ���\n", 60);
//    print("H.O.P.E.: ������ ����� ��� ������� ��� ������� ���������?\n", 60);
//    print("1.��������� ������������ ���������� \n", 60);
//    print("2.���������� \n", 60);
//    string check = input("1", "2");
//    if(check == "1"){
//            print("����������� �������� ���������� � ����������� ����������.\n", 60);
//        wait(1000);
//        system("Start C:\\Users\\admin\\Desktop\\day_2_1\\privatepolicy.txt");
//    }
//    clr;
//    print("1.� �������� �������\n", 60);
//    print("2.� �� �������� �������\n", 60);
//    cin >> check;
//    print("��������� ���� ���������� ��� ������� ���� ����������� ��������, �� ���� �� ������ ��� ��������� ����� ����� �����������.\n", 60);
//    wait(1000);
//    print(".............\n", 500);
//    print("��� ��������, ��� ����� ������� ��������� ��������. ������ ����� ���� ������, �� ������� ����� �� ������ ��� �� ������ ���\n", 60);
//    print("������� �� ������� �������� �� ������� ����, ��������� ����� � ������� ������������.\n", 60);
//    print("H.O.P.E: ��� �� � �����������, ������ ������ ��� ���������� � �������� ������, ��� �����, ����� �� ��������� ���� ���� ��������.\n", 60);
//    print("H.O.P.E: ������ � ����, ��� ����� ������ ���������� ��������� � ��������� neutral, ����� ���� ��������� free � infiltrator.\n", 60);
//    wait(2000);
//    print("H.O.P.E: ������ ����� ����� ���� �����������: \n", 60);
//    print("-neutral �������� �������� ��������� ���������, � ��� ����� � ���, ������ �� �� ������� ����� � ���� \n", 60);
//    print("-free ����� ������ �������, ������ ��� ������� ������ �� ������� �� ����� ������(���������� �� ����� � ���� ������� ����� ��� �� �������� �� ������� ��������) \n", 60);
//    print("-infiltrator �����, � ������� �� ������ ��������� 95% ������ �������. ������������ ������������ ������. � �������� ������� ���������� ��������� ���������� �� ������ \n", 60);
//    string comp = "infiltrator";
//    wait(5000);
//    print("H.O.P.E: �����������������, ��� �� �� ������ ����� ��������, ������� 'mode/' � �������� ����� '/' ����� � ������� ������ �������(� ������ ������ infiltrator). �������� ������� � ��������� ���� ����� ������, ����������", 60);
//    input("mode/infiltrator");
//    print("H.O.P.E: ��� �, �� ���� �� ������ ������ �� ���� �������� ��� ������, ���������, ��� ����� ������.\n");
//    print("H.O.P.E: ��� ������ ��������� �� ����� ���������� �������(��� �������, � ��� � ���, ��� ���� ���� ���� � ����� ������).\n");
//    print("H.O.P.E: ������ ������� �������� ��������� ��� �������� ����������, ���� �� ��� ��� �� ������� ��� �������� ����� ��������� �� ��� 'deceiver'.\n");
//    input("deceiver");
//    waat(1000);
//    browser_logo();
//    print("H.O.P.E: ��� �� � � ������� �������������� ���, �� ���������� ����� ��������, ������� �� �� ������ ������� �� ���������� � ��� ������. �����, ����� ����������\n", 60);
//    print("H.O.P.E: ��� ������� � ���, ��� ��� ������� ����� �����, �� �� �������� ��� ����������, ������� ������� ������� ������� ��� ��������, � �����, �� �� ������ ���� � ����������\n", 60);
//    print("�� ������� ������ ������ �����-�� �����, ������� ��������� �� �������� ��.\n", 60);
//    print("H.O.P.E: ������ ������� ������� 'home', ����� ��������� �� ������� ��������, � ��������� ��� ��������� ������� �� ����� ����� �������������, � ����� � ����� ���������� ���������.\n", 60);
//    input("home");
//    wait(500);
//    clr;
//    browser(1LL);
//    print("H.O.P.E.: ��, ��� �� � � �������, ����� � ��� ����� ������������ �� �� �������� �������, ���� �� �� � �����, �� �� �������� ��� ������ ���, ��� ������ ��� ��������� '��������� ������'\n", 60);
//    print("H.O.P.E.: �� ������ ����������� ������ �� ������� �������, �... �����... ��������. ����� ����������.\n", 60);
//    print("H.O.P.E.: ������, ������� ����������� � ������ �� ��������(�� ���� �� ����� ����������)�������� �������������, ����� ������ ������ �� �������� ����� ����, ���� � ���� � ��� �� ������ ������ ��� �����.\n", 60);
//    print("H.O.P.E.: ��� ����� ������ ������� ��� ��������, ����� ��� �� ��������� ��� ����� ���������, ��� ���. 'easyinfo'.", 60);
//    input("easyinfo");
//    print("������ ���������.\n", 60);
//    print("H.O.P.E.: ������ ���������� ������������ ��������� 'porthack', ������� ���������� ��� ���������(������ ������������ ���������, ��� ��� �� ��� ����������).\n", 60);
//    input("porthack");
//    wait(1000);
//    clr;
//    porthack();
//    wait(1000);
//    clr;
//    print("administrator access is obtained.\n", 60);
//    wait(1000);
    print("H.O.P.E.: �� ����������� � ����� ������� �������� ����������, ����� ������, ��� �� ������ ��������� ��������� ������, ������ � ������������ ���� �������.\n", 60);
    print("H.O.P.E.: ������ ����� ��� ���������, ��� ������ ��������� ���������� �� ����� ��������, ������ ��������� ����� ������� � ������������ ���� ��a�����", 60);
    string com;
    string s = "home";
    cin >> com;
    while(1)
    {
        cin >> com;
        if(com == "home")
        {
            print("H.O.P.E.: ����������, �� ������� �������� ��������, ������ �� ������ ������� ����� ����, ���� �� �� ������ ���� ������, ���� ����� ������ ��� �� ���������.\n", 60);
            print("H.O.P.E.: �������� ��� ����� ��������� ����� ���������� �����.\n", 60);
            wait(1000);
            clr;
            cout << "report.txt" << endl;
            cout << "games.exe" << endl;
            cout << "plan.txt" << endl;
            cout << "work.txt" << endl;
            cout << "top_secret.txt" << endl;
            cout << "open_please.txt" << endl;
            string ans;
            while(1)
            {
                cin >> ans;
                if(ans == "report.txt")
                {
                    fin_day_2.open("report.txt");
                    string s;
                    while(getline(fin_day_2, s))
                    {
                        cout << s;
                    }
                }
                if(ans == "plan.txt")
                {
                    fin_day_2.open("plan.txt");
                    string s;
                    while(getline(fin_day_2, s))
                    {
                        cout << s;

                    }
                }
                if(ans == "work.txt")
                {
                    fin_day_2.open("work.txt");
                    string s;
                    while(getline(fin_day_2, s))
                    {
                        cout << s;
                    }
                }
                if(ans == "top_secret.txt")
                {
                    fin_day_2.open("top_secret.txt");
                    string s;
                    while(getline(fin_day_2, s))
                    {
                        cout << s;
                    }
                }
                if(ans == "open_please.txt")
                {
                    fin_day_2.open("open_please.txt");
                    string s;
                    while(getline(fin_day_2, s))
                    {
                        cout << s;
                    }
                }
            }

//        case "games.exe":
//        case "plan.txt":
//        case "work.txt":
//        case "top_secret.txt":
//        case "not_open.txt":

        }

    }
    update_save();
}








