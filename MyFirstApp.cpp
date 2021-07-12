// MyFirstApp.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
int main()
{   
    //Reversing Numbers
    /*
    int number, reversedNumber=0;
    cout << "Number: ";
    cin >> number;
    while (number!=0) {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }
    cout << "Reversed: " << reversedNumber;
    */
    //While Part 2
    /*
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0) {
        cout << "You have entered 0." << endl;
    }
    else {
        if (number < 0) {
            number = -1 * number;
        }
        int counter = 0;
        while (number > 0) {
            number /= 10;
            counter++;
        }
        cout << "Number contains: " << counter << " digits" << endl;
    }
    */
    //While Part 1
    /*
    int counter = 100;
    while (counter<=500) {
        if (counter % 3 == 0 && counter % 5 == 0) {
            cout << counter << " Is Divisible" << endl;
        }
        counter++;

    }
    */
    //Switch Case part 2
    /*
    int year, month;
    cout << "Year, month: ";
    cin >> year >> month;
    switch (month)
    {
    
    case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        cout << "29 days month." : cout << "28 days month."; break;
    case 4:
    case 6:
    case 9:
    case 11:cout << "30 days month."; break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:cout << "31 days month."; break;
    default:cout << "Enter a valid month number!.";
    }
    */
    //Switch Case part 1 + Calculator
    /*
    float num1, num2;
    char operation;
    cout << "**OsGugu calculator**" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
    case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum1Int) {
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        }
        else {
            cout << "Not valid!";
        }break;
    default:cout << "Not valid number!" << endl;

        */
    //Ternary operator
    /*
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNum;


    (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";

    if (hostUserNum == guestUserNum) {
        cout << "Correct!";
    }
    else {
        cout << "Wrong!";
    }
    */
    //BMI Calculator
    /*
    float weight, height, bmi;
    cout << "Weight(kg),  height(m): ";
    cin >> weight >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (bmi > 25) {
        cout << "Overweight" << endl;
    }
    else {
        cout << "Normal weight" << endl;
    }

    
    cout << "Your BMI is: " << bmi;
    */
    
    //Swapping Values whitout third variable
    /*
    int a = 12;
    int b = 14;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b;
    */
    //Some operators
    /*
    int counter2 = 7;
    cout << ++counter2 << endl;
    cout << counter2-- << endl;
    cout << counter2 << endl;
    */
    //Nested if/else
    /*
    float a, b, c;
    cout << "Enter three values: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Equilateral triangle";
    }
    else if (a != b && a != c && b != c) {
        cout << "Scalene triangle";
    }
    else {
        cout << "Isosceles triangle";
    }
    */
    //if/else
    /*
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (number % 2 == 0) {
        cout << "You have entered even number." << endl;
    }
    else {
        cout << "You have entered odd number." << endl; 
    }
    */
    //Ciphering words into ASCII
    /*
    char c1, c2, c3, c4, c5;

    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
    cout << "ASCII message: " << char(c1) << " " << char(c2) << " " << char(c3) << " " << char(c4) << " " << char(c5);
    */

    //Basics
    /*cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(65) << endl;
    */
    system("pause>0");
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
