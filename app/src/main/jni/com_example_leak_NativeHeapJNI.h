/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_leak_NativeHeapJNI */

#ifndef _Included_com_example_leak_NativeHeapJNI
#define _Included_com_example_leak_NativeHeapJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_leak_NativeHeapJNI
 * Method:    m_malloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_example_leak_NativeHeapJNI_m_1malloc
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_example_leak_NativeHeapJNI
 * Method:    m_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_example_leak_NativeHeapJNI_m_1free
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif