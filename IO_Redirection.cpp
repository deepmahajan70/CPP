#include <iostream>
#include <cstdio>

int main() {
    int x;
    // Input Redirection, from stdin to a file using File Redirection Open - freopen
    freopen("input.txt", "r", stdin);
    // Now, reading from stdin will read from the file input.txt
    std::cin >> x;
    std::cout << "Read value: " << x << std::endl;
    // Close the file after use
    fclose(stdin);
    freopen("output.txt","w", stdout);
    std::cout << "Read value: " << x+10 << std::endl;
    fclose(stdin);
    return 0;
}
