#include "readerwriter.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

ReaderWriter::ReaderWriter() {}

std::vector<std::vector<std::string>>
ReaderWriter::readCSV(std::string filepath) {
  std::ifstream file(filepath);
  std::string line;
  std::vector<std::vector<std::string>> data;

  while (std::getline(file, line)) {
    std::stringstream lineStream(line);
    std::string value;
    std::vector<std::string> lineData;
    while (std::getline(lineStream, value, ',')) {
      lineData.push_back(value);
    }
    data.push_back(lineData);
  }

  return data;
}

void ReaderWriter::writeCSV(std::string filepath,
                            std::vector<std::vector<std::string>> data) {
  std::ofstream file(filepath);
  for (std::vector<std::string> line : data) {
    for (size_t j = 0; j < line.size(); j++) {
      file << line[j];
      if (j < line.size() - 1) {
        file << ",";
      }
    }
    file << "\n";
  }
}
