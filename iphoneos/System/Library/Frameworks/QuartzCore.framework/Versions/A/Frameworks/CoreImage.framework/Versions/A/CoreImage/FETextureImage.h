/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/FEImage.h>

@class NSMapTable;

@interface FETextureImage : FEImage {

	unsigned long long texture_id;
	dispatch_queue_sRef proxiesIsolationQueue;
	NSMapTable* proxies;
	CGColorSpaceRef space;
	unsigned target : 8;

}
-(fe_texture_object_struct*)_createTextureWithContext:(id)arg1 bounds:(CGRect*)arg2 target:(unsigned)arg3 wrapMode:(unsigned)arg4 filterMode:(unsigned)arg5 buffer:(id*)arg6 ;
-(CGColorSpaceRef)colorSpaceForContext:(id)arg1 ;
-(fe_bitmap_struct*)getStaticBitmap;
-(void)determineFormatUsingContext:(id)arg1 ;
-(id)initWithOpenGLTexture:(unsigned long long)arg1 textureFormat:(FEFormat)arg2 textureTarget:(int)arg3 size:(CGSize)arg4 options:(const fe_params_struct*)arg5 ;
-(void)finalize;
-(void)dealloc;
@end

