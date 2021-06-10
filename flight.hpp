#ifndef EXAMDB_FLIGHT_H
#define EXAMDB_FLIGHT_H

#include <iostream>
#include "airport.hpp"
#include "aircraft.hpp"

class Flight
{
private:
  Aircraft* _aircraft = nullptr;
  Airport* _airport_from = nullptr;
  Airport* _airport_to = nullptr;

public:
  //конструктори
  Flight();
  Flight(
      const Aircraft &aircraft,
      const Airport &from,
      const Airport &to);

  //акцессори
  const Aircraft getAircraft();
  const Airport getAirportFrom() const;
  const Airport getAirportTo() const;

  void setAircraft(const Aircraft &aircraft);
  void setAirportFrom(const Airport &airport);
  void setAirportTo(const Airport &airport);

  friend std::ostream &operator<<(std::ostream &out, const Flight &flight);
  
  ~Flight();
};
#endif