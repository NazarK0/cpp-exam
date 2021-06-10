#include <iostream>
#include "airport.hpp"
#include "aircraft.hpp"
#include "flight.hpp"

using namespace std;

Flight::Flight()
// :_aircraft(), _airport_from(), _airport_to()
{
  _aircraft = new Aircraft();
  _airport_from = new Airport();
  _airport_to = new Airport();
}

Flight::Flight(
    const Aircraft &aircraft,
    const Airport &from,
    const Airport &to)
    // _aircraft(aircraft), _airport_from(from), _airport_to(to)
{
  _aircraft = new Aircraft(aircraft);
  _airport_from = new Airport(from);
  _airport_to = new Airport(to);
}

//акцессори
const Aircraft Flight::getAircraft() { return *_aircraft; }
const Airport Flight::getAirportFrom() const { return *_airport_from; }
const Airport Flight::getAirportTo() const { return *_airport_to; }

// void Flight::setAircraft(const Aircraft &aircraft) { 
//   _aircraft->setManufacturer(aircraft.getManufacturer());
//   _aircraft->setModel(aircraft.getModel());
//   _aircraft->setYearOfProduction(aircraft.setYearOfProduction());
//   };
// void Flight::setAirportFrom(const Airport &airport) { _airport_from = new Airport(airport); }
// void Flight::setAirportTo(const Airport &airport) { _airport_to = new Airport(airport); }

ostream &operator<<(ostream &out, const Flight &flight)
{
  return out << "Дані про політ:" << endl
             << *flight._aircraft << "Відправляється з:" << endl
             << *flight._airport_from << "Прямує до:" << *flight._airport_to;
}

Flight::~Flight()
{
  delete _aircraft;
  delete _airport_from;
  delete _airport_to;
}
