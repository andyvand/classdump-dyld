/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCThreadPatch.h>

@class QCStringPort, QCBooleanPort, QCStructurePort;

@interface QCSpotlight : QCThreadPatch {

	QCStringPort* inputQuery;
	QCBooleanPort* inputSignal;
	QCStructurePort* outputFiles;
	QCBooleanPort* outputSignal;
	char _keylessStructures;
	char _lastSignal;
	char _rerun;
	char _gathering;

}
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_matadorThread:(id)arg1 ;
-(void)__finish:(id)arg1 ;
@end

