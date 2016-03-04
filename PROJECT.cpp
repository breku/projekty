#include "PROJECT.h"
#include "FileReader.h"

//------------------ WYBOR MODULU -------------------

#define FILENAME "/home/brekol/workspace/c++/putin/file-io/plik.txt"

int PROJECT::switch_project(int &wybor) {
    switch (wybor) {
        case 1:
            show_project();
            break;
        case 2:
            add_project();
            break;
        case 3:
            delete_project();
            break;
        case 5:
            load();
            break;
        default:
            cout << "Podaj wartosc z zakresu" << endl;
            break;
    }

}


void PROJECT::add_project() {
    cout << "Podaj nazwe projektu" << endl;
    cin >> project_name;
    projects_names.push_back(project_name);
    cout << "Podaj opis projektu" << endl;
    cin >> project_description;
    projects_descriptions.push_back(project_description);
    cout << "Podaj deadline" << endl;
    cin >> project_deadline;
    projects_deadlines.push_back(project_deadline);
    n + 1;

}

void PROJECT::save_quit() {
    fstream plik(FILENAME, ios::out);
    if (plik.good()) {

        list<string>::iterator itNames = projects_names.begin();
        list<string>::iterator itDesc = projects_descriptions.begin();
        list<string>::iterator itDeadlines = projects_deadlines.begin();


        for (; itNames != projects_names.end() && itDesc != projects_descriptions.end() &&
               itDeadlines != projects_deadlines.end(); itNames++, itDesc++, itDeadlines++) {
            plik << *itNames << "|" << *itDesc << "|" << *itDeadlines << endl;

        }
        plik.close();
    }

}

std::vector<std::string> split(const std::string &text, char sep) {
    std::vector<std::string> tokens;
    std::size_t start = 0, end = 0;
    while ((end = text.find(sep, start)) != std::string::npos) {
        tokens.push_back(text.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(text.substr(start));
    return tokens;
}

void PROJECT::load() {
    FileReader fileReader;
    list<string> fileLines = fileReader.readFile(FILENAME);
    for (string &line: fileLines) {
        vector<string> splittedLine = split(line,'|');
        projects_names.push_back(splittedLine[0]);
        projects_descriptions.push_back(splittedLine[1]);
        projects_deadlines.push_back(splittedLine[2]);
    }

}


void PROJECT::delete_project() {
    cout << "Ktory wpis chcesz usunac?" << endl;
}

void PROJECT::show_project() {
    fstream plik(FILENAME, ios::out);
//    system("clear");
    set_color_default();
//SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY ) ;
//WYSWIETL OPISY
    gotoxy(10, 1);
    cout << "Nazwa projektu";
    gotoxy(30, 1);
    cout << "Opis projektu";
    gotoxy(50, 1);
    cout << "Deadline projektu";
    cout << endl;
    set_color_hit();

    j = 1;
    for (list<string>::iterator i = projects_names.begin(); i != projects_names.end(); ++i, j++) {
        gotoxy(10, (2 * j));
        cout << *i;
    }
    j = 1;
    for (list<string>::iterator i = projects_descriptions.begin(); i != projects_descriptions.end(); ++i, j++) {
        gotoxy(30, (2 * j));
        cout << *i;
    }
    j = 1;
    for (list<string>::iterator i = projects_deadlines.begin(); i != projects_deadlines.end(); ++i, j++) {
        gotoxy(50, (2 * j));
        cout << *i;
    }


//for (int i =1; i <= n; i++) {
    //gotoxy(10,(2*i));
    // gotoxy(30,(2*i)); cout<<project_description;
    //gotoxy(50,(2*i)); cout<<project_deadline;


//gotoxy(10,3);  cout<<project_name;
//gotoxy(30,3); cout<<project_description;
//gotoxy(50,3); cout<<project_deadline;
    cout << endl;


}

void PROJECT::set_color_default() {
}

void PROJECT::gotoxy(int x, int y) {

}

void PROJECT::set_color_hit() {
}

int read() {
    FileReader fileReader;
    list<string> fileLines = fileReader.readFile("/home/brekol/workspace/c++/putin/file-io/plik.txt");
    for (string &line: fileLines) {
        cout << line << endl;
    }
    return 0;
}
