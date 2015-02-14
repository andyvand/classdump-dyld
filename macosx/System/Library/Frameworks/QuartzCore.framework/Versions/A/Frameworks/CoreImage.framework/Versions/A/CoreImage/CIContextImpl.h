/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableDictionary, NSDictionary;

@interface CIContextImpl : NSObject {

	id _owner;
	CGRect _bounds;
	CGAffineTransform _ctm;
	id _userInfo;
	NSMutableDictionary* _dict;
	NSDictionary* _immutableOptions;
	NSDictionary* _immutableOptionsWithAlignment;
	IOSurfaceRef _destinationSurface;

}

@property (readonly) char renderOnPrivateWorkerThread; 
+(id)_contextImplByfeContext:(id)arg1 ;
-(void)abort;
-(CGAffineTransform)CTM;
-(void)renderWithBounds:(CGRect)arg1 matrix:(CGAffineTransform)arg2 function:(/*function pointer*/void*)arg3 info:(void*)arg4 ;
-(id)_feContext;
-(char)renderUsingSubImages:(id)arg1 ;
-(id)optionsDictionaryWithPixelAligment;
-(CGImageRef)_createCGImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 matrix:(CGAffineTransform)arg4 bounds:(CGRect)arg5 ;
-(id)optionsDictionary;
-(id)_lockfeContext;
-(void)_unlockfeContext;
-(CGImageRef)_createImageProviderCGImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 matrix:(CGAffineTransform)arg4 bounds:(CGRect)arg5 ;
-(CGImageRef)_createDataProviderCGImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 matrix:(CGAffineTransform)arg4 bounds:(CGRect)arg5 ;
-(char)renderUsingSubImages:(void*)arg1 withBounds:(CGRect)arg2 matrix:(CGAffineTransform)arg3 function:(void*)arg4 info:(void*)arg5 extent:(CGRect)arg6 destinationFormat:(unsigned)arg7 surface:(IOSurfaceRef)arg8 ;
-(char)renderUsingSubImages:(void*)arg1 withBounds:(CGRect)arg2 matrix:(CGAffineTransform)arg3 function:(void*)arg4 info:(void*)arg5 extent:(CGRect)arg6 destinationFormat:(unsigned)arg7 ;
-(void)renderWithBounds:(CGRect)arg1 matrix:(CGAffineTransform)arg2 function:(/*function pointer*/void*)arg3 info:(void*)arg4 surface:(IOSurfaceRef)arg5 format:(int)arg6 ;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(char)renderOnPrivateWorkerThread;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(CGLayerRef)createCGLayerWithSize:(CGSize)arg1 info:(CFDictionaryRef)arg2 ;
-(void)render:(id)arg1 toIOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 target:(unsigned)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(char)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(CGRect*)arg4 ;
-(id)imageByRenderingInRect:(CGRect)arg1 format:(int)arg2 callback:(void*)arg3 data:(void*)arg4 options:(id)arg5 ;
-(unsigned)passes;
-(void)waitImage:(id)arg1 ;
-(BOOL)testImage:(id)arg1 ;
-(void)collect:(char)arg1 ;
-(id)_rectsForBounds:(id)arg1 bounds:(CGRect)arg2 bytesPerPixel:(unsigned long long)arg3 ;
-(id)_imageSetForImage:(id)arg1 bytesPerPixel:(unsigned long long)arg2 ;
-(id)descriptionForDebugger;
-(void)render:(id)arg1 ;
-(void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(id)flatten:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(CGColorSpaceRef)_outputColorSpace;
-(int)vendorID;
-(float)progress;
-(void)setOwner:(id)arg1 ;
-(id)owner;
@end

