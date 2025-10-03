#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <vector>
#include <list>

using namespace std;

int main() { 

	list<const char*> eki_list = {
        "Tokyo", "Kanda", "Akihabara",
		"Okachimae", "Ueno", "Uguisudani",
		"Nippori", "Tabata",
		"Komagome", "Sugamo", "Otsuka", "Ikebukuro",
        "Mejiro","Takadanobaba","Shin-Okubo","Shinjuku",
        "Yoyogi","Harajuku","Shibuya","Ebisu",
        "Meguro","Gotanda","Osaki","Shinagawa",
        "Tamachi","Hamamatsucho",
        "Shimbashi","Yurakucho",
    };

  printf("\n1970”N\n\n");
    for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
        std::cout << *itr << "\n";
    }

    printf("\n2019”N\n\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
        if (strcmp(*itr, "Nippori") == 0) {
                itr++;
                eki_list.insert(itr, "Nishi-Nippori");
        }
    }
        for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
            std::cout << *itr << "\n";
        }
     
	

     printf("\n2022”N\n\n");
    for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {

        if (strcmp(*itr, "Tamachi") == 0) {
            eki_list.insert(itr, "TakanawaGateway");
            itr++;
        }
    }
    for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
        std::cout << *itr << "\n";
    }

}