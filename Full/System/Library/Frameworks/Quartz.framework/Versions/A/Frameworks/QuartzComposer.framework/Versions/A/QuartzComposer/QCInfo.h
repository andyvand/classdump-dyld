/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCNumberPort, QCBooleanPort;

@interface QCInfo : QCPatch {

	QCNumberPort* outputVersion;
	QCBooleanPort* outputSafeMode;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(char)setup:(id)arg1 ;
@end

