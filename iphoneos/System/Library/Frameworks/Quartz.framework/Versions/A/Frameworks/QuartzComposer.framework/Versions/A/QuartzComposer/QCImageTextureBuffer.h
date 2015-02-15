/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageBuffer.h>

@class QCCGLContext;

@interface QCImageTextureBuffer : QCImageBuffer {

	unsigned _target;
	unsigned long long _levels;
	unsigned long long _samples;
	unsigned _name;
	double _matrix[16];
	QCCGLContext* _context;
	unsigned long long _flags;
	unsigned long long _depth;
	unsigned _frameBuffer;
	unsigned _renderBuffer;
	unsigned long long _virtualScreen;
	QCCGLContext* _updateContext;
	int _saveBuffer;
	int _saveViewport[4];
	char _purgeable;
	char _saveScissor;
	unsigned long long _saveVirtualScreen;
	void** _unused2[3];

}
+(id)supportedRenderFormatsForContext:(id)arg1 ;
+(id)supportedUploadFormatsForContext:(id)arg1 ;
+(id)_supportedPixelFormatsForContext:(id)arg1 compatibility:(unsigned long long)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)context;
-(unsigned)name;
-(unsigned)target;
-(const double*)matrix;
-(char)purgeable;
-(char)setPurgeable:(char)arg1 ;
-(void)willRecycleResource:(id)arg1 ;
-(unsigned long long)virtualScreen;
-(id)initWithTextureName:(unsigned)arg1 releaseCallback:(/*function pointer*/void*)arg2 releaseInfo:(void*)arg3 context:(id)arg4 format:(id)arg5 target:(unsigned)arg6 width:(unsigned)arg7 height:(unsigned)arg8 mipmapLevels:(unsigned)arg9 flipped:(char)arg10 colorSpace:(CGColorSpaceRef)arg11 options:(id)arg12 ;
-(id)beginRenderTexture:(char)arg1 colorSpace:(CGColorSpaceRef)arg2 virtualScreen:(unsigned long long)arg3 ;
-(void)clearBuffer;
-(void)drawTextureWithContext:(id)arg1 inRect:(CGRect)arg2 ;
-(void)endRenderTexture;
-(char)downloadTextureWithBounds:(CGRect)arg1 toAddress:(void*)arg2 bytesPerRow:(unsigned long long)arg3 ;
-(unsigned long long)levels;
-(void)bindTextureToCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 applyInternalMatrix:(char)arg3 externalMatrix:(double*)arg4 savedState:(SCD_Struct_QC18*)arg5 ;
-(void)unbindTextureFromCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 savedState:(SCD_Struct_QC18*)arg3 ;
-(id)copyWithZone_GCCacheResource:(NSZone*)arg1 ;
-(id)initWithContext:(id)arg1 format:(id)arg2 target:(unsigned)arg3 pixelsWide:(unsigned long long)arg4 pixelsHigh:(unsigned long long)arg5 options:(id)arg6 ;
-(void)endRenderTextureAndFinish:(char)arg1 ;
-(void)bindTextureToCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 applyInternalMatrix:(char)arg3 externalMatrix:(double*)arg4 savedState:(SCD_Struct_QC18*)arg5 shadowBuffer:(char)arg6 enableTexture:(char)arg7 ;
-(void)unbindTextureFromCGLContext:(CGLContextObject*)arg1 textureUnit:(unsigned)arg2 savedState:(SCD_Struct_QC18*)arg3 shadowBuffer:(char)arg4 enableTexture:(char)arg5 ;
-(void)bindTextureToContext:(id)arg1 textureUnit:(unsigned)arg2 applyMatrix:(char)arg3 savedState:(SCD_Struct_QC18*)arg4 ;
-(void)unbindTextureFromContext:(id)arg1 textureUnit:(unsigned)arg2 savedState:(SCD_Struct_QC18*)arg3 ;
-(id)initWithTextureName:(unsigned)arg1 releaseCallback:(/*function pointer*/void*)arg2 releaseInfo:(void*)arg3 context:(id)arg4 format:(id)arg5 target:(unsigned)arg6 flipped:(char)arg7 colorSpace:(CGColorSpaceRef)arg8 options:(id)arg9 ;
-(id)pixelBufferRepresentation;
-(void)_updateMatrix;
-(void)_finalize_QCImageTextureBuffer;
-(char)beginUploadTexture:(char)arg1 colorSpace:(CGColorSpaceRef)arg2 virtualScreen:(unsigned long long)arg3 ;
-(char)beginUploadTexture:(char)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(char)uploadTextureWithBaseAddress:(void*)arg1 releaseCallback:(/*function pointer*/void*)arg2 releaseInfo:(void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(void)endUploadTexture;
-(id)beginRenderTexture:(char)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(unsigned long long)_levels;
-(unsigned long long)_depth;
-(unsigned)_renderBuffer;
-(char)_downloadTextureWithBounds:(CGRect)arg1 usingPixelFormat:(id)arg2 toAddress:(void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(void)setWrappingMode:(int)arg1 ;
-(void)setFilteringMode:(int)arg1 ;
-(void)setAnisotropy:(float)arg1 ;
-(char)isValidOnContext:(id)arg1 ;
-(void)_unsetRenderStates;
-(void)_setRenderStates;
@end
