/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIContext.h>

@interface CICLContext : CIContext {

	CICLContextPrivateRef _clPriv;

}
+(id)contextWithTargetCGContext:(CGContextRef)arg1 options:(id)arg2 ;
+(id)contextWithTargetCGLContext:(CGLContextObject*)arg1 options:(id)arg2 ;
+(cl_device_idRef)hasCL_GPU:(int*)arg1 ;
+(id)contextWithTargetCGContext:(CGContextRef)arg1 ;
+(id)contextWithTargetCGLContext:(CGLContextObject*)arg1 ;
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
-(id)initWithTargetCGContext:(CGContextRef)arg1 options:(id)arg2 ;
-(id)initWithTargetCGLContext:(CGLContextObject*)arg1 options:(id)arg2 ;
-(id)implementationWithTargetCGLSContext:(void*)arg1 options:(id)arg2 ;
-(int)vendorID;
@end

