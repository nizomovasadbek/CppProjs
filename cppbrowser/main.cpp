#include <stdio.h>
#include <stdlib.h>
#include <fstream>

int main()
{
    char url[100] = "https://google.com";

    std::fstream fs;
    fs.open(url);
    fs.close();

    return 0;
}
