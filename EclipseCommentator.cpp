#include <iostream>
#include <cstdio>
#include <string>



//Funkcja tworz�ca komentarz
std::string MakeComment(std::string text, uint16_t len, char type)
{
    uint16_t text_len;               //Zmienna przechowuj�ca dlugo�� tekstu
    uint16_t markers_len;            //Zmienna przechowuj�ca liczb� znaczk�w
    uint16_t i;                      //Zmienna inkrementacyjna dla p�tli for
    std::string markers;             //Bufor "znaczkowy"
    text_len = text.size();          //Obliczanie d�ugo�ci wprowadzonego tekstu
    markers_len = (len - text_len)/2; //Obliczenie liczby znaczk�w na ka�d� stron�

    for(i=0; i <= markers_len; i++)  //Utworzenie �ancucha z okre�lon� liczb� znaczk�w
    {
             markers += type;
    }

    return markers + text + markers;
}

int main()
{
    std::string comment;
    char marker;
    uint16_t length = 113;
    while(1)
    {
        std::cout << "Prosze wprowadzic komentarz" << std::endl;
        std::getline( std::cin, comment);
        /*std::cout << "Prosze wprowadzic dlugosc komentarza" << std::endl;
        std::cin >> length;*/
        std::cout << "Prosze wprowadzic rodzaj znaku" << std::endl;
        std::cin >> marker;
        std::cout << MakeComment(comment,length,marker) << std::endl;;
        std::cin.clear();
        std::cin.sync();
    }

}

