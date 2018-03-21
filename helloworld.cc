#include <node.h>

void helloworld(const v8::FunctionCallbackInfo<v8::Value> & args) {
    v8::Isolate * isolate = args.GetIsolate();
    auto ret = v8::String::NewFromUtf8(isolate, "Hello world");
    args.GetReturnValue().Set(ret);
}

void initialize(v8::Local<v8::Object> exports) {
    NODE_SET_METHOD(exports, "helloworld", helloworld);
}

NODE_MODULE(module_name, initialize)
