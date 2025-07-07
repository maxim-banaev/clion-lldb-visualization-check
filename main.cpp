// ReSharper disable CppDFAUnreadVariable
// ReSharper disable CppDeclaratorNeverUsed
// ReSharper disable CppDFAUnusedValue
#include <filesystem>

#include "MyPoint.h"
#include "test/check_associative_containers.h"
#include "test/check_basic_types.h"
#include "test/check_container_adaptors.h"
#include "test/check_custom_types.h"
#include "test/check_iterator.h"
#include "test/check_sequence_containers.h"
#include "test/check_smart_pointers.h"
#include "test/check_unordered_associative_containers.h"

using namespace std;
namespace fs = std::filesystem;

auto main() -> int {
  check_basic_types();
  check_smart_pointers();

#pragma region STL Containers
  // string
  string string_ = "hello string";
  string &string_ref_ = string_;
  string *string_ptr_ = &string_;

  // string view
  constexpr std::string_view string_view_ = "hello string view";

  // tuple
  auto tuple_ = std::make_tuple(1, 'c');

  // pair
  auto pair_ = std::make_pair(5, 6);

  fs::path pathToShow("/usr/bin/clang");

  check_sequence_containers();
  check_associative_containers();
  check_unordered_associative_containers();
  check_container_adaptors();
  check_iterator();
#pragma endregion

  check_custom_types();

  return 0;
}