// job_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Backpack
//{
//private:
//    int amount;
//    double weight;
//    string Host_Name;
//public:
//    void Enter()
//    {
//        cout << "Введите количество предметов, которые можно будет поместить в рюкзак." << endl;
//        cin >> amount;
//        cout << "Теперь введите вес, который сможет содержать в себе рюкзак на весу, не порвавшись." << endl;
//        cin >> weight;
//        cout << "Замечательно. И, наконец, последнее: Введите имя сущетсва, которому вы подарите этот рюкзак." << endl;
//        cin >> Host_Name;
//    }
//
//    void Print()
//    {
//        cout << "Хозяина данного рюкзака зовут " << Host_Name << endl << endl;
//        cout << "Прекрасный рюкзак. " << Host_Name << " очень повезло. Количество вещей, которые он вмещает = " << amount << endl << endl;
//        cout << "А его вес = " << weight << endl << endl;
//    }
//
//    bool Comparison(const Backpack& obj) const
//    {
//        return amount == obj.amount && weight == obj.weight && Host_Name == obj.Host_Name;
//    }
//};
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    Backpack Backpack_1;
//    Backpack Backpack_2;
//
//    cout << "Вы - повелитель рюкзаков. Вы вольны придумать рюкзак, вмещающий любое количество предметов и любой их вес." << endl << endl;
//    Backpack_1.Enter();
//
//    cout << "Вы отлично справились со своей задачей. Хозяин будет очень доволен своим новым приобретением, но не стоит на этом останавливаться. Давайте изготовим второй рюкзак." << endl;
//    system("pause");
//    Backpack_2.Enter();
//    cout << "Теперь вы осчастливили и второго хозяина, оба рюкзака теперь в специальной рюкзачной базе данных. Давайте посмотрим её." << endl;
//    system("pause");
//    Backpack_1.Print();
//    Backpack_2.Print();
//
//    cout << "Пожалуй, ты лучший повелитель рюкзаков из всех, что встречался мне на этой идиотской работе. Давай ещё одно задание и ты окончишь свою стажировку." << endl;
//    cout << "Давай сравним характеристики рюкзаков. Для этого тебе нужно нажать любую кнопку." << endl;
//    system("pause");
//    cout << "Сравнение: " << boolalpha << Backpack_1.Comparison(Backpack_2) << endl;
//    
//}
//#include <iostream>
//using namespace std;
//class B;
//class A {
//private:
//    int v1;
//public:
//    A(int x = 0) :v1(x) {}
//    friend bool operator==(const A& a, const  B& b);
//};
//class B {
//private:
//    int v2;
//public:
//    B(int x = 0) :v2(x) {}
//    friend bool operator==(const A& a, const  B& b);
//
//};
//bool operator==(const A& a, const  B& b) {
//    return a.v1 == b.v2;
//}
//int main() {
//    A a(5);
//    B b(5);
//    if (a == b) {
//        cout << "Equal";
//    }
//    else {
//        cout << "Not yet";
//    }
//    return 0;
//}

