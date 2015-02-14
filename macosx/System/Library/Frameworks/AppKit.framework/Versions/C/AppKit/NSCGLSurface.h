/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSCGLSurface : NSObject

@property (copy,readonly) CGImageRef image; 
@property (copy,readonly) CGImageRef leftImage; 
@property (copy,readonly) CGImageRef rightImage; 
@property (copy,readonly) id layerContents; 
@property (readonly) CGSize size; 
@property (readonly) unsigned displayMask; 
@property (getter=isStereo,readonly) char stereo; 
@property (readonly) unsigned long long bitDepth; 
@property (getter=isFloatingPoint,readonly) char floatingPoint; 
@property (getter=isOpaque,readonly) char opaque; 
@property (copy,readonly) CGColorSpaceRef colorSpace; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(CGImageRef)image;
-(CGSize)size;
-(CGColorSpaceRef)colorSpace;
-(char)isOpaque;
-(id)initWithSize:(CGSize)arg1 colorSpace:(CGColorSpaceRef)arg2 atomic:(char)arg3 ;
-(void)attachToCGLContext:(CGLContextObjectRef)arg1 ;
-(void)flushRect:(CGRect)arg1 ;
-(id)layerContents;
-(unsigned)displayMask;
-(char)isStereo;
-(unsigned long long)bitDepth;
-(char)isFloatingPoint;
-(char)isAttachedToCGLContext:(CGLContextObjectRef)arg1 ;
-(CGImageRef)leftImage;
-(CGImageRef)rightImage;
@end

