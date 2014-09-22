--- fft.c.orig	2014-02-24 13:56:57.244236013 +0400
+++ fft.c	2014-02-24 13:57:16.293650674 +0400
@@ -27,6 +27,10 @@
 #include <math.h>
 #include <complex.h>

+#if __FreeBSD_version < 902000
+#  define cexpf(x) (expf(crealf(x))*(cosf(cimagf(x))+sinf(cimagf(x))*I))
+#endif
+
 #define N (DDB_FREQ_BANDS * 2)

 static float hamming[N];              /* hamming window, scaled to sum to 1 */
