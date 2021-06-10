#ifndef EXAMDB_AIRCRAFT_H
#define EXAMDB_AIRCRAFT_H

#include <iostream>
#include <string>

class Aircraft
{
private:
  std::string _manufacturer;
  std::string _model;
  int _year_of_production;

public:
  Aircraft();
  Aircraft(const std::string manufacturer, const std::string model, const int year);
  Aircraft(const Aircraft &old);

  const std::string &getManufacturer() const;
  const std::string &getModel() const;
  const int getYearOfProduction() const;

  void setManufacturer(const std::string &manufacturer);
  void setModel(const std::string &model);
  void setYearOfProduction(const int year);

  friend std::ostream &operator<<(std::ostream &out, const Aircraft &aircraft);
};
#endif