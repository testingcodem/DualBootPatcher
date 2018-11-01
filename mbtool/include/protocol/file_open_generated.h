// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FILEOPEN_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_FILEOPEN_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct FileOpenError;

struct FileOpenRequest;

struct FileOpenResponse;

enum FileOpenFlag {
  FileOpenFlag_APPEND = 0,
  FileOpenFlag_CREAT = 1,
  FileOpenFlag_EXCL = 2,
  FileOpenFlag_RDONLY = 3,
  FileOpenFlag_RDWR = 4,
  FileOpenFlag_TRUNC = 5,
  FileOpenFlag_WRONLY = 6,
  FileOpenFlag_MIN = FileOpenFlag_APPEND,
  FileOpenFlag_MAX = FileOpenFlag_WRONLY
};

inline const FileOpenFlag (&EnumValuesFileOpenFlag())[7] {
  static const FileOpenFlag values[] = {
    FileOpenFlag_APPEND,
    FileOpenFlag_CREAT,
    FileOpenFlag_EXCL,
    FileOpenFlag_RDONLY,
    FileOpenFlag_RDWR,
    FileOpenFlag_TRUNC,
    FileOpenFlag_WRONLY
  };
  return values;
}

inline const char * const *EnumNamesFileOpenFlag() {
  static const char * const names[] = {
    "APPEND",
    "CREAT",
    "EXCL",
    "RDONLY",
    "RDWR",
    "TRUNC",
    "WRONLY",
    nullptr
  };
  return names;
}

inline const char *EnumNameFileOpenFlag(FileOpenFlag e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesFileOpenFlag()[index];
}

struct FileOpenError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ERRNO_VALUE = 4,
    VT_MSG = 6
  };
  int32_t errno_value() const {
    return GetField<int32_t>(VT_ERRNO_VALUE, 0);
  }
  const flatbuffers::String *msg() const {
    return GetPointer<const flatbuffers::String *>(VT_MSG);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ERRNO_VALUE) &&
           VerifyOffset(verifier, VT_MSG) &&
           verifier.VerifyString(msg()) &&
           verifier.EndTable();
  }
};

struct FileOpenErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_errno_value(int32_t errno_value) {
    fbb_.AddElement<int32_t>(FileOpenError::VT_ERRNO_VALUE, errno_value, 0);
  }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) {
    fbb_.AddOffset(FileOpenError::VT_MSG, msg);
  }
  explicit FileOpenErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileOpenErrorBuilder &operator=(const FileOpenErrorBuilder &);
  flatbuffers::Offset<FileOpenError> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FileOpenError>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileOpenError> CreateFileOpenError(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    flatbuffers::Offset<flatbuffers::String> msg = 0) {
  FileOpenErrorBuilder builder_(_fbb);
  builder_.add_msg(msg);
  builder_.add_errno_value(errno_value);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileOpenError> CreateFileOpenErrorDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    const char *msg = nullptr) {
  return mbtool::daemon::v3::CreateFileOpenError(
      _fbb,
      errno_value,
      msg ? _fbb.CreateString(msg) : 0);
}

struct FileOpenRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PATH = 4,
    VT_FLAGS = 6,
    VT_PERMS = 8
  };
  const flatbuffers::String *path() const {
    return GetPointer<const flatbuffers::String *>(VT_PATH);
  }
  const flatbuffers::Vector<int16_t> *flags() const {
    return GetPointer<const flatbuffers::Vector<int16_t> *>(VT_FLAGS);
  }
  uint32_t perms() const {
    return GetField<uint32_t>(VT_PERMS, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_PATH) &&
           verifier.VerifyString(path()) &&
           VerifyOffset(verifier, VT_FLAGS) &&
           verifier.VerifyVector(flags()) &&
           VerifyField<uint32_t>(verifier, VT_PERMS) &&
           verifier.EndTable();
  }
};

struct FileOpenRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_path(flatbuffers::Offset<flatbuffers::String> path) {
    fbb_.AddOffset(FileOpenRequest::VT_PATH, path);
  }
  void add_flags(flatbuffers::Offset<flatbuffers::Vector<int16_t>> flags) {
    fbb_.AddOffset(FileOpenRequest::VT_FLAGS, flags);
  }
  void add_perms(uint32_t perms) {
    fbb_.AddElement<uint32_t>(FileOpenRequest::VT_PERMS, perms, 0);
  }
  explicit FileOpenRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileOpenRequestBuilder &operator=(const FileOpenRequestBuilder &);
  flatbuffers::Offset<FileOpenRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FileOpenRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileOpenRequest> CreateFileOpenRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> path = 0,
    flatbuffers::Offset<flatbuffers::Vector<int16_t>> flags = 0,
    uint32_t perms = 0) {
  FileOpenRequestBuilder builder_(_fbb);
  builder_.add_perms(perms);
  builder_.add_flags(flags);
  builder_.add_path(path);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileOpenRequest> CreateFileOpenRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *path = nullptr,
    const std::vector<int16_t> *flags = nullptr,
    uint32_t perms = 0) {
  return mbtool::daemon::v3::CreateFileOpenRequest(
      _fbb,
      path ? _fbb.CreateString(path) : 0,
      flags ? _fbb.CreateVector<int16_t>(*flags) : 0,
      perms);
}

struct FileOpenResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_ID = 8,
    VT_ERROR = 10
  };
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const flatbuffers::String *error_msg() const {
    return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG);
  }
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const FileOpenError *error() const {
    return GetPointer<const FileOpenError *>(VT_ERROR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyOffset(verifier, VT_ERROR_MSG) &&
           verifier.VerifyString(error_msg()) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct FileOpenResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(FileOpenResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) {
    fbb_.AddOffset(FileOpenResponse::VT_ERROR_MSG, error_msg);
  }
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(FileOpenResponse::VT_ID, id, 0);
  }
  void add_error(flatbuffers::Offset<FileOpenError> error) {
    fbb_.AddOffset(FileOpenResponse::VT_ERROR, error);
  }
  explicit FileOpenResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileOpenResponseBuilder &operator=(const FileOpenResponseBuilder &);
  flatbuffers::Offset<FileOpenResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FileOpenResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileOpenResponse> CreateFileOpenResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0,
    int32_t id = 0,
    flatbuffers::Offset<FileOpenError> error = 0) {
  FileOpenResponseBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_id(id);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileOpenResponse> CreateFileOpenResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr,
    int32_t id = 0,
    flatbuffers::Offset<FileOpenError> error = 0) {
  return mbtool::daemon::v3::CreateFileOpenResponse(
      _fbb,
      success,
      error_msg ? _fbb.CreateString(error_msg) : 0,
      id,
      error);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_FILEOPEN_MBTOOL_DAEMON_V3_H_
