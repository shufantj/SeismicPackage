//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisCfds.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisCfds_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisCfds *module = new CpseisCfds();
    return (jlong)module;
  }
}