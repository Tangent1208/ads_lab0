#include "learned_index.h"

std::string test_name{};  // 测试名称，不要修改

void LearnedIndex::load_data(const std::string& data_path) {}

std::vector<DataPoint>& LearnedIndex::data() { return data_loader.get_data(); }

void LearnedIndex::train() {}

std::optional<ValueType> LearnedIndex::predict(KeyType key) const {
  return std::nullopt;
}

std::optional<ValueType> LearnedIndex::operator[](KeyType key) const {
  return predict(key);
}
