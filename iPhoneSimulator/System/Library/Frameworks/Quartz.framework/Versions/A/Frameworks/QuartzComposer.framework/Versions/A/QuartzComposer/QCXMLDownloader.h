/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCDownloadPatch.h>

@class QCStringPort, QCBooleanPort, QCStructurePort, QCNumberPort;

@interface QCXMLDownloader : QCDownloadPatch {

	QCStringPort* inputURL;
	QCBooleanPort* inputSignal;
	QCStructurePort* outputStructure;
	QCNumberPort* outputProgress;
	QCBooleanPort* outputSignal;
	char _synchronousMode;

}
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(id)inspectorNibNameWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)setup:(id)arg1 ;
-(id)createResourceWithDownloadedData:(id)arg1 sourceURL:(id)arg2 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(char)synchronousMode;
-(void)setSynchronousMode:(char)arg1 ;
@end

