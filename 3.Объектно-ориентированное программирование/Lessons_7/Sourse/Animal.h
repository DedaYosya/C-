#pragma once
#include <iostream>
using namespace std;

// ������� ����� � ����������
class Animal {
public:
    string name;
    int age;
    bool isAngry;
    // ��������� ������������
    Animal(string name, int age, bool isAngry);
    Animal(string name, int age);
    Animal();
    // ��������� ������(�������)
    void print();
    void voise();
    void printAge();
};