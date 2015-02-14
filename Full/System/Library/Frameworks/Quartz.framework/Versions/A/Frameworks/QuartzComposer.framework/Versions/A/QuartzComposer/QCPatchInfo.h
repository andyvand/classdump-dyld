/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCStringPort, QCStructurePort, NSString;

@interface QCPatchInfo : QCPatch {

	QCStringPort* inputPath;
	QCStructurePort* outputMetadata;
	QCStructurePort* outputInputList;
	QCStructurePort* outputOutputList;
	NSString* _compositionLocation;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)_setComposition:(id)arg1 context:(id)arg2 ;
@end

