#pragma once

#include <string>
#include <vector>

class DataLoader {
 private:
  std::vector<DataPoint> data;

 public:
  void load_data(const std::string& data_path) {}

  std::vector<DataPoint>& get_data() { return data; }
};
