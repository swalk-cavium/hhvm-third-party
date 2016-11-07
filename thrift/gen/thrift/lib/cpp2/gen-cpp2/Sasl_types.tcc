/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/cpp2/gen-cpp2/Sasl_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace apache { namespace thrift { namespace sasl {

template <class Protocol_>
uint32_t SaslOutcome::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "success") {
        fid = 1;
        ftype = apache::thrift::protocol::T_BOOL;
      }
      else if (fname == "additional_data") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRING;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->success);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->additional_data);
          this->__isset.additional_data = true;
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
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t SaslOutcome::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslOutcome");
  xfer += prot_->serializedFieldSize("success", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->success);
  if (this->__isset.additional_data) {
    xfer += prot_->serializedFieldSize("additional_data", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->additional_data);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslOutcome::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslOutcome");
  xfer += prot_->serializedFieldSize("success", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->success);
  if (this->__isset.additional_data) {
    xfer += prot_->serializedFieldSize("additional_data", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->additional_data);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslOutcome::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SaslOutcome");
  xfer += prot_->writeFieldBegin("success", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->success);
  xfer += prot_->writeFieldEnd();
  if (this->__isset.additional_data) {
    xfer += prot_->writeFieldBegin("additional_data", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->writeString(this->additional_data);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

template <class Protocol_>
uint32_t SaslRequest::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "response") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "abort") {
        fid = 2;
        ftype = apache::thrift::protocol::T_BOOL;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->response);
          this->__isset.response = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->abort);
          this->__isset.abort = true;
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
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t SaslRequest::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslRequest");
  if (this->__isset.response) {
    xfer += prot_->serializedFieldSize("response", apache::thrift::protocol::T_STRING, 1);
    xfer += prot_->serializedSizeString(this->response);
  }
  if (this->__isset.abort) {
    xfer += prot_->serializedFieldSize("abort", apache::thrift::protocol::T_BOOL, 2);
    xfer += prot_->serializedSizeBool(this->abort);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslRequest::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslRequest");
  if (this->__isset.response) {
    xfer += prot_->serializedFieldSize("response", apache::thrift::protocol::T_STRING, 1);
    xfer += prot_->serializedSizeString(this->response);
  }
  if (this->__isset.abort) {
    xfer += prot_->serializedFieldSize("abort", apache::thrift::protocol::T_BOOL, 2);
    xfer += prot_->serializedSizeBool(this->abort);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslRequest::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SaslRequest");
  if (this->__isset.response) {
    xfer += prot_->writeFieldBegin("response", apache::thrift::protocol::T_STRING, 1);
    xfer += prot_->writeString(this->response);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.abort) {
    xfer += prot_->writeFieldBegin("abort", apache::thrift::protocol::T_BOOL, 2);
    xfer += prot_->writeBool(this->abort);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

template <typename T_SaslReply_outcome_struct_setter>
 ::apache::thrift::sasl::SaslOutcome& SaslReply::set_outcome(T_SaslReply_outcome_struct_setter&& outcome_) {
  outcome = std::forward<T_SaslReply_outcome_struct_setter>(outcome_);
  __isset.outcome = true;
  return outcome;
}

template <class Protocol_>
uint32_t SaslReply::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "challenge") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "outcome") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "mechanism") {
        fid = 3;
        ftype = apache::thrift::protocol::T_STRING;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->challenge);
          this->__isset.challenge = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslOutcome>::read(iprot, &this->outcome);
          this->__isset.outcome = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->mechanism);
          this->__isset.mechanism = true;
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
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t SaslReply::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslReply");
  if (this->__isset.challenge) {
    xfer += prot_->serializedFieldSize("challenge", apache::thrift::protocol::T_STRING, 1);
    xfer += prot_->serializedSizeString(this->challenge);
  }
  if (this->__isset.outcome) {
    xfer += prot_->serializedFieldSize("outcome", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslOutcome>::serializedSize(prot_, &this->outcome);
  }
  if (this->__isset.mechanism) {
    xfer += prot_->serializedFieldSize("mechanism", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->serializedSizeString(this->mechanism);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslReply::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslReply");
  if (this->__isset.challenge) {
    xfer += prot_->serializedFieldSize("challenge", apache::thrift::protocol::T_STRING, 1);
    xfer += prot_->serializedSizeString(this->challenge);
  }
  if (this->__isset.outcome) {
    xfer += prot_->serializedFieldSize("outcome", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslOutcome>::serializedSizeZC(prot_, &this->outcome);
  }
  if (this->__isset.mechanism) {
    xfer += prot_->serializedFieldSize("mechanism", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->serializedSizeString(this->mechanism);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslReply::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SaslReply");
  if (this->__isset.challenge) {
    xfer += prot_->writeFieldBegin("challenge", apache::thrift::protocol::T_STRING, 1);
    xfer += prot_->writeString(this->challenge);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.outcome) {
    xfer += prot_->writeFieldBegin("outcome", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslOutcome>::write(prot_, &this->outcome);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.mechanism) {
    xfer += prot_->writeFieldBegin("mechanism", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->writeString(this->mechanism);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

template <typename T_SaslStart_request_struct_setter>
 ::apache::thrift::sasl::SaslRequest& SaslStart::set_request(T_SaslStart_request_struct_setter&& request_) {
  request = std::forward<T_SaslStart_request_struct_setter>(request_);
  __isset.request = true;
  return request;
}

template <typename T_SaslStart_mechanisms_struct_setter>
std::vector<std::string>& SaslStart::set_mechanisms(T_SaslStart_mechanisms_struct_setter&& mechanisms_) {
  mechanisms = std::forward<T_SaslStart_mechanisms_struct_setter>(mechanisms_);
  __isset.mechanisms = true;
  return mechanisms;
}

template <class Protocol_>
uint32_t SaslStart::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "mechanism") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "request") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "mechanisms") {
        fid = 3;
        ftype = apache::thrift::protocol::T_LIST;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->mechanism);
          this->__isset.mechanism = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslRequest>::read(iprot, &this->request);
          this->__isset.request = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->mechanisms = std::vector<std::string>();
          uint32_t _size0;
          apache::thrift::protocol::TType _etype3;
          xfer += iprot->readListBegin(_etype3, _size0);
          uint32_t _i4;
          if (_size0 == std::numeric_limits<uint32_t>::max()) {
            for (_i4 = 0; iprot->peekList(); _i4++) {
              this->mechanisms.resize(_i4 + 1);
              xfer += iprot->readString(this->mechanisms[_i4]);
            }
          }
          else {
            this->mechanisms.resize(_size0);
            for (_i4 = 0; _i4 < _size0; ++_i4) {
              xfer += iprot->readString(this->mechanisms[_i4]);
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.mechanisms = true;
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
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t SaslStart::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslStart");
  xfer += prot_->serializedFieldSize("mechanism", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->mechanism);
  if (this->__isset.request) {
    xfer += prot_->serializedFieldSize("request", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslRequest>::serializedSize(prot_, &this->request);
  }
  if (this->__isset.mechanisms) {
    xfer += prot_->serializedFieldSize("mechanisms", apache::thrift::protocol::T_LIST, 3);
    xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRING, this->mechanisms.size());
    for (auto _iter5 = this->mechanisms.begin(); _iter5 != this->mechanisms.end(); ++_iter5) {
      xfer += prot_->serializedSizeString((*_iter5));
    }
    xfer += prot_->serializedSizeListEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslStart::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SaslStart");
  xfer += prot_->serializedFieldSize("mechanism", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->mechanism);
  if (this->__isset.request) {
    xfer += prot_->serializedFieldSize("request", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslRequest>::serializedSizeZC(prot_, &this->request);
  }
  if (this->__isset.mechanisms) {
    xfer += prot_->serializedFieldSize("mechanisms", apache::thrift::protocol::T_LIST, 3);
    xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_STRING, this->mechanisms.size());
    for (auto _iter6 = this->mechanisms.begin(); _iter6 != this->mechanisms.end(); ++_iter6) {
      xfer += prot_->serializedSizeString((*_iter6));
    }
    xfer += prot_->serializedSizeListEnd();
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SaslStart::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SaslStart");
  xfer += prot_->writeFieldBegin("mechanism", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->mechanism);
  xfer += prot_->writeFieldEnd();
  if (this->__isset.request) {
    xfer += prot_->writeFieldBegin("request", apache::thrift::protocol::T_STRUCT, 2);
    xfer += ::apache::thrift::Cpp2Ops<  ::apache::thrift::sasl::SaslRequest>::write(prot_, &this->request);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.mechanisms) {
    xfer += prot_->writeFieldBegin("mechanisms", apache::thrift::protocol::T_LIST, 3);
    xfer += prot_->writeListBegin(apache::thrift::protocol::T_STRING, this->mechanisms.size());
    for (auto _iter7 = this->mechanisms.begin(); _iter7 != this->mechanisms.end(); ++_iter7) {
      xfer += prot_->writeString((*_iter7));
    }
    xfer += prot_->writeListEnd();
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace sasl {

}}} // apache::thrift::sasl
