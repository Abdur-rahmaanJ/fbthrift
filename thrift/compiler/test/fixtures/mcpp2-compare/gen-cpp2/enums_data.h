/**
 * Autogenerated by Thrift for src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::facebook::ns::qwerty::AnEnumA> {
  using type = ::facebook::ns::qwerty::AnEnumA;
  static constexpr const std::size_t size = 1;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::facebook::ns::qwerty::AnEnumB> {
  using type = ::facebook::ns::qwerty::AnEnumB;
  static constexpr const std::size_t size = 2;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::facebook::ns::qwerty::AnEnumC> {
  using type = ::facebook::ns::qwerty::AnEnumC;
  static constexpr const std::size_t size = 1;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::facebook::ns::qwerty::AnEnumD> {
  using type = ::facebook::ns::qwerty::AnEnumD;
  static constexpr const std::size_t size = 1;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::facebook::ns::qwerty::AnEnumE> {
  using type = ::facebook::ns::qwerty::AnEnumE;
  static constexpr const std::size_t size = 1;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TStructDataStorage<::facebook::ns::qwerty::SomeStruct> {
  static constexpr const std::size_t fields_size = 1;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

}} // apache::thrift
