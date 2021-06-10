#include <iostream>
#include <vector>
#include<numeric>
#include <algorithm>

#include "flight.hpp"
#include "aircraft.hpp"
#include "airport.hpp"

using namespace std;

void runspace()
{
    vector<Flight> flights;
    vector<int> years;

    //aircrafts definitions
    const Aircraft aircraft1 = Aircraft("General Dynamics‎", "MH17", 2010);
    const Aircraft aircraft2 = Aircraft("Lockheed‎", "Lockheed HC-130", 2008);
    const Aircraft aircraft3 = Aircraft("Lockheed‎‎", "Lockheed Martin", 2015);
    
    const Airport airport1 = Airport("Чангі", "Сінгапур");
    const Airport airport2 = Airport("Ханеда", "Японія");
    const Airport airport3 = Airport("Хамад", "Катар");
    const Airport airport4 = Airport("Інчхон", "Підвенна Корея");
    const Airport airport5 = Airport("Наріта", "Японія");
    const Airport airport6 = Airport("Схіпгол", "Нідерланди");

    flights.push_back(Flight(aircraft1, airport1, airport2));
    flights.push_back(Flight(aircraft1, airport5, airport3));
    flights.push_back(Flight(aircraft3, airport2, airport6));
    flights.push_back(Flight(aircraft1, airport4, airport3));
    flights.push_back(Flight(aircraft2, airport2, airport5));
    flights.push_back(Flight(aircraft2, airport1, airport2));

    for (Flight i : flights) { 
        cout << i;
    }

    

    transform(flights.begin(), flights.end(),back_inserter(years), [](Flight flight){
        const Aircraft& aircraft = flight.getAircraft();
        return aircraft.getYearOfProduction();
    } );

    cout << "years:" << endl;
    for (int i : years) { 
        cout << i << " ";
    }

}
