/**
 * Autogenerated by Thrift for src/include2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_data.h"

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 2> TStructDataStorage<::some::ns::IncludedB>::fields_names = {{
  "i32Field",
  "strField",
}};
const std::array<int16_t, 2> TStructDataStorage<::some::ns::IncludedB>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::some::ns::IncludedB>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};

} // namespace thrift
} // namespace apache
