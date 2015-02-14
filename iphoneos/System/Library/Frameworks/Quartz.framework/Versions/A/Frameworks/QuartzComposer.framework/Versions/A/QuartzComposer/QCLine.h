/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCRenderingPatch.h>

@class QCNumberPort, QCColorPort, QCOpenGLPort_ZBuffer;

@interface QCLine : QCRenderingPatch {

	QCNumberPort* inputStartX;
	QCNumberPort* inputStartY;
	QCNumberPort* inputStartZ;
	QCColorPort* inputStartColor;
	QCNumberPort* inputEndX;
	QCNumberPort* inputEndY;
	QCNumberPort* inputEndZ;
	QCColorPort* inputEndColor;
	QCNumberPort* inputLineWidth;
	QCOpenGLPort_ZBuffer* inputZBuffer;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)allowsScissors:(id)arg1 ;
@end

