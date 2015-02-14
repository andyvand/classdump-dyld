/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIContextImpl.h>

@class FEContext;

@interface CIOpenGLContextImpl : CIContextImpl {

	void* _glContext;
	void* _glPixelFormat;
	const void* _accelTable;
	FEContext* _feContext;
	int _screen;
	unsigned _framebuffer;
	fe_bitmap_struct* _bitmaps[2];
	int _bitmapIndex;
	int _textureCount[2];
	unsigned _textureTarget[2];
	unsigned* _textures[2];
	unsigned _RECTtextures[2];
	int _textureTileSize;
	float _maxRECT;
	unsigned _destroyed : 1;
	unsigned _noAccel : 1;
	unsigned _isAccel : 1;
	unsigned _hasRECT : 1;
	unsigned _hasTexRange : 1;
	unsigned _releaseContextOnInvalidate : 1;
	unsigned isBackedByCGLContext : 1;
	SCD_Struct_CI37 _displayReconfigurationCount;
	opaque_pthread_mutex_t _renderMutex;

}
-(void)renderWithBounds:(CGRect)arg1 matrix:(CGAffineTransform)arg2 function:(/*function pointer*/void*)arg3 info:(void*)arg4 ;
-(id)_feContext;
-(id)_lockfeContext;
-(void)_unlockfeContext;
-(void)updateExtensions;
-(void)updateContext;
-(void)render:(id)arg1 toIOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 target:(unsigned)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)imageByRenderingInRect:(CGRect)arg1 format:(int)arg2 callback:(void*)arg3 data:(void*)arg4 options:(id)arg5 ;
-(id)descriptionForDebugger;
-(id)initWithCGLSContext:(void*)arg1 pixelFormat:(void*)arg2 options:(id)arg3 ;
-(void)_freeTextures:(int)arg1 ;
-(void)_freeBitmaps;
-(id)createAccelContext;
-(id)createSoftwareContext;
-(void)decrementDisplayReconfiguration;
-(void)_render:(id)arg1 to420IOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)_render:(id)arg1 to422IOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)incrementDisplayReconfiguration;
-(void)finalize;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
-(void)setOwner:(id)arg1 ;
-(id)initWithCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 options:(id)arg3 ;
@end

