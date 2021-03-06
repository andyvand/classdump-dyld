/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCImagePort, QCImagePixelBuffer;

@interface QCHotZone : QCPatch {

	QCNumberPort* inputHitX;
	QCNumberPort* inputHitY;
	QCNumberPort* inputX;
	QCNumberPort* inputY;
	QCNumberPort* inputZ;
	QCNumberPort* inputRX;
	QCNumberPort* inputRY;
	QCNumberPort* inputRZ;
	QCNumberPort* inputWidth;
	QCNumberPort* inputHeight;
	QCImagePort* inputMask;
	QCNumberPort* outputHit;
	QCNumberPort* outputZoneX;
	QCNumberPort* outputZoneY;
	QCNumberPort* outputMaskX;
	QCNumberPort* outputMaskY;
	QCNumberPort* outputTopLeftX;
	QCNumberPort* outputTopLeftY;
	QCNumberPort* outputTopRightX;
	QCNumberPort* outputTopRightY;
	QCNumberPort* outputBottomLeftX;
	QCNumberPort* outputBottomLeftY;
	QCNumberPort* outputBottomRightX;
	QCNumberPort* outputBottomRightY;
	QCImagePixelBuffer* _pixelBuffer;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end

