// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: dataexchange.proto

#include "dataexchange.pb.h"
#include "dataexchange.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* DataExchange_method_names[] = {
  "/DataExchange/GetNumber",
  "/DataExchange/GetString",
  "/DataExchange/GetFile",
};

std::unique_ptr< DataExchange::Stub> DataExchange::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DataExchange::Stub> stub(new DataExchange::Stub(channel));
  return stub;
}

DataExchange::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetNumber_(DataExchange_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetString_(DataExchange_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetFile_(DataExchange_method_names[2], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status DataExchange::Stub::GetNumber(::grpc::ClientContext* context, const ::Empty& request, ::NumberReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetNumber_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::NumberReply>* DataExchange::Stub::AsyncGetNumberRaw(::grpc::ClientContext* context, const ::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::NumberReply>::Create(channel_.get(), cq, rpcmethod_GetNumber_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::NumberReply>* DataExchange::Stub::PrepareAsyncGetNumberRaw(::grpc::ClientContext* context, const ::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::NumberReply>::Create(channel_.get(), cq, rpcmethod_GetNumber_, context, request, false);
}

::grpc::Status DataExchange::Stub::GetString(::grpc::ClientContext* context, const ::Empty& request, ::StringReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetString_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::StringReply>* DataExchange::Stub::AsyncGetStringRaw(::grpc::ClientContext* context, const ::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::StringReply>::Create(channel_.get(), cq, rpcmethod_GetString_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::StringReply>* DataExchange::Stub::PrepareAsyncGetStringRaw(::grpc::ClientContext* context, const ::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::StringReply>::Create(channel_.get(), cq, rpcmethod_GetString_, context, request, false);
}

::grpc::ClientReader< ::PartReply>* DataExchange::Stub::GetFileRaw(::grpc::ClientContext* context, const ::Empty& request) {
  return ::grpc::internal::ClientReaderFactory< ::PartReply>::Create(channel_.get(), rpcmethod_GetFile_, context, request);
}

::grpc::ClientAsyncReader< ::PartReply>* DataExchange::Stub::AsyncGetFileRaw(::grpc::ClientContext* context, const ::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::PartReply>::Create(channel_.get(), cq, rpcmethod_GetFile_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::PartReply>* DataExchange::Stub::PrepareAsyncGetFileRaw(::grpc::ClientContext* context, const ::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::PartReply>::Create(channel_.get(), cq, rpcmethod_GetFile_, context, request, false, nullptr);
}

DataExchange::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DataExchange_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DataExchange::Service, ::Empty, ::NumberReply>(
          std::mem_fn(&DataExchange::Service::GetNumber), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DataExchange_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DataExchange::Service, ::Empty, ::StringReply>(
          std::mem_fn(&DataExchange::Service::GetString), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DataExchange_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< DataExchange::Service, ::Empty, ::PartReply>(
          std::mem_fn(&DataExchange::Service::GetFile), this)));
}

DataExchange::Service::~Service() {
}

::grpc::Status DataExchange::Service::GetNumber(::grpc::ServerContext* context, const ::Empty* request, ::NumberReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DataExchange::Service::GetString(::grpc::ServerContext* context, const ::Empty* request, ::StringReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DataExchange::Service::GetFile(::grpc::ServerContext* context, const ::Empty* request, ::grpc::ServerWriter< ::PartReply>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


