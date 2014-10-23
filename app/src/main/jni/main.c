#include "ro_mole_ro_jniexample_MainActivity.h"
/* Header for class ro_mole_ro_jniexample_MainActivity */


JNIEXPORT jstring JNICALL Java_ro_mole_ro_jniexample_MainActivity_getStringFromNative
  (JNIEnv * env, jobject obj)
  {
      return (*env)->NewStringUTF(env, "Hello From JNI !");
    }


