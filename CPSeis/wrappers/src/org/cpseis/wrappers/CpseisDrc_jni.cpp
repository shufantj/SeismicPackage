//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisDrc.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisDrc_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisDrc *module = new CpseisDrc();
    return (jlong)module;
  }
}