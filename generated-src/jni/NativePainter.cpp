// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from gmocktest.djinni

#include "NativePainter.hpp"  // my header
#include "Marshal.hpp"
#include "NativePainter.hpp"
#include "NativeTurtle.hpp"

namespace djinni_generated {

NativePainter::NativePainter() : ::djinni::JniInterface<::gmocktest::Painter, NativePainter>("com/mycompany/gmocktest/Painter$CppProxy") {}

NativePainter::~NativePainter() = default;


CJNIEXPORT void JNICALL Java_com_mycompany_gmocktest_Painter_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::gmocktest::Painter>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_mycompany_gmocktest_Painter_createWithTurtle(JNIEnv* jniEnv, jobject /*this*/, jobject j_turtle)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::gmocktest::Painter::create_with_turtle(::djinni_generated::NativeTurtle::toCpp(jniEnv, j_turtle));
        return ::djinni::release(::djinni_generated::NativePainter::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_com_mycompany_gmocktest_Painter_00024CppProxy_native_1drawCircle(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_x, jint j_y, jint j_radius)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::gmocktest::Painter>(nativeRef);
        auto r = ref->draw_circle(::djinni::I32::toCpp(jniEnv, j_x),
                                  ::djinni::I32::toCpp(jniEnv, j_y),
                                  ::djinni::I32::toCpp(jniEnv, j_radius));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated