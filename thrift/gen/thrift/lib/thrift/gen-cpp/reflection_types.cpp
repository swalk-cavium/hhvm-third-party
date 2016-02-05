/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generatedSignedSource<<d4c331d4771ff781343e61aedea1bb4c>>
 */
#include "thrift/lib/thrift/gen-cpp/reflection_types.h"

#include <algorithm>
#include <string.h>

namespace apache { namespace thrift { namespace reflection {

const int _kTypeValues[] = {
  TYPE_VOID,
  TYPE_STRING,
  TYPE_BOOL,
  TYPE_BYTE,
  TYPE_I16,
  TYPE_I32,
  TYPE_I64,
  TYPE_DOUBLE,
  TYPE_ENUM,
  TYPE_LIST,
  TYPE_SET,
  TYPE_MAP,
  TYPE_STRUCT,
  TYPE_SERVICE,
  TYPE_PROGRAM,
  TYPE_FLOAT
};

const char* const _kTypeNames[] = {
  "TYPE_VOID",
  "TYPE_STRING",
  "TYPE_BOOL",
  "TYPE_BYTE",
  "TYPE_I16",
  "TYPE_I32",
  "TYPE_I64",
  "TYPE_DOUBLE",
  "TYPE_ENUM",
  "TYPE_LIST",
  "TYPE_SET",
  "TYPE_MAP",
  "TYPE_STRUCT",
  "TYPE_SERVICE",
  "TYPE_PROGRAM",
  "TYPE_FLOAT"
};

const std::map<int, const char*> _Type_VALUES_TO_NAMES(apache::thrift::TEnumIterator<int>(16, _kTypeValues, _kTypeNames), apache::thrift::TEnumIterator<int>(-1, NULL, NULL));

const std::map<const char*, int, apache::thrift::ltstr> _Type_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<int>(16, _kTypeValues, _kTypeNames), apache::thrift::TEnumInverseIterator<int>(-1, NULL, NULL));

}}} // namespace
namespace apache { namespace thrift {
template<>
const char* TEnumTraitsBase< ::apache::thrift::reflection::Type>::findName( ::apache::thrift::reflection::Type value) {
return findName( ::apache::thrift::reflection::_Type_VALUES_TO_NAMES, value);
} 

template<>
bool TEnumTraitsBase< ::apache::thrift::reflection::Type>::findValue(const char* name,  ::apache::thrift::reflection::Type* out) {
return findValue( ::apache::thrift::reflection::_Type_NAMES_TO_VALUES, name, out);
} 
}} // apache::thrift 

namespace apache { namespace thrift { namespace reflection {
bool StructField::operator == (const StructField & rhs) const {
  if (!(this->isRequired == rhs.isRequired))
    return false;
  if (!(this->type == rhs.type))
    return false;
  if (!(this->name == rhs.name))
    return false;
  if (__isset.annotations != rhs.__isset.annotations)
    return false;
  else if (__isset.annotations && !(annotations == rhs.annotations))
    return false;
  if (!(this->order == rhs.order))
    return false;
  return true;
}

uint32_t StructField::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isRequired);
          this->__isset.isRequired = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->type);
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->annotations.clear();
            uint32_t _size1;
            bool _sizeUnknown2;
            apache::thrift::protocol::TType _ktype3;
            apache::thrift::protocol::TType _vtype4;
            xfer += iprot->readMapBegin(_ktype3, _vtype4, _size1, _sizeUnknown2);
            if (!_sizeUnknown2) {
              uint32_t _i6;
              for (_i6 = 0; _i6 < _size1; ++_i6)
              {
                std::string _key7;
                xfer += iprot->readString(_key7);
                std::string& _val8 = this->annotations[_key7];
                xfer += iprot->readString(_val8);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key9;
                xfer += iprot->readString(_key9);
                std::string& _val10 = this->annotations[_key9];
                xfer += iprot->readString(_val10);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.annotations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->order);
          this->__isset.order = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void StructField::__clear() {
  isRequired = 0;
  type = 0;
  name = "";
  annotations.clear();
  order = 0;
  __isset.__clear();
}
uint32_t StructField::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StructField");
  xfer += oprot->writeFieldBegin("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->isRequired);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("type", apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->type);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.annotations) {
    xfer += oprot->writeFieldBegin("annotations", apache::thrift::protocol::T_MAP, 4);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_STRING, this->annotations.size());
      boost::container::flat_map<std::string, std::string> ::const_iterator _iter11;
      for (_iter11 = this->annotations.begin(); _iter11 != this->annotations.end(); ++_iter11)
      {
        xfer += oprot->writeString(_iter11->first);
        xfer += oprot->writeString(_iter11->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("order", apache::thrift::protocol::T_I16, 5);
  xfer += oprot->writeI16(this->order);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StructField &a, StructField &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.isRequired, b.isRequired);
  swap(a.type, b.type);
  swap(a.name, b.name);
  swap(a.annotations, b.annotations);
  swap(a.order, b.order);
  swap(a.__isset, b.__isset);
}

void merge(const StructField& from, StructField& to) {
  using apache::thrift::merge;
  if (from.__isset.isRequired) {
    merge(from.isRequired, to.isRequired);
    to.__isset.isRequired = true;
  }
  if (from.__isset.type) {
    merge(from.type, to.type);
    to.__isset.type = true;
  }
  if (from.__isset.name) {
    merge(from.name, to.name);
    to.__isset.name = true;
  }
  if (from.__isset.annotations) {
    merge(from.annotations, to.annotations);
    to.__isset.annotations = true;
  }
  if (from.__isset.order) {
    merge(from.order, to.order);
    to.__isset.order = true;
  }
}

void merge(StructField&& from, StructField& to) {
  using apache::thrift::merge;
  if (from.__isset.isRequired) {
    merge(std::move(from.isRequired), to.isRequired);
    to.__isset.isRequired = true;
  }
  if (from.__isset.type) {
    merge(std::move(from.type), to.type);
    to.__isset.type = true;
  }
  if (from.__isset.name) {
    merge(std::move(from.name), to.name);
    to.__isset.name = true;
  }
  if (from.__isset.annotations) {
    merge(std::move(from.annotations), to.annotations);
    to.__isset.annotations = true;
  }
  if (from.__isset.order) {
    merge(std::move(from.order), to.order);
    to.__isset.order = true;
  }
}

bool DataType::operator == (const DataType & rhs) const {
  if (!(this->name == rhs.name))
    return false;
  if (__isset.fields != rhs.__isset.fields)
    return false;
  else if (__isset.fields && !(fields == rhs.fields))
    return false;
  if (__isset.mapKeyType != rhs.__isset.mapKeyType)
    return false;
  else if (__isset.mapKeyType && !(mapKeyType == rhs.mapKeyType))
    return false;
  if (__isset.valueType != rhs.__isset.valueType)
    return false;
  else if (__isset.valueType && !(valueType == rhs.valueType))
    return false;
  if (__isset.enumValues != rhs.__isset.enumValues)
    return false;
  else if (__isset.enumValues && !(enumValues == rhs.enumValues))
    return false;
  return true;
}

uint32_t DataType::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->fields.clear();
            uint32_t _size13;
            bool _sizeUnknown14;
            apache::thrift::protocol::TType _ktype15;
            apache::thrift::protocol::TType _vtype16;
            xfer += iprot->readMapBegin(_ktype15, _vtype16, _size13, _sizeUnknown14);
            if (!_sizeUnknown14) {
              uint32_t _i18;
              for (_i18 = 0; _i18 < _size13; ++_i18)
              {
                int16_t _key19;
                xfer += iprot->readI16(_key19);
                StructField& _val20 = this->fields[_key19];
                xfer += _val20.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key21;
                xfer += iprot->readI16(_key21);
                StructField& _val22 = this->fields[_key21];
                xfer += _val22.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fields = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->mapKeyType);
          this->__isset.mapKeyType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->valueType);
          this->__isset.valueType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->enumValues.clear();
            uint32_t _size23;
            bool _sizeUnknown24;
            apache::thrift::protocol::TType _ktype25;
            apache::thrift::protocol::TType _vtype26;
            xfer += iprot->readMapBegin(_ktype25, _vtype26, _size23, _sizeUnknown24);
            if (!_sizeUnknown24) {
              uint32_t _i28;
              for (_i28 = 0; _i28 < _size23; ++_i28)
              {
                std::string _key29;
                xfer += iprot->readString(_key29);
                int32_t& _val30 = this->enumValues[_key29];
                xfer += iprot->readI32(_val30);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key31;
                xfer += iprot->readString(_key31);
                int32_t& _val32 = this->enumValues[_key31];
                xfer += iprot->readI32(_val32);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.enumValues = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void DataType::__clear() {
  name = "";
  fields.clear();
  mapKeyType = 0;
  valueType = 0;
  enumValues.clear();
  __isset.__clear();
}
uint32_t DataType::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("DataType");
  xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.fields) {
    xfer += oprot->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 2);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_STRUCT, this->fields.size());
      boost::container::flat_map<int16_t, StructField> ::const_iterator _iter33;
      for (_iter33 = this->fields.begin(); _iter33 != this->fields.end(); ++_iter33)
      {
        xfer += oprot->writeI16(_iter33->first);
        xfer += _iter33->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.mapKeyType) {
    xfer += oprot->writeFieldBegin("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->mapKeyType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.valueType) {
    xfer += oprot->writeFieldBegin("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += oprot->writeI64(this->valueType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.enumValues) {
    xfer += oprot->writeFieldBegin("enumValues", apache::thrift::protocol::T_MAP, 5);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_I32, this->enumValues.size());
      boost::container::flat_map<std::string, int32_t> ::const_iterator _iter34;
      for (_iter34 = this->enumValues.begin(); _iter34 != this->enumValues.end(); ++_iter34)
      {
        xfer += oprot->writeString(_iter34->first);
        xfer += oprot->writeI32(_iter34->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(DataType &a, DataType &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.name, b.name);
  swap(a.fields, b.fields);
  swap(a.mapKeyType, b.mapKeyType);
  swap(a.valueType, b.valueType);
  swap(a.enumValues, b.enumValues);
  swap(a.__isset, b.__isset);
}

void merge(const DataType& from, DataType& to) {
  using apache::thrift::merge;
  if (from.__isset.name) {
    merge(from.name, to.name);
    to.__isset.name = true;
  }
  if (from.__isset.fields) {
    merge(from.fields, to.fields);
    to.__isset.fields = true;
  }
  if (from.__isset.mapKeyType) {
    merge(from.mapKeyType, to.mapKeyType);
    to.__isset.mapKeyType = true;
  }
  if (from.__isset.valueType) {
    merge(from.valueType, to.valueType);
    to.__isset.valueType = true;
  }
  if (from.__isset.enumValues) {
    merge(from.enumValues, to.enumValues);
    to.__isset.enumValues = true;
  }
}

void merge(DataType&& from, DataType& to) {
  using apache::thrift::merge;
  if (from.__isset.name) {
    merge(std::move(from.name), to.name);
    to.__isset.name = true;
  }
  if (from.__isset.fields) {
    merge(std::move(from.fields), to.fields);
    to.__isset.fields = true;
  }
  if (from.__isset.mapKeyType) {
    merge(std::move(from.mapKeyType), to.mapKeyType);
    to.__isset.mapKeyType = true;
  }
  if (from.__isset.valueType) {
    merge(std::move(from.valueType), to.valueType);
    to.__isset.valueType = true;
  }
  if (from.__isset.enumValues) {
    merge(std::move(from.enumValues), to.enumValues);
    to.__isset.enumValues = true;
  }
}

bool Schema::operator == (const Schema & rhs) const {
  if (!(this->dataTypes == rhs.dataTypes))
    return false;
  if (!(this->names == rhs.names))
    return false;
  return true;
}

uint32_t Schema::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->dataTypes.clear();
            uint32_t _size36;
            bool _sizeUnknown37;
            apache::thrift::protocol::TType _ktype38;
            apache::thrift::protocol::TType _vtype39;
            xfer += iprot->readMapBegin(_ktype38, _vtype39, _size36, _sizeUnknown37);
            if (!_sizeUnknown37) {
              uint32_t _i41;
              for (_i41 = 0; _i41 < _size36; ++_i41)
              {
                int64_t _key42;
                xfer += iprot->readI64(_key42);
                DataType& _val43 = this->dataTypes[_key42];
                xfer += _val43.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int64_t _key44;
                xfer += iprot->readI64(_key44);
                DataType& _val45 = this->dataTypes[_key44];
                xfer += _val45.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.dataTypes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_MAP) {
          {
            this->names.clear();
            uint32_t _size46;
            bool _sizeUnknown47;
            apache::thrift::protocol::TType _ktype48;
            apache::thrift::protocol::TType _vtype49;
            xfer += iprot->readMapBegin(_ktype48, _vtype49, _size46, _sizeUnknown47);
            if (!_sizeUnknown47) {
              uint32_t _i51;
              for (_i51 = 0; _i51 < _size46; ++_i51)
              {
                std::string _key52;
                xfer += iprot->readString(_key52);
                int64_t& _val53 = this->names[_key52];
                xfer += iprot->readI64(_val53);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key54;
                xfer += iprot->readString(_key54);
                int64_t& _val55 = this->names[_key54];
                xfer += iprot->readI64(_val55);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.names = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void Schema::__clear() {
  dataTypes.clear();
  names.clear();
  __isset.__clear();
}
uint32_t Schema::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Schema");
  xfer += oprot->writeFieldBegin("dataTypes", apache::thrift::protocol::T_MAP, 1);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I64, apache::thrift::protocol::T_STRUCT, this->dataTypes.size());
    std::unordered_map<int64_t, DataType> ::const_iterator _iter56;
    for (_iter56 = this->dataTypes.begin(); _iter56 != this->dataTypes.end(); ++_iter56)
    {
      xfer += oprot->writeI64(_iter56->first);
      xfer += _iter56->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("names", apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_I64, this->names.size());
    std::unordered_map<std::string, int64_t> ::const_iterator _iter57;
    for (_iter57 = this->names.begin(); _iter57 != this->names.end(); ++_iter57)
    {
      xfer += oprot->writeString(_iter57->first);
      xfer += oprot->writeI64(_iter57->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Schema &a, Schema &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.dataTypes, b.dataTypes);
  swap(a.names, b.names);
  swap(a.__isset, b.__isset);
}

void merge(const Schema& from, Schema& to) {
  using apache::thrift::merge;
  if (from.__isset.dataTypes) {
    merge(from.dataTypes, to.dataTypes);
    to.__isset.dataTypes = true;
  }
  if (from.__isset.names) {
    merge(from.names, to.names);
    to.__isset.names = true;
  }
}

void merge(Schema&& from, Schema& to) {
  using apache::thrift::merge;
  if (from.__isset.dataTypes) {
    merge(std::move(from.dataTypes), to.dataTypes);
    to.__isset.dataTypes = true;
  }
  if (from.__isset.names) {
    merge(std::move(from.names), to.names);
    to.__isset.names = true;
  }
}

}}} // namespace
