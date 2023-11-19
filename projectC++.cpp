#include <iostream>
#include <string>
#include <vector>

struct TravelData {
    std::string destination;
    std::string accommodationType;
    double accommodationBudget;
    std::string transportationType;
};

int main() {
    std::cout << "Welcome to Bon Voyage, the best trip recommender for travel enthusiasts!" << std::endl;

    std::string name;
    std::string destination;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Please enter your travel destination: ";
    std::cin.ignore();
    std::getline(std::cin, destination);
    

    // Define and populate a dataset
    std::vector<TravelData> dataset = {
            {"London, UK", "Hotel", 1200.0, "Flight"},
            {"Phuket, Thailand", "Resort", 800.0, "Flight"},
            {"Bali, Indonesia", "Villa", 1000.0, "Flight"},
            {"New York, USA", "Hotel", 2000.0, "Flight"},
            {"Tokyo, Japan", "Airbnb", 700.0, "Train"},
            {"Paris, France", "Hostel", 500.0, "Train"},
            {"Sydney, Australia", "Resort", 900.0, "Flight"},
            {"Rio de Janeiro, Brazil", "Hotel", 1200.0, "Flight"},
            {"Amsterdam, Netherlands", "Airbnb", 2500.0, "Train"},
            {"Dubai, United Arab Emirates", "Hotel", 1000.0, "Flight"},
            {"Cancun, Mexico", "Resort", 800.0, "Flight"},
            {"Barcelona, Spain", "Hotel", 3000.0, "Train"},
            {"Honolulu, Hawaii", "Airbnb", 1400.0, "Train"},
            {"Berlin, Germany", "Riad", 600.0, "Train"},
            {"Marrakech, Morocco", "Hotel", 900.0, "Train"},
            {"Edinburgh, Scotland", "Hotel", 1500.0, "Flight"},
            {"Rome, Italy", "Hotel", 1200.0, "Flight"},
            {"Bangkok, Thailand", "Resort", 800.0, "Flight"},
            {"Greece", "Hotel", 3000.0, "Flight"},
            {"Egypt", "Hotel", 1400.0, "Flight"},
            {"Canada", "Airbnb", 600.0, "Train"},
            {"Seoul, South Korea", "Hotel", 800.0, "Flight"},
            {"Los Angeles, USA", "Airbnb", 1000.0, "Train"},
            {"Cape Town, South Africa", "Resort", 1500.0, "Flight"},
            {"Vancouver, Canada", "Resort", 2000.0, "Train"},
            {"Auckland, New Zealand", "Hotel", 700.0, "Flight"},
            {"Santorini, Greece", "Resort", 1800.0, "Flight"},
            {"Phnom Penh, Cambodia", "Airbnb", 500.0, "Train"},
            {"Dubrovnik, Croatia", "Hotel", 1300.0, "Flight"},
            {"Machu Picchu, Peru", "Hostel", 800.0, "Flight"},
            {"Venice, Italy", "Hotel", 1000.0, "Flight"},
            {"Cairo, Egypt", "Hotel", 600.0, "Train"},
            {"Prague, Czech Republic", "Airbnb", 700.0, "Train"},
            {"Santorini, Greece", "Resort", 1500.0, "Flight"},
            {"Seychelles", "Resort", 4000.0, "Flight"},
            {"Marrakech, Morocco", "Riad", 1200.0, "Flight"},
            {"Kyoto, Japan", "Hotel", 1100.0, "Train"},
            {"Krakow, Poland", "Airbnb", 600.0, "Train"},
            {"Vienna, Austria", "Hotel", 1400.0, "Flight"},
            {"Mumbai, India", "Airbnb", 800.0, "Train"},
            {"Istanbul, Turkey", "Hotel", 1000.0, "Flight"},
            {"Budapest, Hungary", "Airbnb", 500.0, "Train"},
            {"Cusco, Peru", "Hostel", 700.0, "Flight"},
            {"Zurich, Switzerland", "Hotel", 1500.0, "Flight"},
            {"San Francisco, USA", "Airbnb", 1300.0, "Train"},
            {"Reykjavik, Iceland", "Hotel", 1600.0, "Flight"},
            {"Marrakech, Morocco", "Riad", 800.0, "Train"},
            {"Amsterdam, Netherlands", "Airbnb", 1100.0, "Train"},
            {"Lima, Peru", "Hostel", 900.0, "Flight"},
            {"Stockholm, Sweden", "Hotel", 1200.0, "Flight"},
            {"Prague, Czech Republic", "Airbnb", 700.0, "Train"},
            {"Vienna, Austria", "Hotel", 1400.0, "Flight"},
            {"Mumbai, India", "Airbnb", 800.0, "Train"},
            {"Istanbul, Turkey", "Hotel", 1000.0, "Flight"},
            {"Budapest, Hungary", "Airbnb", 500.0, "Train"},
            {"Cusco, Peru", "Hostel", 700.0, "Flight"},
            {"Zurich, Switzerland", "Hotel", 1500.0, "Flight"},
            {"San Francisco, USA", "Airbnb", 1300.0, "Train"},
            {"Reykjavik, Iceland", "Hotel", 1600.0, "Flight"},
            {"Marrakech, Morocco", "Riad", 800.0, "Train"},
            {"Amsterdam, Netherlands", "Airbnb", 1100.0, "Train"},
            {"Lima, Peru", "Hostel", 900.0, "Flight"},
            {"Stockholm, Sweden", "Hotel", 1200.0, "Flight"},
            {"Madrid, Spain", "Airbnb", 700.0, "Train"},
            {"Dublin, Ireland", "Hotel", 1400.0, "Flight"},
            {"Vienna, Austria", "Airbnb", 800.0, "Train"},
            {"Copenhagen, Denmark", "Hotel", 1000.0, "Flight"},
            {"Budapest, Hungary", "Resort", 1500.0, "Train"},
            {"Prague, Czech Republic", "Hotel", 1600.0, "Flight"},
            {"Athens, Greece", "Airbnb", 700.0, "Train"},
            {"Krakow, Poland", "Hostel", 900.0, "Flight"},
            {"Lisbon, Portugal", "Hotel", 1100.0, "Flight"},
            {"Brussels, Belgium", "Airbnb", 700.0, "Train"},
            {"Kuala Lumpur, Malaysia", "Hotel", 1300.0, "Flight"},
            {"Warsaw, Poland", "Resort", 1800.0, "Train"},
            {"Brisbane, Australia", "Hotel", 1400.0, "Flight"},
            {"Porto, Portugal", "Airbnb", 700.0, "Train"},
            {"Hanoi, Vietnam", "Hostel", 800.0, "Flight"},
            {"Bucharest, Romania", "Hotel", 1200.0, "Flight"},
            {"Taipei, Taiwan", "Airbnb", 800.0, "Train"},
            {"Ljubljana, Slovenia", "Hostel", 900.0, "Train"},
            {"Sofia, Bulgaria", "Hotel", 1000.0, "Flight"},
            {"Riga, Latvia", "Airbnb", 600.0, "Train"},
            {"Tallinn, Estonia", "Hostel", 700.0, "Train"},
            {"Vilnius, Lithuania", "Hotel", 1100.0, "Flight"},
            {"Zagreb, Croatia", "Airbnb", 700.0, "Train"},
            {"Belgrade, Serbia", "Hotel", 1400.0, "Flight"},
            {"Prishtina, Kosovo", "Hostel", 800.0, "Train"},
            {"Sarajevo, Bosnia and Herzegovina", "Resort", 1300.0, "Train"},
            {"Podgorica, Montenegro", "Hotel", 1600.0, "Flight"},
            {"Skopje, North Macedonia", "Airbnb", 700.0, "Train"},
            {"Tirana, Albania", "Hostel", 900.0, "Train"},
            {"Chisinau, Moldova", "Hotel", 1000.0, "Flight"},
            {"Tbilisi, Georgia", "Resort", 1200.0, "Train"},
            {"Yerevan, Armenia", "Airbnb", 600.0, "Train"},
            {"Baku, Azerbaijan", "Hotel", 800.0, "Train"},
            {"Ashgabat, Turkmenistan", "Hostel", 1100.0, "Flight"},
            {"Dushanbe, Tajikistan", "Hotel", 700.0, "Train"},
            {"Bishkek, Kyrgyzstan", "Airbnb", 1400.0, "Train"},
            {"Tashkent, Uzbekistan", "Resort", 1200.0, "Flight"},
            {"Nur-Sultan, Kazakhstan", "Hotel", 900.0, "Train"},
            {"Astana, Kazakhstan", "Airbnb", 1300.0, "Train"},
            {"Ulaanbaatar, Mongolia", "Hostel", 1600.0, "Flight"},
            {"Yerevan, Armenia", "Airbnb", 700.0, "Train"},
            {"Baku, Azerbaijan", "Hotel", 800.0, "Train"},
            {"Ashgabat, Turkmenistan", "Hostel", 1100.0, "Flight"},
            {"Dushanbe, Tajikistan", "Hotel", 700.0, "Train"},
            {"Bishkek, Kyrgyzstan", "Airbnb", 1400.0, "Train"},
            {"Tashkent, Uzbekistan", "Resort", 1200.0, "Flight"},
            {"Nur-Sultan, Kazakhstan", "Hotel", 900.0, "Train"},
            {"Astana, Kazakhstan", "Airbnb", 1300.0, "Train"},
            {"Ulaanbaatar, Mongolia", "Hostel", 1600.0, "Flight"},
            {"Ashgabat, Turkmenistan", "Hotel", 700.0, "Train"},
            {"Dushanbe, Tajikistan", "Airbnb", 800.0, "Train"},
            {"Bishkek, Kyrgyzstan", "Hostel", 900.0, "Flight"},
            {"Tashkent, Uzbekistan", "Hotel", 1000.0, "Flight"},
            {"Nur-Sultan, Kazakhstan", "Resort", 1300.0, "Train"},
            {"Astana, Kazakhstan", "Airbnb", 1800.0, "Train"},
            {"Ulaanbaatar, Mongolia", "Hotel", 1400.0, "Flight"},
            {"Yerevan, Armenia", "Airbnb", 700.0, "Train"},
             
            {"Ashgabat, Turkmenistan", "Hotel", 1000.0, "Flight"},
            {"Dushanbe, Tajikistan", "Resort", 1200.0, "Train"},
            {"Bishkek, Kyrgyzstan", "Airbnb", 800.0, "Train"},
            {"Tashkent, Uzbekistan", "Hotel", 1100.0, "Flight"},
            {"Nur-Sultan, Kazakhstan", "Hostel", 700.0, "Train"},
            {"Astana, Kazakhstan", "Hotel", 1300.0, "Train"},
            {"Ulaanbaatar, Mongolia", "Resort", 1600.0, "Flight"},
            // Add more data...
    };

    // Find recommendations based on the destination
    bool found = false;
    for (const auto &data : dataset) {
        if (data.destination == destination) {
            std::cout << "Recommendations for " << name << " traveling to " << destination << ":" << std::endl;
            std::cout << "Accommodation: " << data.accommodationType << std::endl;
            std::cout << "Accommodation Budget: $" << data.accommodationBudget << std::endl;
            std::cout << "Mode of Transport: " << data.transportationType << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Sorry, we couldn't find recommendations for your destination. Please enter a valid destination." << std::endl;
    
        return 0;
    }
}