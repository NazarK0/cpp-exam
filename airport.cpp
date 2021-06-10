#include <iostream>
#include "airport.hpp"

using namespace std;

Airport::Airport()
{
  _name = "unnamed";
  _address = "no address";
};
Airport::Airport(const string &name, const string &address)
{
  _name = name;
  _address = address;
};
Airport::Airport(const Airport &old)
{
  _name = old._name;
  _address = old._address;
};

const string &Airport::getName() const { return _name; }
const string &Airport::getAddress() const { return _address; }

void Airport::setName(const string &name) { _name = name; }
void Airport::setAddress(const string &address) { _address = address; }

ostream &operator<<(ostream &out, const Airport &airport)
{
  return out << "Аеропорт '" << airport._name << "', адреса: " << airport._address << endl;
}