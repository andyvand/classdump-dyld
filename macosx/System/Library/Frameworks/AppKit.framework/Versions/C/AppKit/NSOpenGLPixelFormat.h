/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@interface NSOpenGLPixelFormat : NSObject <NSCoding> {

	CGLPixelFormatObjectRef _CGLPixelFormat;
	void* _reserved1;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;

}

@property (readonly) int numberOfVirtualScreens; 
@property (readonly) CGLPixelFormatObjectRef CGLPixelFormatObj; 
+(void)initialize;
+(id)openGLPixelFormatWithCGLPixelFormatObj:(CGLPixelFormatObjectRef)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)attributes;
-(CGLPixelFormatObjectRef)CGLPixelFormatObj;
-(id)initWithAttributes:(const unsigned*)arg1 ;
-(id)initWithCGLPixelFormatObj:(CGLPixelFormatObjectRef)arg1 ;
-(void)getValues:(int*)arg1 forAttribute:(unsigned)arg2 forVirtualScreen:(int)arg3 ;
-(int)numberOfVirtualScreens;
-(void)setAttributes:(id)arg1 ;
-(char)isSharableWithPixelFormat:(id)arg1 ;
-(void*)_pixelFormatAuxiliary;
-(id)_initWithCGLPixelFormatObj:(void*)arg1 ;
@end

