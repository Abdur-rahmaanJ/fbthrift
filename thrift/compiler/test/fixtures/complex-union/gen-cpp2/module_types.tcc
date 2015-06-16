/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/MoveWrapper.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

template <class Protocol_>
uint32_t ComplexUnion::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  xfer += iprot->readFieldBegin(fname, ftype, fid);
  if (ftype == apache::thrift::protocol::T_STOP) {
    this->__clear();
  } else {
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "intValue") {
        fid = 1;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "stringValue") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "intListValue") {
        fid = 3;
        ftype = apache::thrift::protocol::T_LIST;
      }
      else if (fname == "stringListValue") {
        fid = 4;
        ftype = apache::thrift::protocol::T_LIST;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          this->set_intValue();
          xfer += iprot->readI64(this->mutable_intValue());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          this->set_stringValue();
          xfer += iprot->readString(this->mutable_stringValue());
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->set_intListValue();
          this->mutable_intListValue().clear();
          uint32_t _size0;
          apache::thrift::protocol::TType _etype3;
          xfer += iprot->readListBegin(_etype3, _size0);
          uint32_t _i4;
          if (_size0 == std::numeric_limits<uint32_t>::max()) {
            for (_i4 = 0; iprot->peekList(); _i4++) {
              this->mutable_intListValue().resize(_i4 + 1);
              xfer += iprot->readI64(this->mutable_intListValue()[_i4]);
            }
          }
          else {
            this->mutable_intListValue().resize(_size0);
            for (_i4 = 0; _i4 < _size0; ++_i4) {
              xfer += iprot->readI64(this->mutable_intListValue()[_i4]);
            }
          }
          xfer += iprot->readListEnd();
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->set_stringListValue();
          this->mutable_stringListValue().clear();
          uint32_t _size5;
          apache::thrift::protocol::TType _etype8;
          xfer += iprot->readListBegin(_etype8, _size5);
          uint32_t _i9;
          if (_size5 == std::numeric_limits<uint32_t>::max()) {
            for (_i9 = 0; iprot->peekList(); _i9++) {
              this->mutable_stringListValue().resize(_i9 + 1);
              xfer += iprot->readString(this->mutable_stringListValue()[_i9]);
            }
          }
          else {
            this->mutable_stringListValue().resize(_size5);
            for (_i9 = 0; _i9 < _size5; ++_i9) {
              xfer += iprot->readString(this->mutable_stringListValue()[_i9]);
            }
          }
          xfer += iprot->readListEnd();
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ComplexUnion::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ComplexUnion");
  switch(this->getType()) {
    case ComplexUnion::Type::intValue:
    {
      xfer += prot_->serializedFieldSize("intValue", apache::thrift::protocol::T_I64, 1);
      xfer += prot_->serializedSizeI64(this->get_intValue());
      break;
    }
    case ComplexUnion::Type::stringValue:
    {
      xfer += prot_->serializedFieldSize("stringValue", apache::thrift::protocol::T_STRING, 2);
      xfer += prot_->serializedSizeString(this->get_stringValue());
      break;
    }
    case ComplexUnion::Type::intListValue:
    {
      xfer += prot_->serializedFieldSize("intListValue", apache::thrift::protocol::T_LIST, 3);
      xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I64, this->get_intListValue().size());
      for (auto _iter10 = this->get_intListValue().begin(); _iter10 != this->get_intListValue().end(); ++_iter10) {
        xfer += prot_->serializedSizeI64((*_iter10));
      }
      xfer += prot_->serializedSizeListEnd();
      break;
    }
    case ComplexUnion::Type::stringListValue:
    {
      xfer += prot_->serializedFieldSize("stringListValue", apache::thrift::protocol::T_LIST, 4);
      xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRING, this->get_stringListValue().size());
      for (auto _iter11 = this->get_stringListValue().begin(); _iter11 != this->get_stringListValue().end(); ++_iter11) {
        xfer += prot_->serializedSizeString((*_iter11));
      }
      xfer += prot_->serializedSizeListEnd();
      break;
    }
    case ComplexUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ComplexUnion::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ComplexUnion");
  switch(this->getType()) {
    case ComplexUnion::Type::intValue:
    {
      xfer += prot_->serializedFieldSize("intValue", apache::thrift::protocol::T_I64, 1);
      xfer += prot_->serializedSizeI64(this->get_intValue());
      break;
    }
    case ComplexUnion::Type::stringValue:
    {
      xfer += prot_->serializedFieldSize("stringValue", apache::thrift::protocol::T_STRING, 2);
      xfer += prot_->serializedSizeString(this->get_stringValue());
      break;
    }
    case ComplexUnion::Type::intListValue:
    {
      xfer += prot_->serializedFieldSize("intListValue", apache::thrift::protocol::T_LIST, 3);
      xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I64, this->get_intListValue().size());
      for (auto _iter12 = this->get_intListValue().begin(); _iter12 != this->get_intListValue().end(); ++_iter12) {
        xfer += prot_->serializedSizeI64((*_iter12));
      }
      xfer += prot_->serializedSizeListEnd();
      break;
    }
    case ComplexUnion::Type::stringListValue:
    {
      xfer += prot_->serializedFieldSize("stringListValue", apache::thrift::protocol::T_LIST, 4);
      xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRING, this->get_stringListValue().size());
      for (auto _iter13 = this->get_stringListValue().begin(); _iter13 != this->get_stringListValue().end(); ++_iter13) {
        xfer += prot_->serializedSizeString((*_iter13));
      }
      xfer += prot_->serializedSizeListEnd();
      break;
    }
    case ComplexUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ComplexUnion::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ComplexUnion");
  switch(this->getType()) {
    case ComplexUnion::Type::intValue:
    {
      xfer += prot_->writeFieldBegin("intValue", apache::thrift::protocol::T_I64, 1);
      xfer += prot_->writeI64(this->get_intValue());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case ComplexUnion::Type::stringValue:
    {
      xfer += prot_->writeFieldBegin("stringValue", apache::thrift::protocol::T_STRING, 2);
      xfer += prot_->writeString(this->get_stringValue());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case ComplexUnion::Type::intListValue:
    {
      xfer += prot_->writeFieldBegin("intListValue", apache::thrift::protocol::T_LIST, 3);
      xfer += prot_->writeListBegin(apache::thrift::protocol::T_I64, this->get_intListValue().size());
      for (auto _iter14 = this->get_intListValue().begin(); _iter14 != this->get_intListValue().end(); ++_iter14) {
        xfer += prot_->writeI64((*_iter14));
      }
      xfer += prot_->writeListEnd();
      xfer += prot_->writeFieldEnd();
      break;
    }
    case ComplexUnion::Type::stringListValue:
    {
      xfer += prot_->writeFieldBegin("stringListValue", apache::thrift::protocol::T_LIST, 4);
      xfer += prot_->writeListBegin(apache::thrift::protocol::T_STRING, this->get_stringListValue().size());
      for (auto _iter15 = this->get_stringListValue().begin(); _iter15 != this->get_stringListValue().end(); ++_iter15) {
        xfer += prot_->writeString((*_iter15));
      }
      xfer += prot_->writeListEnd();
      xfer += prot_->writeFieldEnd();
      break;
    }
    case ComplexUnion::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2