//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisFktr.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisFktr_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisFktr *module = new CpseisFktr();
    return (jlong)module;
  }
}