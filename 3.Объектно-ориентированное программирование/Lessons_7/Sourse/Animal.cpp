#include "Animal.h"

// ���������� �������
// ������� ����������� 
Animal::Animal(string name, int age, bool isAngry) {
    this->name = name;
    this->age = age;
    this->isAngry = isAngry;
}
// ������� ����������� 
Animal::Animal(string name, int age) {
    this->name = name;
    this->age = age;
}
// ������� ����������� 
Animal::Animal() {}

// ������� ����� 
void Animal::print() {
    cout << "���: " << endl << this->name << endl <<
        "�������: " << endl << this->age << endl;
}
// ������� ����� 
void Animal::voise() {
    cout << "�����" << endl;
}
// ������� ����� 
void Animal::printAge() {
    cout << "�������: " << endl << this->age << endl;
}