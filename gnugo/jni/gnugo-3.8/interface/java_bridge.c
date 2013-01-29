#include <jni.h>

#include <stdio.h>
#include <string.h>
#include "gtp.h"

char gtp_input_line[100];
char gtp_output_line[GTP_BUFSIZE*2];


JNIEXPORT void JNICALL Java_lrstudios_games_gnugo_GnugoEngine_initGtp (JNIEnv* env, jclass clasz, jfloat memory)
{
	init_gtp (memory);
}


JNIEXPORT jstring JNICALL Java_lrstudios_games_gnugo_GnugoEngine_playGtp (JNIEnv* env, jclass clasz, jstring input)
{
	char *cinput = (char*)(*env)->GetStringUTFChars (env, input, NULL);
	strcpy (gtp_input_line, cinput);
	gtp_output_line[0] = '\0';
	play_gtp ();
	(*env)->ReleaseStringUTFChars (env, input, cinput);
	return (*env)->NewStringUTF (env, gtp_output_line);
}
