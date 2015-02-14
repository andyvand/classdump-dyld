/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Backup/Backup-Structs.h>
@class BU_GVInterpolator;

@interface BU_VortexGL : NSObject {

	CGLContextObject* fDrawContext;
	CGLContextObject* fBufferContext;
	CGLPBufferObjectRef fPixelBuffer;
	CGLPBufferObjectRef fPixelBuffer2;
	CGLContextObject* fSharedContext;
	CGRect fViewport;
	unsigned long long fNumClouds;
	BOOL fWasEnabled;
	int fSaveUnit;
	int fSaveName;
	double fTime;
	unsigned long long fFrames;
	double fSpeed;
	double fTimeInput0;
	double fTimeInput1;
	double fTimeOutput0;
	double fTimeOutput1;
	BOOL fOutput0Defined;
	BOOL fOutput1Defined;
	double flfoPeriod;
	double flfoAmplitude;
	double flfoPhase;
	double flfoOffset;
	double fRadius;
	double fPower;
	double fRadians;
	double fFade;
	unsigned fCloudTexture;
	unsigned fBufferTexture;
	unsigned fVortexTexture;
	BU_GVInterpolator* fPosX;
	BU_GVInterpolator* fPosY;
	BU_GVInterpolator* fPosZ;
	BU_GVInterpolator* fAlpha;
	BU_GVInterpolator* fWidth;
	BU_GVInterpolator* fInt1;
	BU_GVInterpolator* fInt2;
	void* fProgramObject;
	BOOL _cacheReady;
	CGLContextObject* fVortexCacheContext;
	CGLPBufferObjectRef fVortexCacheBuffer;
	void* fRemapCacheProgramObject;
	unsigned fVortexCacheTexture;
	int fCurGLVirtualScreen;

}
+(BOOL)isCompliantWithHardwareCapabilities;
-(void)dealloc;
-(void)setSpeed:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(CGLContextObject*)arg2 pixelFormat:(CGLPixelFormatObjectRef)arg3 inputs:(id)arg4 cglError:(int*)arg5 glError:(unsigned*)arg6 ;
-(void)_setTextureOnContext:(CGLContextObject*)arg1 texture:(unsigned)arg2 unitName:(unsigned)arg3 ;
-(void)_unsetTextureOnContext:(CGLContextObject*)arg1 texture:(unsigned)arg2 unitName:(unsigned)arg3 ;
-(void)_initInterpolators;
-(int)_setupPbufferWithSharedContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 size:(CGSize)arg3 pbuffer:(CGLPBufferObject*)arg4 pbufferContext:(CGLContextObject*)arg5 ;
-(void)_configureViewportForContext:(CGLContextObject*)arg1 withFrame:(CGRect)arg2 useOrthoProjection:(BOOL)arg3 cglError:(int*)arg4 glError:(unsigned*)arg5 ;
-(void)_setTargetTexture:(unsigned)arg1 onContext:(CGLContextObject*)arg2 forPbuffer:(CGLPBufferObjectRef)arg3 cglError:(int*)arg4 glError:(unsigned*)arg5 ;
-(BOOL)_uploadTexture:(void*)arg1 size:(CGSize)arg2 texture:(unsigned)arg3 context:(CGLContextObject*)arg4 ;
-(void*)_createGLSLProgramWithVertexShader:(id)arg1 fragmentShader:(id)arg2 inputValues:(id)arg3 ;
-(void)drawVortex;
-(void)drawCachedVortex;
-(double)_LFOTime:(double)arg1 ;
-(void)setRadians:(double)arg1 ;
-(void)setPower:(double)arg1 ;
-(void)setFade:(double)arg1 ;
-(unsigned)vortexTexture;
-(void)renderAtTime:(double)arg1 ;
-(void)cleanup:(CGLContextObject*)arg1 ;
-(void)setRadius:(double)arg1 ;
@end

