#include <napi.h>
Napi::String helloWorld(const Napi::CallbackInfo &info) {
  return Napi::String::New(info.Env(), "Hello World");
}
Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "helloWorld"), Napi::Function::New(env, helloWorld));
  return exports;
}
NODE_API_MODULE(addon, Init)