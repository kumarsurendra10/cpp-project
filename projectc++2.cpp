#include <iostream>
#include <string>
#include <vector>

struct TravelData {
    int age;
    int professionID;
    double budget;
};

int main() {
    std::cout << "Welcome to Bon Voyage, the best trip recommender for travel enthusiasts!" << std::endl;

    std::string name;
    int age, professionID;
    double budget;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    std::cout << "Please enter your profession ID: ";
    std::cin >> professionID;

    std::cout << "Please enter your budget (in USD): ";
    std::cin >> budget;

    // Define and populate a dataset
    std::vector<TravelData> dataset = {
            // Age, Profession ID, Budget
            {35, 1, 600.0}, {28, 2, 500.0}, {45, 3, 700.0}, {29, 4, 1000.0}, {26, 5, 200.0},
            {42, 6, 800.0}, {33, 7, 1200.0}, {25, 8, 600.0}, {31, 9, 200.0}, {39, 10, 800.0},
            {27, 11, 500.0}, {36, 12, 100.0}, {29, 13, 1200.0}, {48, 14, 700.0}, {26, 15, 400.0},
            {32, 16, 150.0}, {30, 17, 400.0}, {28, 18, 700.0}, {35, 19, 150.0}, {45, 20, 800.0},
            {27, 21, 100.0}, {32, 22, 600.0}, {29, 23, 80.0}, {40, 24, 500.0}, {24, 25, 100.0},
            {34, 26, 800.0}, {31, 27, 150.0}, {30, 28, 500.0}, {45, 29, 150.0}, {25, 30, 300.0},
            {28, 31, 500.0}, {33, 32, 50.0}, {20, 33, 600.0}, {37, 34, 100.0}, {42, 35, 800.0},
            {31, 36, 120.0}, {27, 37, 400.0}, {38, 38, 75.0}, {25, 39, 600.0}, {33, 40, 150.0},
            {28, 41, 900.0}, {45, 42, 800.0}, {30, 43, 700.0}, {55, 44, 100.0}, {27, 45, 600.0},
            {41, 46, 500.0}, {29, 47, 50.0}, {24, 48, 150.0}, {31, 49, 700.0}, {31, 50, 300.0},
            {25, 51, 100.0}, {27, 52, 200.0}, {28, 53, 800.0}, {30, 54, 150.0}, {23, 55, 50.0},
            {35, 56, 200.0}, {29, 57, 800.0}, {27, 58, 150.0}, {26, 59, 500.0}, {33, 60, 150.0},
            // More data...
    };

    // Define variables for minimum and maximum values in the dataset
    int minAge = dataset[0].age, maxAge = dataset[0].age;
    int minProfessionID = dataset[0].professionID;
    double minBudget = dataset[0].budget, maxBudget = dataset[0].budget;

    for (const auto &data : dataset) {
        if (data.age < minAge) minAge = data.age;
        if (data.age > maxAge) maxAge = data.age;
        if (data.professionID < minProfessionID) minProfessionID = data.professionID;
        if (data.budget < minBudget) minBudget = data.budget;
        if (data.budget > maxBudget) maxBudget = data.budget;
    }

    // Calculate the recommendation score
    double recommendationScore = 0.5 * (static_cast<double>(age - minAge) / (maxAge - minAge))
                                 + 0.3 * (static_cast<double>(professionID - minProfessionID))
                                 + 0.2 * ((budget - minBudget) / (maxBudget - minBudget));

    // Display the recommendation score
    std::cout << "Recommendation Score for " << name << ": " << recommendationScore << std::endl;

    return 0;
}