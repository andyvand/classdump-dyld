/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCImagePort, QCIndexPort, QCNumberPort;

@interface QCImageTexturingProperties : QCPatch {

	QCImagePort* inputImage;
	QCIndexPort* inputTarget;
	QCIndexPort* inputMipmaps;
	QCNumberPort* inputScaleX;
	QCNumberPort* inputScaleY;
	QCNumberPort* inputRotate;
	QCNumberPort* inputTranslateX;
	QCNumberPort* inputTranslateY;
	QCImagePort* outputImage;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(id)initWithIdentifier:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end

