// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: point_cloud.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "point_cloud.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto_msg {
class LidarPointCloudDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<LidarPointCloud>
     _instance;
} _LidarPointCloud_default_instance_;

namespace protobuf_point_5fcloud_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, timestamp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, seq_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, frame_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, height_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, width_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, is_dense_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarPointCloud, data_),
  1,
  2,
  0,
  3,
  4,
  5,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(LidarPointCloud)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LidarPointCloud_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "point_cloud.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _LidarPointCloud_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_LidarPointCloud_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021point_cloud.proto\022\tproto_msg\"\202\001\n\017Lidar"
      "PointCloud\022\021\n\ttimestamp\030\001 \001(\001\022\013\n\003seq\030\002 \001"
      "(\r\022\020\n\010frame_id\030\003 \001(\t\022\016\n\006height\030\004 \001(\r\022\r\n\005"
      "width\030\005 \001(\r\022\020\n\010is_dense\030\006 \001(\010\022\014\n\004data\030\007 "
      "\003(\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "point_cloud.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_point_5fcloud_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LidarPointCloud::kTimestampFieldNumber;
const int LidarPointCloud::kSeqFieldNumber;
const int LidarPointCloud::kFrameIdFieldNumber;
const int LidarPointCloud::kHeightFieldNumber;
const int LidarPointCloud::kWidthFieldNumber;
const int LidarPointCloud::kIsDenseFieldNumber;
const int LidarPointCloud::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LidarPointCloud::LidarPointCloud()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_point_5fcloud_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto_msg.LidarPointCloud)
}
LidarPointCloud::LidarPointCloud(const LidarPointCloud& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_frame_id()) {
    frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
  }
  ::memcpy(&timestamp_, &from.timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_dense_) -
    reinterpret_cast<char*>(&timestamp_)) + sizeof(is_dense_));
  // @@protoc_insertion_point(copy_constructor:proto_msg.LidarPointCloud)
}

void LidarPointCloud::SharedCtor() {
  _cached_size_ = 0;
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_dense_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(is_dense_));
}

LidarPointCloud::~LidarPointCloud() {
  // @@protoc_insertion_point(destructor:proto_msg.LidarPointCloud)
  SharedDtor();
}

void LidarPointCloud::SharedDtor() {
  frame_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LidarPointCloud::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LidarPointCloud::descriptor() {
  protobuf_point_5fcloud_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_point_5fcloud_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LidarPointCloud& LidarPointCloud::default_instance() {
  protobuf_point_5fcloud_2eproto::InitDefaults();
  return *internal_default_instance();
}

LidarPointCloud* LidarPointCloud::New(::google::protobuf::Arena* arena) const {
  LidarPointCloud* n = new LidarPointCloud;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LidarPointCloud::Clear() {
// @@protoc_insertion_point(message_clear_start:proto_msg.LidarPointCloud)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  if (has_frame_id()) {
    GOOGLE_DCHECK(!frame_id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*frame_id_.UnsafeRawStringPointer())->clear();
  }
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 62u) {
    ::memset(&timestamp_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&is_dense_) -
        reinterpret_cast<char*>(&timestamp_)) + sizeof(is_dense_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LidarPointCloud::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto_msg.LidarPointCloud)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {
          set_has_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 seq = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_seq();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string frame_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_frame_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->frame_id().data(), static_cast<int>(this->frame_id().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "proto_msg.LidarPointCloud.frame_id");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 height = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_height();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &height_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 width = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_width();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &width_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool is_dense = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          set_has_is_dense();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_dense_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float data = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(61u /* 61 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 61u, input, this->mutable_data())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_data())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto_msg.LidarPointCloud)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto_msg.LidarPointCloud)
  return false;
#undef DO_
}

void LidarPointCloud::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto_msg.LidarPointCloud)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double timestamp = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->timestamp(), output);
  }

  // optional uint32 seq = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->seq(), output);
  }

  // optional string frame_id = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto_msg.LidarPointCloud.frame_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->frame_id(), output);
  }

  // optional uint32 height = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->height(), output);
  }

  // optional uint32 width = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->width(), output);
  }

  // optional bool is_dense = 6;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_dense(), output);
  }

  // repeated float data = 7;
  for (int i = 0, n = this->data_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      7, this->data(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto_msg.LidarPointCloud)
}

::google::protobuf::uint8* LidarPointCloud::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto_msg.LidarPointCloud)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double timestamp = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->timestamp(), target);
  }

  // optional uint32 seq = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->seq(), target);
  }

  // optional string frame_id = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto_msg.LidarPointCloud.frame_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->frame_id(), target);
  }

  // optional uint32 height = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->height(), target);
  }

  // optional uint32 width = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->width(), target);
  }

  // optional bool is_dense = 6;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_dense(), target);
  }

  // repeated float data = 7;
  target = ::google::protobuf::internal::WireFormatLite::
    WriteFloatToArray(7, this->data_, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto_msg.LidarPointCloud)
  return target;
}

size_t LidarPointCloud::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto_msg.LidarPointCloud)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated float data = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->data_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->data_size());
    total_size += data_size;
  }

  if (_has_bits_[0 / 32] & 63u) {
    // optional string frame_id = 3;
    if (has_frame_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->frame_id());
    }

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

    // optional uint32 height = 4;
    if (has_height()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->height());
    }

    // optional uint32 width = 5;
    if (has_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->width());
    }

    // optional bool is_dense = 6;
    if (has_is_dense()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LidarPointCloud::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto_msg.LidarPointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  const LidarPointCloud* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LidarPointCloud>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto_msg.LidarPointCloud)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto_msg.LidarPointCloud)
    MergeFrom(*source);
  }
}

void LidarPointCloud::MergeFrom(const LidarPointCloud& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto_msg.LidarPointCloud)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_frame_id();
      frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
    }
    if (cached_has_bits & 0x00000002u) {
      timestamp_ = from.timestamp_;
    }
    if (cached_has_bits & 0x00000004u) {
      seq_ = from.seq_;
    }
    if (cached_has_bits & 0x00000008u) {
      height_ = from.height_;
    }
    if (cached_has_bits & 0x00000010u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000020u) {
      is_dense_ = from.is_dense_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void LidarPointCloud::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto_msg.LidarPointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LidarPointCloud::CopyFrom(const LidarPointCloud& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto_msg.LidarPointCloud)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LidarPointCloud::IsInitialized() const {
  return true;
}

void LidarPointCloud::Swap(LidarPointCloud* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LidarPointCloud::InternalSwap(LidarPointCloud* other) {
  using std::swap;
  data_.InternalSwap(&other->data_);
  frame_id_.Swap(&other->frame_id_);
  swap(timestamp_, other->timestamp_);
  swap(seq_, other->seq_);
  swap(height_, other->height_);
  swap(width_, other->width_);
  swap(is_dense_, other->is_dense_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LidarPointCloud::GetMetadata() const {
  protobuf_point_5fcloud_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_point_5fcloud_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LidarPointCloud

// optional double timestamp = 1;
bool LidarPointCloud::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LidarPointCloud::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
void LidarPointCloud::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
void LidarPointCloud::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
double LidarPointCloud::timestamp() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.timestamp)
  return timestamp_;
}
void LidarPointCloud::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.timestamp)
}

// optional uint32 seq = 2;
bool LidarPointCloud::has_seq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LidarPointCloud::set_has_seq() {
  _has_bits_[0] |= 0x00000004u;
}
void LidarPointCloud::clear_has_seq() {
  _has_bits_[0] &= ~0x00000004u;
}
void LidarPointCloud::clear_seq() {
  seq_ = 0u;
  clear_has_seq();
}
::google::protobuf::uint32 LidarPointCloud::seq() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.seq)
  return seq_;
}
void LidarPointCloud::set_seq(::google::protobuf::uint32 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.seq)
}

// optional string frame_id = 3;
bool LidarPointCloud::has_frame_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LidarPointCloud::set_has_frame_id() {
  _has_bits_[0] |= 0x00000001u;
}
void LidarPointCloud::clear_has_frame_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void LidarPointCloud::clear_frame_id() {
  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_frame_id();
}
const ::std::string& LidarPointCloud::frame_id() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.frame_id)
  return frame_id_.GetNoArena();
}
void LidarPointCloud::set_frame_id(const ::std::string& value) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.frame_id)
}
#if LANG_CXX11
void LidarPointCloud::set_frame_id(::std::string&& value) {
  set_has_frame_id();
  frame_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto_msg.LidarPointCloud.frame_id)
}
#endif
void LidarPointCloud::set_frame_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto_msg.LidarPointCloud.frame_id)
}
void LidarPointCloud::set_frame_id(const char* value, size_t size) {
  set_has_frame_id();
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto_msg.LidarPointCloud.frame_id)
}
::std::string* LidarPointCloud::mutable_frame_id() {
  set_has_frame_id();
  // @@protoc_insertion_point(field_mutable:proto_msg.LidarPointCloud.frame_id)
  return frame_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LidarPointCloud::release_frame_id() {
  // @@protoc_insertion_point(field_release:proto_msg.LidarPointCloud.frame_id)
  clear_has_frame_id();
  return frame_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LidarPointCloud::set_allocated_frame_id(::std::string* frame_id) {
  if (frame_id != NULL) {
    set_has_frame_id();
  } else {
    clear_has_frame_id();
  }
  frame_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), frame_id);
  // @@protoc_insertion_point(field_set_allocated:proto_msg.LidarPointCloud.frame_id)
}

// optional uint32 height = 4;
bool LidarPointCloud::has_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void LidarPointCloud::set_has_height() {
  _has_bits_[0] |= 0x00000008u;
}
void LidarPointCloud::clear_has_height() {
  _has_bits_[0] &= ~0x00000008u;
}
void LidarPointCloud::clear_height() {
  height_ = 0u;
  clear_has_height();
}
::google::protobuf::uint32 LidarPointCloud::height() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.height)
  return height_;
}
void LidarPointCloud::set_height(::google::protobuf::uint32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.height)
}

// optional uint32 width = 5;
bool LidarPointCloud::has_width() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void LidarPointCloud::set_has_width() {
  _has_bits_[0] |= 0x00000010u;
}
void LidarPointCloud::clear_has_width() {
  _has_bits_[0] &= ~0x00000010u;
}
void LidarPointCloud::clear_width() {
  width_ = 0u;
  clear_has_width();
}
::google::protobuf::uint32 LidarPointCloud::width() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.width)
  return width_;
}
void LidarPointCloud::set_width(::google::protobuf::uint32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.width)
}

// optional bool is_dense = 6;
bool LidarPointCloud::has_is_dense() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void LidarPointCloud::set_has_is_dense() {
  _has_bits_[0] |= 0x00000020u;
}
void LidarPointCloud::clear_has_is_dense() {
  _has_bits_[0] &= ~0x00000020u;
}
void LidarPointCloud::clear_is_dense() {
  is_dense_ = false;
  clear_has_is_dense();
}
bool LidarPointCloud::is_dense() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.is_dense)
  return is_dense_;
}
void LidarPointCloud::set_is_dense(bool value) {
  set_has_is_dense();
  is_dense_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.is_dense)
}

// repeated float data = 7;
int LidarPointCloud::data_size() const {
  return data_.size();
}
void LidarPointCloud::clear_data() {
  data_.Clear();
}
float LidarPointCloud::data(int index) const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarPointCloud.data)
  return data_.Get(index);
}
void LidarPointCloud::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto_msg.LidarPointCloud.data)
}
void LidarPointCloud::add_data(float value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:proto_msg.LidarPointCloud.data)
}
const ::google::protobuf::RepeatedField< float >&
LidarPointCloud::data() const {
  // @@protoc_insertion_point(field_list:proto_msg.LidarPointCloud.data)
  return data_;
}
::google::protobuf::RepeatedField< float >*
LidarPointCloud::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:proto_msg.LidarPointCloud.data)
  return &data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_msg

// @@protoc_insertion_point(global_scope)
