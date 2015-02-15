/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCOpenGLPort_Color, QCOpenGLPort_Image, QCOpenGLPort_Blending, QCOpenGLPort_ZBuffer, QCOpenGLPort_Culling;

@interface QCTeapot : QCPatch {

	QCNumberPort* inputX;
	QCNumberPort* inputY;
	QCNumberPort* inputZ;
	QCNumberPort* inputRX;
	QCNumberPort* inputRY;
	QCNumberPort* inputRZ;
	QCNumberPort* inputScale;
	QCOpenGLPort_Color* inputColor;
	QCOpenGLPort_Image* inputImage;
	QCOpenGLPort_Blending* inputBlending;
	QCOpenGLPort_ZBuffer* inputZBuffer;
	QCOpenGLPort_Culling* inputCulling;
	unsigned _displayListID;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end

