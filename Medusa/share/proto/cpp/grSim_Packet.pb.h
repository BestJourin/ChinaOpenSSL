// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Packet.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grSim_5fPacket_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grSim_5fPacket_2eproto

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
#include "grSim_Commands.pb.h"
#include "grSim_Replacement.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_grSim_5fPacket_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grSim_5fPacket_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grSim_5fPacket_2eproto;
class grSim_Packet;
class grSim_PacketDefaultTypeInternal;
extern grSim_PacketDefaultTypeInternal _grSim_Packet_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::grSim_Packet* Arena::CreateMaybeMessage<::grSim_Packet>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class grSim_Packet :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_Packet) */ {
 public:
  grSim_Packet();
  virtual ~grSim_Packet();

  grSim_Packet(const grSim_Packet& from);
  grSim_Packet(grSim_Packet&& from) noexcept
    : grSim_Packet() {
    *this = ::std::move(from);
  }

  inline grSim_Packet& operator=(const grSim_Packet& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_Packet& operator=(grSim_Packet&& from) noexcept {
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
  static const grSim_Packet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const grSim_Packet* internal_default_instance() {
    return reinterpret_cast<const grSim_Packet*>(
               &_grSim_Packet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(grSim_Packet& a, grSim_Packet& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_Packet* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline grSim_Packet* New() const final {
    return CreateMaybeMessage<grSim_Packet>(nullptr);
  }

  grSim_Packet* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<grSim_Packet>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const grSim_Packet& from);
  void MergeFrom(const grSim_Packet& from);
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
  void InternalSwap(grSim_Packet* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_Packet";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_grSim_5fPacket_2eproto);
    return ::descriptor_table_grSim_5fPacket_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommandsFieldNumber = 1,
    kReplacementFieldNumber = 2,
  };
  // optional .grSim_Commands commands = 1;
  bool has_commands() const;
  void clear_commands();
  const ::grSim_Commands& commands() const;
  ::grSim_Commands* release_commands();
  ::grSim_Commands* mutable_commands();
  void set_allocated_commands(::grSim_Commands* commands);

  // optional .grSim_Replacement replacement = 2;
  bool has_replacement() const;
  void clear_replacement();
  const ::grSim_Replacement& replacement() const;
  ::grSim_Replacement* release_replacement();
  ::grSim_Replacement* mutable_replacement();
  void set_allocated_replacement(::grSim_Replacement* replacement);

  // @@protoc_insertion_point(class_scope:grSim_Packet)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::grSim_Commands* commands_;
  ::grSim_Replacement* replacement_;
  friend struct ::TableStruct_grSim_5fPacket_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// grSim_Packet

// optional .grSim_Commands commands = 1;
inline bool grSim_Packet::has_commands() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::grSim_Commands& grSim_Packet::commands() const {
  const ::grSim_Commands* p = commands_;
  // @@protoc_insertion_point(field_get:grSim_Packet.commands)
  return p != nullptr ? *p : *reinterpret_cast<const ::grSim_Commands*>(
      &::_grSim_Commands_default_instance_);
}
inline ::grSim_Commands* grSim_Packet::release_commands() {
  // @@protoc_insertion_point(field_release:grSim_Packet.commands)
  _has_bits_[0] &= ~0x00000001u;
  ::grSim_Commands* temp = commands_;
  commands_ = nullptr;
  return temp;
}
inline ::grSim_Commands* grSim_Packet::mutable_commands() {
  _has_bits_[0] |= 0x00000001u;
  if (commands_ == nullptr) {
    auto* p = CreateMaybeMessage<::grSim_Commands>(GetArenaNoVirtual());
    commands_ = p;
  }
  // @@protoc_insertion_point(field_mutable:grSim_Packet.commands)
  return commands_;
}
inline void grSim_Packet::set_allocated_commands(::grSim_Commands* commands) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(commands_);
  }
  if (commands) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      commands = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, commands, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  commands_ = commands;
  // @@protoc_insertion_point(field_set_allocated:grSim_Packet.commands)
}

// optional .grSim_Replacement replacement = 2;
inline bool grSim_Packet::has_replacement() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::grSim_Replacement& grSim_Packet::replacement() const {
  const ::grSim_Replacement* p = replacement_;
  // @@protoc_insertion_point(field_get:grSim_Packet.replacement)
  return p != nullptr ? *p : *reinterpret_cast<const ::grSim_Replacement*>(
      &::_grSim_Replacement_default_instance_);
}
inline ::grSim_Replacement* grSim_Packet::release_replacement() {
  // @@protoc_insertion_point(field_release:grSim_Packet.replacement)
  _has_bits_[0] &= ~0x00000002u;
  ::grSim_Replacement* temp = replacement_;
  replacement_ = nullptr;
  return temp;
}
inline ::grSim_Replacement* grSim_Packet::mutable_replacement() {
  _has_bits_[0] |= 0x00000002u;
  if (replacement_ == nullptr) {
    auto* p = CreateMaybeMessage<::grSim_Replacement>(GetArenaNoVirtual());
    replacement_ = p;
  }
  // @@protoc_insertion_point(field_mutable:grSim_Packet.replacement)
  return replacement_;
}
inline void grSim_Packet::set_allocated_replacement(::grSim_Replacement* replacement) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(replacement_);
  }
  if (replacement) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      replacement = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, replacement, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  replacement_ = replacement;
  // @@protoc_insertion_point(field_set_allocated:grSim_Packet.replacement)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grSim_5fPacket_2eproto
