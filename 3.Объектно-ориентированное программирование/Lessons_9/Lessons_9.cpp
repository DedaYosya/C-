// Lessons_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main() {
    std::string name;
    int score = 0;

    std::cout << "Welcome to the Quiz Game!" << std::endl;
    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "! Let's start the quiz." << std::endl;

    // Вопросы и ответы на викторине
    std::string questions[10] = { "Question 1", "Question 2", "Question 3", "Question 4", "Question 5",
                                 "Question 6", "Question 7", "Question 8", "Question 9", "Question 10" };

    std::string options[10][4] = { {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"},
                                  {"1. Option 1", "2. Option 2", "3. Option 3", "4. Option 4"} };

    int correct_answers[10] = { 1, 2, 3, 4, 1, 2, 3, 4, 1, 2 };

    // Задаем пользователю вопросы и проверяем ответы
    for (int i = 0; i < 10; i++) {
        std::cout << std::endl << "Question " << (i + 1) << ": " << questions[i] << std::endl;
        for (int j = 0; j < 4; j++) {
            std::cout << options[i][j] << std::endl;
        }

        int user_answer;
        std::cout << "Enter the correct answer number: ";
        std::cin >> user_answer;

        if (user_answer == correct_answers[i]) {
            score++;
        }
    }

    std::cout << std::endl << "Congratulations, " << name << "! You've completed the quiz." << std::endl;
    std::cout << "Your score is: " << score << "/10" << std::endl;

    return 0;
}