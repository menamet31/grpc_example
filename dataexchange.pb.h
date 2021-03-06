// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dataexchange.proto

#ifndef PROTOBUF_INCLUDED_dataexchange_2eproto
#define PROTOBUF_INCLUDED_dataexchange_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_dataexchange_2eproto 

namespace protobuf_dataexchange_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_dataexchange_2eproto
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class NumberReply;
class NumberReplyDefaultTypeInternal;
extern NumberReplyDefaultTypeInternal _NumberReply_default_instance_;
class PartReply;
class PartReplyDefaultTypeInternal;
extern PartReplyDefaultTypeInternal _PartReply_default_instance_;
class StringReply;
class StringReplyDefaultTypeInternal;
extern StringReplyDefaultTypeInternal _StringReply_default_instance_;
namespace google {
namespace protobuf {
template<> ::Empty* Arena::CreateMaybeMessage<::Empty>(Arena*);
template<> ::NumberReply* Arena::CreateMaybeMessage<::NumberReply>(Arena*);
template<> ::PartReply* Arena::CreateMaybeMessage<::PartReply>(Arena*);
template<> ::StringReply* Arena::CreateMaybeMessage<::StringReply>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Empty : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Empty) */ {
 public:
  Empty();
  virtual ~Empty();

  Empty(const Empty& from);

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Empty& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Empty* other);
  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const final {
    return CreateMaybeMessage<Empty>(NULL);
  }

  Empty* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Empty* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:Empty)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_dataexchange_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class NumberReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NumberReply) */ {
 public:
  NumberReply();
  virtual ~NumberReply();

  NumberReply(const NumberReply& from);

  inline NumberReply& operator=(const NumberReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NumberReply(NumberReply&& from) noexcept
    : NumberReply() {
    *this = ::std::move(from);
  }

  inline NumberReply& operator=(NumberReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NumberReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NumberReply* internal_default_instance() {
    return reinterpret_cast<const NumberReply*>(
               &_NumberReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(NumberReply* other);
  friend void swap(NumberReply& a, NumberReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NumberReply* New() const final {
    return CreateMaybeMessage<NumberReply>(NULL);
  }

  NumberReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NumberReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NumberReply& from);
  void MergeFrom(const NumberReply& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NumberReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 value = 1;
  void clear_value();
  static const int kValueFieldNumber = 1;
  ::google::protobuf::int32 value() const;
  void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:NumberReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_dataexchange_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StringReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:StringReply) */ {
 public:
  StringReply();
  virtual ~StringReply();

  StringReply(const StringReply& from);

  inline StringReply& operator=(const StringReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StringReply(StringReply&& from) noexcept
    : StringReply() {
    *this = ::std::move(from);
  }

  inline StringReply& operator=(StringReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const StringReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StringReply* internal_default_instance() {
    return reinterpret_cast<const StringReply*>(
               &_StringReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(StringReply* other);
  friend void swap(StringReply& a, StringReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StringReply* New() const final {
    return CreateMaybeMessage<StringReply>(NULL);
  }

  StringReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<StringReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const StringReply& from);
  void MergeFrom(const StringReply& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StringReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string value = 1;
  void clear_value();
  static const int kValueFieldNumber = 1;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:StringReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_dataexchange_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PartReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PartReply) */ {
 public:
  PartReply();
  virtual ~PartReply();

  PartReply(const PartReply& from);

  inline PartReply& operator=(const PartReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PartReply(PartReply&& from) noexcept
    : PartReply() {
    *this = ::std::move(from);
  }

  inline PartReply& operator=(PartReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PartReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PartReply* internal_default_instance() {
    return reinterpret_cast<const PartReply*>(
               &_PartReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(PartReply* other);
  friend void swap(PartReply& a, PartReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PartReply* New() const final {
    return CreateMaybeMessage<PartReply>(NULL);
  }

  PartReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PartReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PartReply& from);
  void MergeFrom(const PartReply& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PartReply* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes value = 1;
  void clear_value();
  static const int kValueFieldNumber = 1;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:PartReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_dataexchange_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Empty

// -------------------------------------------------------------------

// NumberReply

// int32 value = 1;
inline void NumberReply::clear_value() {
  value_ = 0;
}
inline ::google::protobuf::int32 NumberReply::value() const {
  // @@protoc_insertion_point(field_get:NumberReply.value)
  return value_;
}
inline void NumberReply::set_value(::google::protobuf::int32 value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:NumberReply.value)
}

// -------------------------------------------------------------------

// StringReply

// string value = 1;
inline void StringReply::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& StringReply::value() const {
  // @@protoc_insertion_point(field_get:StringReply.value)
  return value_.GetNoArena();
}
inline void StringReply::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:StringReply.value)
}
#if LANG_CXX11
inline void StringReply::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:StringReply.value)
}
#endif
inline void StringReply::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:StringReply.value)
}
inline void StringReply::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:StringReply.value)
}
inline ::std::string* StringReply::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:StringReply.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StringReply::release_value() {
  // @@protoc_insertion_point(field_release:StringReply.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StringReply::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:StringReply.value)
}

// -------------------------------------------------------------------

// PartReply

// bytes value = 1;
inline void PartReply::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PartReply::value() const {
  // @@protoc_insertion_point(field_get:PartReply.value)
  return value_.GetNoArena();
}
inline void PartReply::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PartReply.value)
}
#if LANG_CXX11
inline void PartReply::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PartReply.value)
}
#endif
inline void PartReply::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PartReply.value)
}
inline void PartReply::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PartReply.value)
}
inline ::std::string* PartReply::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:PartReply.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PartReply::release_value() {
  // @@protoc_insertion_point(field_release:PartReply.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PartReply::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:PartReply.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_dataexchange_2eproto
