/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CITextureUtility : NSObject
+(char)dumpCLmem:(cl_memRef)arg1 queue:(cl_command_queueRef)arg2 isFlipped:(char)arg3 commentString:(id)arg4 filename:(id)arg5 ;
+(char)dumpGLTexture:(unsigned)arg1 target:(unsigned)arg2 cgl_ctx:(CGLContextObjectRef)arg3 isFlipped:(char)arg4 commentString:(id)arg5 filename:(id)arg6 ;
+(char)dumpIOSurface:(IOSurfaceRef)arg1 plane:(unsigned)arg2 format:(FEFormat)arg3 commentString:(id)arg4 filename:(id)arg5 ;
@end
