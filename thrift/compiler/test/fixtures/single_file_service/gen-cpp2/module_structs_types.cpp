/**
 * Autogenerated by Thrift for src/module_structs.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/single_file_service/gen-cpp2/module_structs_types.h"
#include "thrift/compiler/test/fixtures/single_file_service/gen-cpp2/module_structs_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/single_file_service/gen-cpp2/module_structs_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Foo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Foo>;
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


Foo::Foo(apache::thrift::FragileConstructor, ::std::int32_t value__arg) :
    __fbthrift_field_value(std::move(value__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void Foo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_value = ::std::int32_t();
  __isset = {};
}

void Foo::__fbthrift_clear_terse_fields() {
}

bool Foo::__fbthrift_is_empty() const {
  return !(this->__isset.get(0));
}

bool Foo::operator==(FOLLY_MAYBE_UNUSED const Foo& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.value_ref() == rhs.value_ref())) {
    return false;
  }
  return true;
}

bool Foo::operator<(FOLLY_MAYBE_UNUSED const Foo& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.value_ref() == rhs.value_ref())) {
    return lhs.value_ref() < rhs.value_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED Foo& a, FOLLY_MAYBE_UNUSED Foo& b) {
  using ::std::swap;
  swap(a.value_ref().value_unchecked(), b.value_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
