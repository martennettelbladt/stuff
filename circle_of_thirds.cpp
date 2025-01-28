// Circle of thirds / Mårten Nettelbladt / 2025-01-28

#include <iostream>
#include <string>

int note[24];

int main()
{
    for (int i = 0; i < 24; i++)
    {
        note[i] = int(floor(i * 3.5)) % 12;
        std::cout << note[i] << "\n";
    }
}
