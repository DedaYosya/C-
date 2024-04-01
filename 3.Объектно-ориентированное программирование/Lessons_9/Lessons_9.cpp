// Реализуйте программу для проведения текстовых викторин. 
// После запуска программы пользователь вводит имя, 
// а затем ему по очереди задаются 10 вопросов с 4 вариантами ответа. 
// Чтобы ответить на вопрос, пользователь вводит номер правильного ответа. 
// В конце викторины программа выводит количество баллов, которое набрал пользователь. 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

class Question {
private:
    string text;
    vector<string> answer;
    int correctedID;

public:
    Question(string text, vector<string> answer, int correctedID) {
        this->text = text;
        this->answer = answer;
        this->correctedID = correctedID;
    }//: text(text), answer(answer), correctedID(correctedID) {}

    string getQuestion() const { return text; }

    vector<string> getAnswer() const { return answer; }

    int getCorrectedID() const { return correctedID; }
};

class Quiz {
private:
    vector<Question> questions;
    string username;
    int score;

public:
    Quiz(string name) {
        username = name;

    }//: username(name), score(0) {}

    void addQuestion(Question q) {
        questions.push_back(q);
    }

    void runQuiz() {
        for (const auto& q : questions) {
            cout << q.getQuestion() << endl;
            vector<string> answer = q.getAnswer();
            for (size_t i = 0; i < answer.size(); ++i) {
                cout << i + 1 << ". " << answer[i] << endl;
            }

            int username;
            cout << "Ваш ответ: ";
            cin >> username;

            if (username == q.getCorrectedID() + 1) {
                score++;
            }
        }

        cout << "Викторина завершена! " << username << " ваш результат: " << score << "/" << questions.size() << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string username;
    cout << "Введите ваше имя: ";
    cin >> username;
    system("cls");
    Quiz quiz(username);

    Question q1("Столица Франции?", { "London", "Paris", "Berlin", "Rome" }, 1);
    Question q2("Красная планета?", { "Earth", "Jupiter", "Mars", "Saturn" }, 2);
    

    quiz.addQuestion(q1);
    quiz.addQuestion(q2);
    
    // Запуск викторины
    quiz.runQuiz();

    return 0;
}



//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//#include <Windows.h>
//using namespace std;
//
//class Question {
//public:
//    // Конструктор класса Question
//    Question(string q, vector<string> o, int ca) {
//        text = q;
//        answers = o;
//        correctID = ca;
//    }
//
//    // Метод для получения текста вопроса
//    string getQuestion() {
//        return text;
//    }
//
//    // Метод для получения вариантов ответов
//    vector<string> getOptions() {
//        return answers;
//    }
//
//    // Метод для проверки ответа пользователя
//    bool checkAnswer(int answer) {
//        return (answer == correctID);
//    }
//private:
//    string text;
//    vector<string> answers;
//    int correctID;
//
//};
//// Класс викторины
//class Quiz {
//public:
//    // Конструктор класса Quiz
//    Quiz(vector<Question> q) {
//        questions = q;
//        score = 0;
//    }
//
//    // Метод для проведения викторины
//    void conductQuiz() {
//        string name;
//        int answer;
//        vector<Question>::iterator it;
//        ifstream file("quiz.txt");
//
//        if (!file) {
//            cout << "Не удалось открыть файл quiz.txt" << endl;
//            return;
//        }
//
//        cout << "Введите ваше имя: ";
//        getline(cin, name);
//
//        cout << "Начинаем викторину!" << endl;
//
//        for (it = questions.begin(); it != questions.end(); ++it) {
//            cout << endl << it->getQuestion() << endl;
//            vector<string> options = it->getOptions();
//
//            for (int i = 0; i < options.size(); ++i) {
//                cout << i + 1 << ". " << options[i] << endl;
//            }
//
//            cout << "Введите номер правильного ответа: ";
//            cin >> answer;
//
//            if (it->checkAnswer(answer)) {
//                cout << "Правильно!" << endl;
//                score++;
//            }
//            else {
//                cout << "Неправильно!" << endl;
//            }
//        }
//
//        cout << endl << "Викторина закончена. " << name << ", вы набрали " << score << " баллов." << endl;
//
//        file.close();
//    }
//
//    void runQuiz () {}
//private:
//    vector<Question> questions;
//    string username;
//    int score;
//
//};
//int main() {
//    setlocale(LC_ALL, "Rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    vector<Question> questions;
//    ifstream file("quiz.txt");
//
//    if (!file) {
//        cout << "Не удалось открыть файл quiz.txt" << endl;
//        return 0;
//    }
//
//    string line;
//    string questionText;
//    vector<string> options;
//    int correctAnswer;
//    int optionCount = 0;
//
//    while (getline(file, line)) {
//        if (line.empty()) {
//            continue;
//        }
//
//        if (optionCount == 0) {
//            questionText = line;
//            optionCount++;
//        }
//        else if (optionCount >= 1 && optionCount <= 4) {
//            options.push_back(line);
//            optionCount++;
//        }
//        else {
//            correctAnswer = stoi(line);
//            Question question(questionText, options, correctAnswer);
//            questions.push_back(question);
//            options.clear();
//            optionCount = 0;
//        }
//    }
//
//    file.close();
//
//    Quiz quiz(questions);
//    quiz.conductQuiz();
//    return 0;
//}






//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//class Question {
//    string text;
//    vector<string> answers;
//    int correctID;
//public:
//    Question(string text, vector<string> answers, int correctID) {
//        this->text = text;
//        this->answers = answers;
//        this->correctID = correctID;
//    }
//
//    void print() {
//        cout << text << endl;
//        for (auto str : answers) {
//            cout << str << endl;
//        }
//        cout << "(правильный ответ: " << correctID << ")" << endl;
//        cout << string(50, '_') << endl;
//    }
//};
//int main() {
//    setlocale(LC_ALL, "Rus");
//    ifstream fin("quiz.txt");
//    if (!fin.is_open()) {
//        cout << "Ошибка! Такого файла не существует!" << endl;
//        return -1;
//    }
//
//    string tmp;
//    if (!getline(fin, tmp)) {
//        cout << "Ошибка! Файл пустой!" << endl;
//        return -2;
//    }
//
//    int count_questions = stoi(tmp);
//
//    vector<string> strings;
//    while (getline(fin, tmp)) {
//        strings.push_back(tmp);
//    }
//
//    if (strings.size() != count_questions * 6) {
//        cout << "Ошибка! Неверно составлен файл с вопросами!" << endl;
//        return -3;
//    }
//    vector<Question*> vec;
//    for (int i = 0; i < count_questions; i++) {
//        string text = strings.front();
//        strings.erase(strings.begin());
//        vector<string> answers;
//        for (int j = 0; j < 4; j++) {
//            string answer = strings.front();
//            strings.erase(strings.begin());
//            answers.push_back(answer);
//        }
//        int correctID = stoi(strings.front());
//        strings.erase(strings.begin());
//        vec.push_back(new Question(text, answers, correctID));
//    }
//    for (auto elem : vec) {
//        elem->print();
//    }
//
//}