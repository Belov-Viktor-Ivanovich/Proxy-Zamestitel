// Урок 04.07.2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
#include<fstream>
#include"LinkedList.cpp"
#include"Proxy.cpp"
#include "LinkedList.h"



int main()
{
    Proxy file1("C:\\Users\\Марина\\Desktop\\Proxy.txt");
    cout << file1.getData(123);
}

