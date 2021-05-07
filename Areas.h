
#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::string;
using std::cout;
using std::cin;
using std::endl;


enum Theme {
    Physics,
    Prog,

    LASTTHEME
};

class Question {
public:
    string question_body;
    int question_ans;

    virtual void set_question(){};
    bool get_question() {
        cout << question_body << endl;
        cout << "Выбери 1/2/3/4:\n";

        while (true) {
            string choose;
            cin >> choose;
            try {
                return std::stoi(choose) == question_ans;
            } catch (const std::invalid_argument& e) {
                cout << "ВВЕДИ ЦИФРУ\n";
            }
        }
    }
};

class PhysicsQuestion: public Question {
public:

    virtual void set_question() override {
        question_body = "Сколько эргов в 1 Джоуле?\n10^3\n10^5\n10^7";
        question_ans = 3;
    }
};

class ProgrammingQuestion: public Question {
public:

    virtual void set_question() override {
        question_body = "Как тебе эта программа?\nОна совершенна\nЛучше не видел\nИграю весь день\n";
        question_ans = 2;
    }
};

class Area {
public:
    string name;
    Question *question;
    int number;
    Area(const string theme, int i) {
        number = i;
        std::srand(std::time(nullptr));
        Theme rand_theme = static_cast<Theme>(rand() % LASTTHEME);
        switch (rand_theme) {
            case Physics:
                question = new PhysicsQuestion();
                break;
            case Prog:
                question = new ProgrammingQuestion();
                break;
        }
    }
};
