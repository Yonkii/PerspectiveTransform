/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_useopencvwithndk_build_MainActivity */

#ifndef _Included_com_example_useopencvwithndk_build_MainActivity
#define _Included_com_example_useopencvwithndk_build_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
#undef com_example_useopencvwithndk_build_MainActivity_PERMISSIONS_REQUEST_CODE
#define com_example_useopencvwithndk_build_MainActivity_PERMISSIONS_REQUEST_CODE 1000L
/*
 * Class:     com_example_useopencvwithndk_build_MainActivity
 * Method:    loadCascade
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_example_useopencvwithndk_1build_MainActivity_loadCascade
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_example_useopencvwithndk_build_MainActivity
 * Method:    detect
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_example_useopencvwithndk_1build_MainActivity_detect
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
