// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zss_cmd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_zss_5fcmd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_zss_5fcmd_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_zss_5fcmd_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_zss_5fcmd_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_zss_5fcmd_2eproto;
namespace ZSS {
namespace Protocol {
class Robot_Command;
class Robot_CommandDefaultTypeInternal;
extern Robot_CommandDefaultTypeInternal _Robot_Command_default_instance_;
class Robot_Status;
class Robot_StatusDefaultTypeInternal;
extern Robot_StatusDefaultTypeInternal _Robot_Status_default_instance_;
class Robots_Command;
class Robots_CommandDefaultTypeInternal;
extern Robots_CommandDefaultTypeInternal _Robots_Command_default_instance_;
class Robots_Status;
class Robots_StatusDefaultTypeInternal;
extern Robots_StatusDefaultTypeInternal _Robots_Status_default_instance_;
}  // namespace Protocol
}  // namespace ZSS
PROTOBUF_NAMESPACE_OPEN
template<> ::ZSS::Protocol::Robot_Command* Arena::CreateMaybeMessage<::ZSS::Protocol::Robot_Command>(Arena*);
template<> ::ZSS::Protocol::Robot_Status* Arena::CreateMaybeMessage<::ZSS::Protocol::Robot_Status>(Arena*);
template<> ::ZSS::Protocol::Robots_Command* Arena::CreateMaybeMessage<::ZSS::Protocol::Robots_Command>(Arena*);
template<> ::ZSS::Protocol::Robots_Status* Arena::CreateMaybeMessage<::ZSS::Protocol::Robots_Status>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ZSS {
namespace Protocol {

// ===================================================================

class Robots_Status :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ZSS.Protocol.Robots_Status) */ {
 public:
  Robots_Status();
  virtual ~Robots_Status();

  Robots_Status(const Robots_Status& from);
  Robots_Status(Robots_Status&& from) noexcept
    : Robots_Status() {
    *this = ::std::move(from);
  }

  inline Robots_Status& operator=(const Robots_Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Robots_Status& operator=(Robots_Status&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Robots_Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robots_Status* internal_default_instance() {
    return reinterpret_cast<const Robots_Status*>(
               &_Robots_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Robots_Status& a, Robots_Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Robots_Status* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Robots_Status* New() const final {
    return CreateMaybeMessage<Robots_Status>(nullptr);
  }

  Robots_Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Robots_Status>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Robots_Status& from);
  void MergeFrom(const Robots_Status& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Robots_Status* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ZSS.Protocol.Robots_Status";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_zss_5fcmd_2eproto);
    return ::descriptor_table_zss_5fcmd_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotsStatusFieldNumber = 1,
  };
  // repeated .ZSS.Protocol.Robot_Status robots_status = 1;
  int robots_status_size() const;
  void clear_robots_status();
  ::ZSS::Protocol::Robot_Status* mutable_robots_status(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Status >*
      mutable_robots_status();
  const ::ZSS::Protocol::Robot_Status& robots_status(int index) const;
  ::ZSS::Protocol::Robot_Status* add_robots_status();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Status >&
      robots_status() const;

  // @@protoc_insertion_point(class_scope:ZSS.Protocol.Robots_Status)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Status > robots_status_;
  friend struct ::TableStruct_zss_5fcmd_2eproto;
};
// -------------------------------------------------------------------

class Robot_Status :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ZSS.Protocol.Robot_Status) */ {
 public:
  Robot_Status();
  virtual ~Robot_Status();

  Robot_Status(const Robot_Status& from);
  Robot_Status(Robot_Status&& from) noexcept
    : Robot_Status() {
    *this = ::std::move(from);
  }

  inline Robot_Status& operator=(const Robot_Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Robot_Status& operator=(Robot_Status&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Robot_Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robot_Status* internal_default_instance() {
    return reinterpret_cast<const Robot_Status*>(
               &_Robot_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Robot_Status& a, Robot_Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Robot_Status* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Robot_Status* New() const final {
    return CreateMaybeMessage<Robot_Status>(nullptr);
  }

  Robot_Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Robot_Status>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Robot_Status& from);
  void MergeFrom(const Robot_Status& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Robot_Status* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ZSS.Protocol.Robot_Status";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_zss_5fcmd_2eproto);
    return ::descriptor_table_zss_5fcmd_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotIdFieldNumber = 1,
    kInfraredFieldNumber = 2,
    kFlatKickFieldNumber = 3,
    kChipKickFieldNumber = 4,
  };
  // required int32 robot_id = 1;
  bool has_robot_id() const;
  void clear_robot_id();
  ::PROTOBUF_NAMESPACE_ID::int32 robot_id() const;
  void set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // required bool infrared = 2;
  bool has_infrared() const;
  void clear_infrared();
  bool infrared() const;
  void set_infrared(bool value);

  // required bool flat_kick = 3;
  bool has_flat_kick() const;
  void clear_flat_kick();
  bool flat_kick() const;
  void set_flat_kick(bool value);

  // required bool chip_kick = 4;
  bool has_chip_kick() const;
  void clear_chip_kick();
  bool chip_kick() const;
  void set_chip_kick(bool value);

  // @@protoc_insertion_point(class_scope:ZSS.Protocol.Robot_Status)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 robot_id_;
  bool infrared_;
  bool flat_kick_;
  bool chip_kick_;
  friend struct ::TableStruct_zss_5fcmd_2eproto;
};
// -------------------------------------------------------------------

class Robots_Command :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ZSS.Protocol.Robots_Command) */ {
 public:
  Robots_Command();
  virtual ~Robots_Command();

  Robots_Command(const Robots_Command& from);
  Robots_Command(Robots_Command&& from) noexcept
    : Robots_Command() {
    *this = ::std::move(from);
  }

  inline Robots_Command& operator=(const Robots_Command& from) {
    CopyFrom(from);
    return *this;
  }
  inline Robots_Command& operator=(Robots_Command&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Robots_Command& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robots_Command* internal_default_instance() {
    return reinterpret_cast<const Robots_Command*>(
               &_Robots_Command_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Robots_Command& a, Robots_Command& b) {
    a.Swap(&b);
  }
  inline void Swap(Robots_Command* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Robots_Command* New() const final {
    return CreateMaybeMessage<Robots_Command>(nullptr);
  }

  Robots_Command* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Robots_Command>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Robots_Command& from);
  void MergeFrom(const Robots_Command& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Robots_Command* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ZSS.Protocol.Robots_Command";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_zss_5fcmd_2eproto);
    return ::descriptor_table_zss_5fcmd_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommandFieldNumber = 1,
    kDelayFieldNumber = 2,
  };
  // repeated .ZSS.Protocol.Robot_Command command = 1;
  int command_size() const;
  void clear_command();
  ::ZSS::Protocol::Robot_Command* mutable_command(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Command >*
      mutable_command();
  const ::ZSS::Protocol::Robot_Command& command(int index) const;
  ::ZSS::Protocol::Robot_Command* add_command();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Command >&
      command() const;

  // optional int32 delay = 2;
  bool has_delay() const;
  void clear_delay();
  ::PROTOBUF_NAMESPACE_ID::int32 delay() const;
  void set_delay(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:ZSS.Protocol.Robots_Command)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Command > command_;
  ::PROTOBUF_NAMESPACE_ID::int32 delay_;
  friend struct ::TableStruct_zss_5fcmd_2eproto;
};
// -------------------------------------------------------------------

class Robot_Command :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ZSS.Protocol.Robot_Command) */ {
 public:
  Robot_Command();
  virtual ~Robot_Command();

  Robot_Command(const Robot_Command& from);
  Robot_Command(Robot_Command&& from) noexcept
    : Robot_Command() {
    *this = ::std::move(from);
  }

  inline Robot_Command& operator=(const Robot_Command& from) {
    CopyFrom(from);
    return *this;
  }
  inline Robot_Command& operator=(Robot_Command&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Robot_Command& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robot_Command* internal_default_instance() {
    return reinterpret_cast<const Robot_Command*>(
               &_Robot_Command_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Robot_Command& a, Robot_Command& b) {
    a.Swap(&b);
  }
  inline void Swap(Robot_Command* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Robot_Command* New() const final {
    return CreateMaybeMessage<Robot_Command>(nullptr);
  }

  Robot_Command* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Robot_Command>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Robot_Command& from);
  void MergeFrom(const Robot_Command& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Robot_Command* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ZSS.Protocol.Robot_Command";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_zss_5fcmd_2eproto);
    return ::descriptor_table_zss_5fcmd_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotIdFieldNumber = 1,
    kVelocityXFieldNumber = 2,
    kVelocityYFieldNumber = 3,
    kVelocityRFieldNumber = 4,
    kKickFieldNumber = 5,
    kPowerFieldNumber = 6,
    kDribblerSpinFieldNumber = 7,
    kCurrentAngleFieldNumber = 8,
    kTargetAngleFieldNumber = 9,
  };
  // required int32 robot_id = 1;
  bool has_robot_id() const;
  void clear_robot_id();
  ::PROTOBUF_NAMESPACE_ID::int32 robot_id() const;
  void set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // required float velocity_x = 2;
  bool has_velocity_x() const;
  void clear_velocity_x();
  float velocity_x() const;
  void set_velocity_x(float value);

  // required float velocity_y = 3;
  bool has_velocity_y() const;
  void clear_velocity_y();
  float velocity_y() const;
  void set_velocity_y(float value);

  // required float velocity_r = 4;
  bool has_velocity_r() const;
  void clear_velocity_r();
  float velocity_r() const;
  void set_velocity_r(float value);

  // required bool kick = 5;
  bool has_kick() const;
  void clear_kick();
  bool kick() const;
  void set_kick(bool value);

  // required float power = 6;
  bool has_power() const;
  void clear_power();
  float power() const;
  void set_power(float value);

  // required float dribbler_spin = 7;
  bool has_dribbler_spin() const;
  void clear_dribbler_spin();
  float dribbler_spin() const;
  void set_dribbler_spin(float value);

  // optional float current_angle = 8;
  bool has_current_angle() const;
  void clear_current_angle();
  float current_angle() const;
  void set_current_angle(float value);

  // optional float target_angle = 9;
  bool has_target_angle() const;
  void clear_target_angle();
  float target_angle() const;
  void set_target_angle(float value);

  // @@protoc_insertion_point(class_scope:ZSS.Protocol.Robot_Command)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 robot_id_;
  float velocity_x_;
  float velocity_y_;
  float velocity_r_;
  bool kick_;
  float power_;
  float dribbler_spin_;
  float current_angle_;
  float target_angle_;
  friend struct ::TableStruct_zss_5fcmd_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Robots_Status

// repeated .ZSS.Protocol.Robot_Status robots_status = 1;
inline int Robots_Status::robots_status_size() const {
  return robots_status_.size();
}
inline void Robots_Status::clear_robots_status() {
  robots_status_.Clear();
}
inline ::ZSS::Protocol::Robot_Status* Robots_Status::mutable_robots_status(int index) {
  // @@protoc_insertion_point(field_mutable:ZSS.Protocol.Robots_Status.robots_status)
  return robots_status_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Status >*
Robots_Status::mutable_robots_status() {
  // @@protoc_insertion_point(field_mutable_list:ZSS.Protocol.Robots_Status.robots_status)
  return &robots_status_;
}
inline const ::ZSS::Protocol::Robot_Status& Robots_Status::robots_status(int index) const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robots_Status.robots_status)
  return robots_status_.Get(index);
}
inline ::ZSS::Protocol::Robot_Status* Robots_Status::add_robots_status() {
  // @@protoc_insertion_point(field_add:ZSS.Protocol.Robots_Status.robots_status)
  return robots_status_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Status >&
Robots_Status::robots_status() const {
  // @@protoc_insertion_point(field_list:ZSS.Protocol.Robots_Status.robots_status)
  return robots_status_;
}

// -------------------------------------------------------------------

// Robot_Status

// required int32 robot_id = 1;
inline bool Robot_Status::has_robot_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robot_Status::clear_robot_id() {
  robot_id_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Robot_Status::robot_id() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Status.robot_id)
  return robot_id_;
}
inline void Robot_Status::set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  robot_id_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Status.robot_id)
}

// required bool infrared = 2;
inline bool Robot_Status::has_infrared() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Robot_Status::clear_infrared() {
  infrared_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool Robot_Status::infrared() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Status.infrared)
  return infrared_;
}
inline void Robot_Status::set_infrared(bool value) {
  _has_bits_[0] |= 0x00000002u;
  infrared_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Status.infrared)
}

// required bool flat_kick = 3;
inline bool Robot_Status::has_flat_kick() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Robot_Status::clear_flat_kick() {
  flat_kick_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool Robot_Status::flat_kick() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Status.flat_kick)
  return flat_kick_;
}
inline void Robot_Status::set_flat_kick(bool value) {
  _has_bits_[0] |= 0x00000004u;
  flat_kick_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Status.flat_kick)
}

// required bool chip_kick = 4;
inline bool Robot_Status::has_chip_kick() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Robot_Status::clear_chip_kick() {
  chip_kick_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool Robot_Status::chip_kick() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Status.chip_kick)
  return chip_kick_;
}
inline void Robot_Status::set_chip_kick(bool value) {
  _has_bits_[0] |= 0x00000008u;
  chip_kick_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Status.chip_kick)
}

// -------------------------------------------------------------------

// Robots_Command

// repeated .ZSS.Protocol.Robot_Command command = 1;
inline int Robots_Command::command_size() const {
  return command_.size();
}
inline void Robots_Command::clear_command() {
  command_.Clear();
}
inline ::ZSS::Protocol::Robot_Command* Robots_Command::mutable_command(int index) {
  // @@protoc_insertion_point(field_mutable:ZSS.Protocol.Robots_Command.command)
  return command_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Command >*
Robots_Command::mutable_command() {
  // @@protoc_insertion_point(field_mutable_list:ZSS.Protocol.Robots_Command.command)
  return &command_;
}
inline const ::ZSS::Protocol::Robot_Command& Robots_Command::command(int index) const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robots_Command.command)
  return command_.Get(index);
}
inline ::ZSS::Protocol::Robot_Command* Robots_Command::add_command() {
  // @@protoc_insertion_point(field_add:ZSS.Protocol.Robots_Command.command)
  return command_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ZSS::Protocol::Robot_Command >&
Robots_Command::command() const {
  // @@protoc_insertion_point(field_list:ZSS.Protocol.Robots_Command.command)
  return command_;
}

// optional int32 delay = 2;
inline bool Robots_Command::has_delay() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robots_Command::clear_delay() {
  delay_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Robots_Command::delay() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robots_Command.delay)
  return delay_;
}
inline void Robots_Command::set_delay(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  delay_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robots_Command.delay)
}

// -------------------------------------------------------------------

// Robot_Command

// required int32 robot_id = 1;
inline bool Robot_Command::has_robot_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robot_Command::clear_robot_id() {
  robot_id_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Robot_Command::robot_id() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.robot_id)
  return robot_id_;
}
inline void Robot_Command::set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  robot_id_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.robot_id)
}

// required float velocity_x = 2;
inline bool Robot_Command::has_velocity_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Robot_Command::clear_velocity_x() {
  velocity_x_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Robot_Command::velocity_x() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.velocity_x)
  return velocity_x_;
}
inline void Robot_Command::set_velocity_x(float value) {
  _has_bits_[0] |= 0x00000002u;
  velocity_x_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.velocity_x)
}

// required float velocity_y = 3;
inline bool Robot_Command::has_velocity_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Robot_Command::clear_velocity_y() {
  velocity_y_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float Robot_Command::velocity_y() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.velocity_y)
  return velocity_y_;
}
inline void Robot_Command::set_velocity_y(float value) {
  _has_bits_[0] |= 0x00000004u;
  velocity_y_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.velocity_y)
}

// required float velocity_r = 4;
inline bool Robot_Command::has_velocity_r() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Robot_Command::clear_velocity_r() {
  velocity_r_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float Robot_Command::velocity_r() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.velocity_r)
  return velocity_r_;
}
inline void Robot_Command::set_velocity_r(float value) {
  _has_bits_[0] |= 0x00000008u;
  velocity_r_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.velocity_r)
}

// required bool kick = 5;
inline bool Robot_Command::has_kick() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Robot_Command::clear_kick() {
  kick_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Robot_Command::kick() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.kick)
  return kick_;
}
inline void Robot_Command::set_kick(bool value) {
  _has_bits_[0] |= 0x00000010u;
  kick_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.kick)
}

// required float power = 6;
inline bool Robot_Command::has_power() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Robot_Command::clear_power() {
  power_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline float Robot_Command::power() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.power)
  return power_;
}
inline void Robot_Command::set_power(float value) {
  _has_bits_[0] |= 0x00000020u;
  power_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.power)
}

// required float dribbler_spin = 7;
inline bool Robot_Command::has_dribbler_spin() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Robot_Command::clear_dribbler_spin() {
  dribbler_spin_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline float Robot_Command::dribbler_spin() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.dribbler_spin)
  return dribbler_spin_;
}
inline void Robot_Command::set_dribbler_spin(float value) {
  _has_bits_[0] |= 0x00000040u;
  dribbler_spin_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.dribbler_spin)
}

// optional float current_angle = 8;
inline bool Robot_Command::has_current_angle() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Robot_Command::clear_current_angle() {
  current_angle_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline float Robot_Command::current_angle() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.current_angle)
  return current_angle_;
}
inline void Robot_Command::set_current_angle(float value) {
  _has_bits_[0] |= 0x00000080u;
  current_angle_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.current_angle)
}

// optional float target_angle = 9;
inline bool Robot_Command::has_target_angle() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Robot_Command::clear_target_angle() {
  target_angle_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline float Robot_Command::target_angle() const {
  // @@protoc_insertion_point(field_get:ZSS.Protocol.Robot_Command.target_angle)
  return target_angle_;
}
inline void Robot_Command::set_target_angle(float value) {
  _has_bits_[0] |= 0x00000100u;
  target_angle_ = value;
  // @@protoc_insertion_point(field_set:ZSS.Protocol.Robot_Command.target_angle)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol
}  // namespace ZSS

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_zss_5fcmd_2eproto
