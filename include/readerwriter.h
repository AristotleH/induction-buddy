#pragma once

#include <string>
#include <vector>

/**
 * Handles reading and writing to files and databases.
 */
class ReaderWriter {
public:
  ReaderWriter();

private:
  /**
   * Reads data from a CSV and places that data into a nested vector. Performs
   * zero data processing.
   */
  std::vector<std::vector<std::string>> readCSV(std::string filepath);

  /**
   * Writes data to a CSV from a nested vector. Performs zero data processing.
   */
  void writeCSV(std::string filepath,
                std::vector<std::vector<std::string>> data);
};
