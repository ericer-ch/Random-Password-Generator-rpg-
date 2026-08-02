#include <iostream>
#include <string>
#include <random>

std::string generatePassword(int length = 16, bool includeSpecial = true) {
    const std::string lowercase = "abcdefghijklmnopqrstuvwxyz";
    const std::string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string numbers = "0123456789";
    const std::string special = "!@#$%^&*()-_=+[]{}|;:,.<>?";

    std::string chars = lowercase + uppercase + numbers;
    if (includeSpecial) {
        chars += special;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, chars.length() - 1);

    std::string password;
    password.reserve(length);

    for (int i = 0; i < length; ++i) {
        password += chars[distrib(gen)];
    }

    return password;
}

int main() {
    // Generate a 16-character password with special characters
    std::string password = generatePassword(16, true);
    std::cout << password << std::endl;  // Example: aB3$xY7!mN2@pQ9&

    // Generate a 12-character password without special characters
    std::string simplePassword = generatePassword(12, false);
    std::cout << simplePassword << std::endl;  // Example: aB3xY7mN2pQ9

    return 0;
}
