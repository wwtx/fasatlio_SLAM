// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Proto_msg.LidarScan.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Proto_msg.LidarScan.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Proto_msg {

namespace {

const ::google::protobuf::Descriptor* LidarScan_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LidarScan_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Proto_5fmsg_2eLidarScan_2eproto() {
  protobuf_AddDesc_Proto_5fmsg_2eLidarScan_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Proto_msg.LidarScan.proto");
  GOOGLE_CHECK(file != NULL);
  LidarScan_descriptor_ = file->message_type(0);
  static const int LidarScan_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarScan, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarScan, seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarScan, data_),
  };
  LidarScan_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LidarScan_descriptor_,
      LidarScan::default_instance_,
      LidarScan_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarScan, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarScan, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LidarScan));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Proto_5fmsg_2eLidarScan_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LidarScan_descriptor_, &LidarScan::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Proto_5fmsg_2eLidarScan_2eproto() {
  delete LidarScan::default_instance_;
  delete LidarScan_reflection_;
}

void protobuf_AddDesc_Proto_5fmsg_2eLidarScan_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031Proto_msg.LidarScan.proto\022\tProto_msg\"9"
    "\n\tLidarScan\022\021\n\ttimestamp\030\001 \001(\001\022\013\n\003seq\030\002 "
    "\001(\r\022\014\n\004data\030\003 \003(\014", 97);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Proto_msg.LidarScan.proto", &protobuf_RegisterTypes);
  LidarScan::default_instance_ = new LidarScan();
  LidarScan::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Proto_5fmsg_2eLidarScan_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Proto_5fmsg_2eLidarScan_2eproto {
  StaticDescriptorInitializer_Proto_5fmsg_2eLidarScan_2eproto() {
    protobuf_AddDesc_Proto_5fmsg_2eLidarScan_2eproto();
  }
} static_descriptor_initializer_Proto_5fmsg_2eLidarScan_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LidarScan::kTimestampFieldNumber;
const int LidarScan::kSeqFieldNumber;
const int LidarScan::kDataFieldNumber;
#endif  // !_MSC_VER

LidarScan::LidarScan()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Proto_msg.LidarScan)
}

void LidarScan::InitAsDefaultInstance() {
}

LidarScan::LidarScan(const LidarScan& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Proto_msg.LidarScan)
}

void LidarScan::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  timestamp_ = 0;
  seq_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LidarScan::~LidarScan() {
  // @@protoc_insertion_point(destructor:Proto_msg.LidarScan)
  SharedDtor();
}

void LidarScan::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LidarScan::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LidarScan::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LidarScan_descriptor_;
}

const LidarScan& LidarScan::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Proto_5fmsg_2eLidarScan_2eproto();
  return *default_instance_;
}

LidarScan* LidarScan::default_instance_ = NULL;

LidarScan* LidarScan::New() const {
  return new LidarScan;
}

void LidarScan::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    timestamp_ = 0;
    seq_ = 0u;
  }
  data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LidarScan::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Proto_msg.LidarScan)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double timestamp = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));
          set_has_timestamp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_seq;
        break;
      }

      // optional uint32 seq = 2;
      case 2: {
        if (tag == 16) {
         parse_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seq_)));
          set_has_seq();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_data;
        break;
      }

      // repeated bytes data = 3;
      case 3: {
        if (tag == 26) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_data;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Proto_msg.LidarScan)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Proto_msg.LidarScan)
  return false;
#undef DO_
}

void LidarScan::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Proto_msg.LidarScan)
  // optional double timestamp = 1;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->timestamp(), output);
  }

  // optional uint32 seq = 2;
  if (has_seq()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->seq(), output);
  }

  // repeated bytes data = 3;
  for (int i = 0; i < this->data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->data(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Proto_msg.LidarScan)
}

::google::protobuf::uint8* LidarScan::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto_msg.LidarScan)
  // optional double timestamp = 1;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->timestamp(), target);
  }

  // optional uint32 seq = 2;
  if (has_seq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->seq(), target);
  }

  // repeated bytes data = 3;
  for (int i = 0; i < this->data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(3, this->data(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Proto_msg.LidarScan)
  return target;
}

int LidarScan::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double timestamp = 1;
    if (has_timestamp()) {
      total_size += 1 + 8;
    }

    // optional uint32 seq = 2;
    if (has_seq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->seq());
    }

  }
  // repeated bytes data = 3;
  total_size += 1 * this->data_size();
  for (int i = 0; i < this->data_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->data(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LidarScan::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LidarScan* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LidarScan*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LidarScan::MergeFrom(const LidarScan& from) {
  GOOGLE_CHECK_NE(&from, this);
  data_.MergeFrom(from.data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_seq()) {
      set_seq(from.seq());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LidarScan::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LidarScan::CopyFrom(const LidarScan& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LidarScan::IsInitialized() const {

  return true;
}

void LidarScan::Swap(LidarScan* other) {
  if (other != this) {
    std::swap(timestamp_, other->timestamp_);
    std::swap(seq_, other->seq_);
    data_.Swap(&other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LidarScan::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LidarScan_descriptor_;
  metadata.reflection = LidarScan_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto_msg

// @@protoc_insertion_point(global_scope)
