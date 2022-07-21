/**
 * Autogenerated by Thrift for src/reflection.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::ReflectionStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::ReflectionStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {


ReflectionStruct::ReflectionStruct(apache::thrift::FragileConstructor, ::std::int32_t fieldA__arg) :
    __fbthrift_field_fieldA(std::move(fieldA__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void ReflectionStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_fieldA = ::std::int32_t();
  __isset = {};
}

void ReflectionStruct::__fbthrift_clear_terse_fields() {
}

bool ReflectionStruct::__fbthrift_is_empty() const {
  return false;
}

bool ReflectionStruct::operator==(FOLLY_MAYBE_UNUSED const ReflectionStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return false;
  }
  return true;
}

bool ReflectionStruct::operator<(FOLLY_MAYBE_UNUSED const ReflectionStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return lhs.fieldA_ref() < rhs.fieldA_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED ReflectionStruct& a, FOLLY_MAYBE_UNUSED ReflectionStruct& b) {
  using ::std::swap;
  swap(a.fieldA_ref().value(), b.fieldA_ref().value());
  swap(a.__isset, b.__isset);
}

template void ReflectionStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ReflectionStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ReflectionStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ReflectionStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void ReflectionStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t ReflectionStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t ReflectionStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t ReflectionStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
