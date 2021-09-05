// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_user_5fmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_user_5fmessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_user_5fmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_user_5fmessage_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_user_5fmessage_2eproto;
class UserMessage;
struct UserMessageDefaultTypeInternal;
extern UserMessageDefaultTypeInternal _UserMessage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::UserMessage* Arena::CreateMaybeMessage<::UserMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class UserMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:UserMessage) */ {
 public:
  inline UserMessage() : UserMessage(nullptr) {}
  ~UserMessage() override;
  explicit constexpr UserMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UserMessage(const UserMessage& from);
  UserMessage(UserMessage&& from) noexcept
    : UserMessage() {
    *this = ::std::move(from);
  }

  inline UserMessage& operator=(const UserMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserMessage& operator=(UserMessage&& from) noexcept {
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
  static const UserMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserMessage* internal_default_instance() {
    return reinterpret_cast<const UserMessage*>(
               &_UserMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UserMessage& a, UserMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(UserMessage* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UserMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UserMessage* New() const final {
    return new UserMessage();
  }

  UserMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UserMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UserMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const UserMessage& from);
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
  void InternalSwap(UserMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "UserMessage";
  }
  protected:
  explicit UserMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kMessageFieldNumber = 3,
    kUserIdFieldNumber = 2,
    kNtTypeFieldNumber = 1,
  };
  // string message = 3;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_MUST_USE_RESULT std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // int64 user_id = 2;
  void clear_user_id();
  ::PROTOBUF_NAMESPACE_ID::int64 user_id() const;
  void set_user_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_user_id() const;
  void _internal_set_user_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int32 nt_type = 1;
  void clear_nt_type();
  ::PROTOBUF_NAMESPACE_ID::int32 nt_type() const;
  void set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_nt_type() const;
  void _internal_set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:UserMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::int64 user_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 nt_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_user_5fmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserMessage

// int32 nt_type = 1;
inline void UserMessage::clear_nt_type() {
  nt_type_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 UserMessage::_internal_nt_type() const {
  return nt_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 UserMessage::nt_type() const {
  // @@protoc_insertion_point(field_get:UserMessage.nt_type)
  return _internal_nt_type();
}
inline void UserMessage::_internal_set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  nt_type_ = value;
}
inline void UserMessage::set_nt_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_nt_type(value);
  // @@protoc_insertion_point(field_set:UserMessage.nt_type)
}

// int64 user_id = 2;
inline void UserMessage::clear_user_id() {
  user_id_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 UserMessage::_internal_user_id() const {
  return user_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 UserMessage::user_id() const {
  // @@protoc_insertion_point(field_get:UserMessage.user_id)
  return _internal_user_id();
}
inline void UserMessage::_internal_set_user_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  user_id_ = value;
}
inline void UserMessage::set_user_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:UserMessage.user_id)
}

// string message = 3;
inline void UserMessage::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& UserMessage::message() const {
  // @@protoc_insertion_point(field_get:UserMessage.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void UserMessage::set_message(ArgT0&& arg0, ArgT... args) {
 
 message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:UserMessage.message)
}
inline std::string* UserMessage::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:UserMessage.message)
  return _s;
}
inline const std::string& UserMessage::_internal_message() const {
  return message_.Get();
}
inline void UserMessage::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* UserMessage::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* UserMessage::release_message() {
  // @@protoc_insertion_point(field_release:UserMessage.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void UserMessage::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:UserMessage.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_user_5fmessage_2eproto
