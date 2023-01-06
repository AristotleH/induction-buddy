#pragma once

#include <string>

/**
 * Represents a single person associated with the UPE organization, from
 * inductee to president.
 */
class Student {
public:
  /**
   * Default constructor for Student. Each Student must have a
   * username and a legal name; the former is from their UCLA login and is used
   * as a unique key.
   */
  Student(std::string username, std::string name);

private:
  std::string _username;
  std::string _name;
};
