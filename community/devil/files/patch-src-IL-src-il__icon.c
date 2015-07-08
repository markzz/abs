--- src-IL/src/il_icon.c.orig	2009-03-08 08:10:09.000000000 +0100
+++ src-IL/src/il_icon.c	2010-03-29 08:57:55.000000000 +0200
@@ -525,7 +525,7 @@
 
 	// Expand low-bit-depth grayscale images to 8 bits
 	if (ico_color_type == PNG_COLOR_TYPE_GRAY && bit_depth < 8) {
-		png_set_gray_1_2_4_to_8(ico_png_ptr);
+		png_set_expand_gray_1_2_4_to_8(ico_png_ptr);
 	}
 
 	// Expand RGB images with transparency to full alpha channels
