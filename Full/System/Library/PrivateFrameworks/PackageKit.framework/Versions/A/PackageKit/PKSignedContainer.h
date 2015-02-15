/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class PKArchive, NSDictionary;

@interface PKSignedContainer : NSObject {

	PKArchive* _archive;
	NSDictionary* _metadata;
	char _performsAssessment;

}

@property (assign) char performsAssessmentIfNeeded;              //@synthesize performsAssessment=_performsAssessment - In the implementation block
-(id)initForReadingFromContainerAtURL:(id)arg1 error:(id*)arg2 ;
-(id)startUnarchivingAtPath:(id)arg1 notifyOnQueue:(dispatch_queue_sRef)arg2 progress:(/*^block*/id)arg3 finish:(/*^block*/id)arg4 ;
-(id)_archive;
-(id)_initCommon;
-(char)_assessURL:(id)arg1 withQuarantineFlags:(unsigned)arg2 ;
-(char)_setAssessment:(char)arg1 ofItemAtPath:(id)arg2 ;
-(char)performsAssessmentIfNeeded;
-(char)_assessContainerReturningShouldFlagContents:(char*)arg1 ;
-(void)_startUnarchivingAtPath:(id)arg1 cancelHandler:(id)arg2 notifyOnQueue:(dispatch_queue_sRef)arg3 progress:(/*^block*/id)arg4 finish:(/*^block*/id)arg5 ;
-(void)setPerformsAssessmentIfNeeded:(char)arg1 ;
-(void)dealloc;
-(void)cancelOperation:(id)arg1 ;
@end

