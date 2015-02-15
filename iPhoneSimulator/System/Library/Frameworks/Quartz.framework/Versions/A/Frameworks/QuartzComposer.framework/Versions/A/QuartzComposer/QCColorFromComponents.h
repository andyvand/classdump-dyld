/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCColorPort;

@interface QCColorFromComponents : QCPatch {

	QCNumberPort* input1;
	QCNumberPort* input2;
	QCNumberPort* input3;
	QCNumberPort* inputAlpha;
	QCColorPort* outputColor;
	int _mode;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(id)initWithIdentifier:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end
