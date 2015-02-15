/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCBooleanPort, QCIndexPort, QCImagePort, QCPixelFormat, QCImageTextureBuffer, QCCGLContext;

@interface QCRenderInImage : QCPatch {

	QCBooleanPort* inputRender;
	QCIndexPort* inputTarget;
	QCBooleanPort* inputMipmaps;
	QCIndexPort* inputWidth;
	QCIndexPort* inputHeight;
	QCImagePort* outputImage;
	QCPixelFormat* _format;
	char _noDepthBuffer;
	char _noFeedback;
	char _colorCorrection;
	QCPixelFormat* _renderFormat;
	QCImageTextureBuffer* _renderedImage;
	QCImageTextureBuffer* _currentImage;
	QCCGLContext* _activeContext;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
+(char)supportsOptimizedExecutionForIdentifier:(id)arg1 ;
+(char)usesLocalContextForIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(id)pixelFormat;
-(void)setPixelFormat:(id)arg1 ;
-(char)_enabled;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)_executeSubpatches:(double)arg1 arguments:(id)arg2 ;
-(char)executeSubpatches:(double)arg1 arguments:(id)arg2 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(void)_updateRenderFormat:(id)arg1 ;
-(void)setNoDepthBuffer:(char)arg1 ;
-(char)noDepthBuffer;
-(void)setNoFeedback:(char)arg1 ;
-(char)noFeedback;
-(SCD_Struct_QC4)md5WithTime:(double)arg1 arguments:(id)arg2 ;
@end

