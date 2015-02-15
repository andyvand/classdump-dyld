/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCStructurePort, QCVirtualPort, QCPort;

@interface QCStructureMember : QCPatch {

	QCStructurePort* inputStructure;
	QCVirtualPort* outputMember;
	QCPort* _inPort;

}
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(char)isSafe;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_forwardRenderingFlag;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
@end

