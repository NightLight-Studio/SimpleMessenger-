// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: notification_type_moc.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_notification_5ftype_5fmoc_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_notification_5ftype_5fmoc_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_notification_5ftype_5fmoc_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_notification_5ftype_5fmoc_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_notification_5ftype_5fmoc_2eproto;
class NotificationTypeMoc;
struct NotificationTypeMocDefaultTypeInternal;
extern NotificationTypeMocDefaultTypeInternal _NotificationTypeMoc_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::NotificationTypeMoc* Arena::CreateMaybeMessage<::NotificationTypeMoc>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class NotificationTypeMoc final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NotificationTypeMoc) */ {
 public:
  inline NotificationTypeMoc() : NotificationTypeMoc(nullptr) {}
  ~NotificationTypeMoc() override;
  explicit constexpr NotificationTypeMoc(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NotificationTypeMoc(const NotificationTypeMoc& from);
  NotificationTypeMoc(NotificationTypeMoc&& from) noexcept
    : NotificationTypeMoc() {
    *this = ::std::move(from);
  }

  inline NotificationTypeMoc& operator=(const NotificationTypeMoc& from) {
    CopyFrom(from);
    return *this;
  }
  inline NotificationTypeMoc& operator=(NotificationTypeMoc&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NotificationTypeMoc& default_instance() {
    return *internal_default_instance();
  }
  static inline const NotificationTypeMoc* internal_default_instance() {
    return reinterpret_cast<const NotificationTypeMoc*>(
               &_NotificationTypeMoc_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NotificationTypeMoc& a, NotificationTypeMoc& b) {
    a.Swap(&b);
  }
  inline void Swap(NotificationTypeMoc* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NotificationTypeMoc* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NotificationTypeMoc* New() const final {
    return new NotificationTypeMoc();
  }

  NotificationTypeMoc* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NotificationTypeMoc>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NotificationTypeMoc& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const NotificationTypeMoc& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NotificationTypeMoc* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NotificationTypeMoc";
  }
  protected:
  explicit NotificationTypeMoc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNtTypeFieldNumber = 1,
  };
  // int32 nt_type = 1;
  void clear_nt_type();
  ::PROTOBUF_NAMESPACE_ID::int32 nt_type() const;
  void set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_nt_type() const;
  void _internal_set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:NotificationTypeMoc)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 nt_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_notification_5ftype_5fmoc_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NotificationTypeMoc

// int32 nt_type = 1;
inline void NotificationTypeMoc::clear_nt_type() {
  nt_type_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NotificationTypeMoc::_internal_nt_type() const {
  return nt_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NotificationTypeMoc::nt_type() const {
  // @@protoc_insertion_point(field_get:NotificationTypeMoc.nt_type)
  return _internal_nt_type();
}
inline void NotificationTypeMoc::_internal_set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  nt_type_ = value;
}
inline void NotificationTypeMoc::set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_nt_type(value);
  // @@protoc_insertion_point(field_set:NotificationTypeMoc.nt_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_notification_5ftype_5fmoc_2eproto