//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisSlab.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisSlab_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisSlab *module = new CpseisSlab();
    return (jlong)module;
  }
}
