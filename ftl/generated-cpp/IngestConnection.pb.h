// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IngestConnection.proto

#ifndef PROTOBUF_IngestConnection_2eproto__INCLUDED
#define PROTOBUF_IngestConnection_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
namespace Beam {
namespace Ftl {
namespace Ingest {
namespace Messages {
namespace Connection {
class Connect;
class ConnectDefaultTypeInternal;
extern ConnectDefaultTypeInternal _Connect_default_instance_;
class Connect_Response;
class Connect_ResponseDefaultTypeInternal;
extern Connect_ResponseDefaultTypeInternal _Connect_Response_default_instance_;
class IngestMessage;
class IngestMessageDefaultTypeInternal;
extern IngestMessageDefaultTypeInternal _IngestMessage_default_instance_;
}  // namespace Connection
}  // namespace Messages
}  // namespace Ingest
}  // namespace Ftl
}  // namespace Beam
namespace google {
namespace protobuf {
class Any;
class AnyDefaultTypeInternal;
extern AnyDefaultTypeInternal _Any_default_instance_;
}  // namespace protobuf
}  // namespace google

namespace Beam {
namespace Ftl {
namespace Ingest {
namespace Messages {
namespace Connection {

namespace protobuf_IngestConnection_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_IngestConnection_2eproto

enum ProtocolVersion {
  V0 = 0,
  V1 = 1,
  ProtocolVersion_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ProtocolVersion_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ProtocolVersion_IsValid(int value);
const ProtocolVersion ProtocolVersion_MIN = V0;
const ProtocolVersion ProtocolVersion_MAX = V1;
const int ProtocolVersion_ARRAYSIZE = ProtocolVersion_MAX + 1;

const ::google::protobuf::EnumDescriptor* ProtocolVersion_descriptor();
inline const ::std::string& ProtocolVersion_Name(ProtocolVersion value) {
  return ::google::protobuf::internal::NameOfEnum(
    ProtocolVersion_descriptor(), value);
}
inline bool ProtocolVersion_Parse(
    const ::std::string& name, ProtocolVersion* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ProtocolVersion>(
    ProtocolVersion_descriptor(), name, value);
}
enum StatusCodes {
  UNKNOWN = 0,
  OK = 200,
  PING = 201,
  BAD_REQUEST = 400,
  UNAUTHORIZED = 401,
  OLD_VERSION = 402,
  AUDIO_SSRC_COLLISION = 403,
  VIDEO_SSRC_COLLISION = 404,
  INVALID_STREAM_KEY = 405,
  CHANNEL_IN_USE = 406,
  REGION_UNSUPPORTED = 407,
  NO_MEDIA_TIMEOUT = 408,
  INTERNAL_SERVER_ERROR = 500,
  INTERNAL_COMMAND_ERROR = 501,
  StatusCodes_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  StatusCodes_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool StatusCodes_IsValid(int value);
const StatusCodes StatusCodes_MIN = UNKNOWN;
const StatusCodes StatusCodes_MAX = INTERNAL_COMMAND_ERROR;
const int StatusCodes_ARRAYSIZE = StatusCodes_MAX + 1;

const ::google::protobuf::EnumDescriptor* StatusCodes_descriptor();
inline const ::std::string& StatusCodes_Name(StatusCodes value) {
  return ::google::protobuf::internal::NameOfEnum(
    StatusCodes_descriptor(), value);
}
inline bool StatusCodes_Parse(
    const ::std::string& name, StatusCodes* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StatusCodes>(
    StatusCodes_descriptor(), name, value);
}
// ===================================================================

class IngestMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Beam.Ftl.Ingest.Messages.Connection.IngestMessage) */ {
 public:
  IngestMessage();
  virtual ~IngestMessage();

  IngestMessage(const IngestMessage& from);

  inline IngestMessage& operator=(const IngestMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IngestMessage& default_instance();

  static inline const IngestMessage* internal_default_instance() {
    return reinterpret_cast<const IngestMessage*>(
               &_IngestMessage_default_instance_);
  }

  void Swap(IngestMessage* other);

  // implements Message ----------------------------------------------

  inline IngestMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  IngestMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const IngestMessage& from);
  void MergeFrom(const IngestMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(IngestMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.Any Command = 15;
  bool has_command() const;
  void clear_command();
  static const int kCommandFieldNumber = 15;
  const ::google::protobuf::Any& command() const;
  ::google::protobuf::Any* mutable_command();
  ::google::protobuf::Any* release_command();
  void set_allocated_command(::google::protobuf::Any* command);

  // .Beam.Ftl.Ingest.Messages.Connection.StatusCodes StatusCode = 1;
  void clear_statuscode();
  static const int kStatusCodeFieldNumber = 1;
  ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes statuscode() const;
  void set_statuscode(::Beam::Ftl::Ingest::Messages::Connection::StatusCodes value);

  // @@protoc_insertion_point(class_scope:Beam.Ftl.Ingest.Messages.Connection.IngestMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::Any* command_;
  int statuscode_;
  mutable int _cached_size_;
  friend struct  protobuf_IngestConnection_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Connect : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Beam.Ftl.Ingest.Messages.Connection.Connect) */ {
 public:
  Connect();
  virtual ~Connect();

  Connect(const Connect& from);

  inline Connect& operator=(const Connect& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Connect& default_instance();

  static inline const Connect* internal_default_instance() {
    return reinterpret_cast<const Connect*>(
               &_Connect_default_instance_);
  }

  void Swap(Connect* other);

  // implements Message ----------------------------------------------

  inline Connect* New() const PROTOBUF_FINAL { return New(NULL); }

  Connect* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Connect& from);
  void MergeFrom(const Connect& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Connect* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Beam.Ftl.Ingest.Messages.Connection.ProtocolVersion ClientProtocolVersion = 1;
  void clear_clientprotocolversion();
  static const int kClientProtocolVersionFieldNumber = 1;
  ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion clientprotocolversion() const;
  void set_clientprotocolversion(::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion value);

  // @@protoc_insertion_point(class_scope:Beam.Ftl.Ingest.Messages.Connection.Connect)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int clientprotocolversion_;
  mutable int _cached_size_;
  friend struct  protobuf_IngestConnection_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Connect_Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Beam.Ftl.Ingest.Messages.Connection.Connect_Response) */ {
 public:
  Connect_Response();
  virtual ~Connect_Response();

  Connect_Response(const Connect_Response& from);

  inline Connect_Response& operator=(const Connect_Response& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Connect_Response& default_instance();

  static inline const Connect_Response* internal_default_instance() {
    return reinterpret_cast<const Connect_Response*>(
               &_Connect_Response_default_instance_);
  }

  void Swap(Connect_Response* other);

  // implements Message ----------------------------------------------

  inline Connect_Response* New() const PROTOBUF_FINAL { return New(NULL); }

  Connect_Response* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Connect_Response& from);
  void MergeFrom(const Connect_Response& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Connect_Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string HmacKey = 3;
  void clear_hmackey();
  static const int kHmacKeyFieldNumber = 3;
  const ::std::string& hmackey() const;
  void set_hmackey(const ::std::string& value);
  #if LANG_CXX11
  void set_hmackey(::std::string&& value);
  #endif
  void set_hmackey(const char* value);
  void set_hmackey(const char* value, size_t size);
  ::std::string* mutable_hmackey();
  ::std::string* release_hmackey();
  void set_allocated_hmackey(::std::string* hmackey);

  // .Beam.Ftl.Ingest.Messages.Connection.ProtocolVersion ServerProtocolVersion = 1;
  void clear_serverprotocolversion();
  static const int kServerProtocolVersionFieldNumber = 1;
  ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion serverprotocolversion() const;
  void set_serverprotocolversion(::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion value);

  // .Beam.Ftl.Ingest.Messages.Connection.StatusCodes StatusCode = 2;
  void clear_statuscode();
  static const int kStatusCodeFieldNumber = 2;
  ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes statuscode() const;
  void set_statuscode(::Beam::Ftl::Ingest::Messages::Connection::StatusCodes value);

  // @@protoc_insertion_point(class_scope:Beam.Ftl.Ingest.Messages.Connection.Connect_Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr hmackey_;
  int serverprotocolversion_;
  int statuscode_;
  mutable int _cached_size_;
  friend struct  protobuf_IngestConnection_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// IngestMessage

// .Beam.Ftl.Ingest.Messages.Connection.StatusCodes StatusCode = 1;
inline void IngestMessage::clear_statuscode() {
  statuscode_ = 0;
}
inline ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes IngestMessage::statuscode() const {
  // @@protoc_insertion_point(field_get:Beam.Ftl.Ingest.Messages.Connection.IngestMessage.StatusCode)
  return static_cast< ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes >(statuscode_);
}
inline void IngestMessage::set_statuscode(::Beam::Ftl::Ingest::Messages::Connection::StatusCodes value) {
  
  statuscode_ = value;
  // @@protoc_insertion_point(field_set:Beam.Ftl.Ingest.Messages.Connection.IngestMessage.StatusCode)
}

// .google.protobuf.Any Command = 15;
inline bool IngestMessage::has_command() const {
  return this != internal_default_instance() && command_ != NULL;
}
inline void IngestMessage::clear_command() {
  if (GetArenaNoVirtual() == NULL && command_ != NULL) delete command_;
  command_ = NULL;
}
inline const ::google::protobuf::Any& IngestMessage::command() const {
  // @@protoc_insertion_point(field_get:Beam.Ftl.Ingest.Messages.Connection.IngestMessage.Command)
  return command_ != NULL ? *command_
                         : *::google::protobuf::Any::internal_default_instance();
}
inline ::google::protobuf::Any* IngestMessage::mutable_command() {
  
  if (command_ == NULL) {
    command_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:Beam.Ftl.Ingest.Messages.Connection.IngestMessage.Command)
  return command_;
}
inline ::google::protobuf::Any* IngestMessage::release_command() {
  // @@protoc_insertion_point(field_release:Beam.Ftl.Ingest.Messages.Connection.IngestMessage.Command)
  
  ::google::protobuf::Any* temp = command_;
  command_ = NULL;
  return temp;
}
inline void IngestMessage::set_allocated_command(::google::protobuf::Any* command) {
  delete command_;
  command_ = command;
  if (command) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Beam.Ftl.Ingest.Messages.Connection.IngestMessage.Command)
}

// -------------------------------------------------------------------

// Connect

// .Beam.Ftl.Ingest.Messages.Connection.ProtocolVersion ClientProtocolVersion = 1;
inline void Connect::clear_clientprotocolversion() {
  clientprotocolversion_ = 0;
}
inline ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion Connect::clientprotocolversion() const {
  // @@protoc_insertion_point(field_get:Beam.Ftl.Ingest.Messages.Connection.Connect.ClientProtocolVersion)
  return static_cast< ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion >(clientprotocolversion_);
}
inline void Connect::set_clientprotocolversion(::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion value) {
  
  clientprotocolversion_ = value;
  // @@protoc_insertion_point(field_set:Beam.Ftl.Ingest.Messages.Connection.Connect.ClientProtocolVersion)
}

// -------------------------------------------------------------------

// Connect_Response

// .Beam.Ftl.Ingest.Messages.Connection.ProtocolVersion ServerProtocolVersion = 1;
inline void Connect_Response::clear_serverprotocolversion() {
  serverprotocolversion_ = 0;
}
inline ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion Connect_Response::serverprotocolversion() const {
  // @@protoc_insertion_point(field_get:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.ServerProtocolVersion)
  return static_cast< ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion >(serverprotocolversion_);
}
inline void Connect_Response::set_serverprotocolversion(::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion value) {
  
  serverprotocolversion_ = value;
  // @@protoc_insertion_point(field_set:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.ServerProtocolVersion)
}

// .Beam.Ftl.Ingest.Messages.Connection.StatusCodes StatusCode = 2;
inline void Connect_Response::clear_statuscode() {
  statuscode_ = 0;
}
inline ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes Connect_Response::statuscode() const {
  // @@protoc_insertion_point(field_get:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.StatusCode)
  return static_cast< ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes >(statuscode_);
}
inline void Connect_Response::set_statuscode(::Beam::Ftl::Ingest::Messages::Connection::StatusCodes value) {
  
  statuscode_ = value;
  // @@protoc_insertion_point(field_set:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.StatusCode)
}

// string HmacKey = 3;
inline void Connect_Response::clear_hmackey() {
  hmackey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Connect_Response::hmackey() const {
  // @@protoc_insertion_point(field_get:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
  return hmackey_.GetNoArena();
}
inline void Connect_Response::set_hmackey(const ::std::string& value) {
  
  hmackey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
}
#if LANG_CXX11
inline void Connect_Response::set_hmackey(::std::string&& value) {
  
  hmackey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
}
#endif
inline void Connect_Response::set_hmackey(const char* value) {
  
  hmackey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
}
inline void Connect_Response::set_hmackey(const char* value, size_t size) {
  
  hmackey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
}
inline ::std::string* Connect_Response::mutable_hmackey() {
  
  // @@protoc_insertion_point(field_mutable:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
  return hmackey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Connect_Response::release_hmackey() {
  // @@protoc_insertion_point(field_release:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
  
  return hmackey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Connect_Response::set_allocated_hmackey(::std::string* hmackey) {
  if (hmackey != NULL) {
    
  } else {
    
  }
  hmackey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hmackey);
  // @@protoc_insertion_point(field_set_allocated:Beam.Ftl.Ingest.Messages.Connection.Connect_Response.HmacKey)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace Connection
}  // namespace Messages
}  // namespace Ingest
}  // namespace Ftl
}  // namespace Beam

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion>() {
  return ::Beam::Ftl::Ingest::Messages::Connection::ProtocolVersion_descriptor();
}
template <> struct is_proto_enum< ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes>() {
  return ::Beam::Ftl::Ingest::Messages::Connection::StatusCodes_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_IngestConnection_2eproto__INCLUDED
