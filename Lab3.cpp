#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale (LC_ALL, "ru");
    std::string text;
    std::cout << "Введите текст: " << endl;
    getline(cin, text);
    int texts = text.size();
    
    char simbeng[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    int counteng[26] = {0};
    
     for (int i = 0; i < texts; i++)
        for (int j = 0; j < 26; j++)
            if (tolower(text[i]) == simbeng[j])
                counteng[j] += 1;
        
    for (int k = 0; k < 26; k++)
        if (counteng[k] > 0)
        {
            cout << simbeng[k] << "=" << counteng[k] << endl;
        };
    return 0;
}    
