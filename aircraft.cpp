#include <iostream>
#include "aircraft.hpp"

using namespace std;

Aircraft::Aircraft(const string manufacturer, const string model, const int year)
{
  _manufacturer = manufacturer;
  _model = model;
  _year_of_production = year;
};

Aircraft::Aircraft(const Aircraft &old)
{
  _manufacturer = old._manufacturer;
  _model = old._model;
  _year_of_production = old._year_of_production;
};

const string &Aircraft::getManufacturer() const { return _manufacturer; }
const string &Aircraft::getModel() const { return _model; }
const int Aircraft::getYearOfProduction() const { return _year_of_production; }

void Aircraft::setManufacturer(const string &manufacturer) { _manufacturer = manufacturer; }
void Aircraft::setModel(const string &model) { _model = model; }
void Aircraft::setYearOfProduction(const int year) { _year_of_production = year; }

ostream &operator<<(ostream &out, const Aircraft &aircraft)
{
  return out << "Дані про літак:" << endl
             << "виробник: " << aircraft._manufacturer << endl
             << "модель: " << aircraft._model << endl
             << "рік випуску:" << endl;
}