/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCRenderingPatch.h>

@class QCNumberPort, QCOpenGLPort_Color, QCOpenGLPort_Image, QCOpenGLPort_Blending, QCOpenGLPort_ZBuffer, QCOpenGLPort_Culling;

@interface QCCube : QCRenderingPatch {

	QCNumberPort* inputX;
	QCNumberPort* inputY;
	QCNumberPort* inputZ;
	QCNumberPort* inputRX;
	QCNumberPort* inputRY;
	QCNumberPort* inputRZ;
	QCNumberPort* inputWidth;
	QCNumberPort* inputHeight;
	QCNumberPort* inputDepth;
	QCOpenGLPort_Color* inputColorFront;
	QCOpenGLPort_Image* inputImageFront;
	QCOpenGLPort_Color* inputColorLeft;
	QCOpenGLPort_Image* inputImageLeft;
	QCOpenGLPort_Color* inputColorRight;
	QCOpenGLPort_Image* inputImageRight;
	QCOpenGLPort_Color* inputColorBack;
	QCOpenGLPort_Image* inputImageBack;
	QCOpenGLPort_Color* inputColorTop;
	QCOpenGLPort_Image* inputImageTop;
	QCOpenGLPort_Color* inputColorBottom;
	QCOpenGLPort_Image* inputImageBottom;
	QCOpenGLPort_Blending* inputBlending;
	QCOpenGLPort_ZBuffer* inputZBuffer;
	QCOpenGLPort_Culling* inputCulling;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)allowsScissors:(id)arg1 ;
@end

