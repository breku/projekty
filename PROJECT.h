#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>
#include "algorithm"

#ifndef PROJECT_H
#define PROJECT_H
using namespace std;

class PROJECT
{
public:
//---------------Metody-----------------------------
    int switch_project(int &wybor);
    void add_project();
    void delete_project();
    void show_project();
    void save_quit();
    void load();
    void gotoxy(int x, int y);
    void set_color_default();
    void set_color_hit();
    int read();
    list<string> readFile(string fileName);

//----------------Zmienne----------------------------
    string project_name;
    string project_description;
    string project_deadline;
    string STRING; // pomocniczny string
    list <string> projects_names;
    list <string> projects_descriptions;
    list <string> projects_deadlines;
    int j = 1; //mnoznik
    int n =1; // ilosc danych
protected:
private:
};

#endif // PROJECT_H