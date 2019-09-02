/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class AudioTranscoder */

#ifndef _Included_AudioTranscoder
#define _Included_AudioTranscoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     AudioTranscoder
 * Method:    transcodeToPCM
 * Signature: (Ljava/io/InputStream;Ljava/io/OutputStream;)I
 */
JNIEXPORT jint JNICALL Java_AudioTranscoder_transcodeToPCM
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     AudioTranscoder
 * Method:    transcodeToPCMFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_AudioTranscoder_transcodeToPCMFile
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
