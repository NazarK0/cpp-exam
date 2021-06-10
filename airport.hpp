#ifndef EXAMDB_AIRPORT_H
#define EXAMDB_AIRPORT_H

#include <iostream>
#include<string>

class Airport
{
private:
  std::string _name;
  std::string _address;

public:
  Airport();
  Airport(const std::string &name, const std::string &address);
  Airport(const Airport &old);

  const std::string &getName() const;
  const std::string &getAddress() const;

  void setName(const std::string &name);
  void setAddress(const std::string &address);

  friend std::ostream &operator<<(std::ostream &out, const Airport &airport);
};
#endif