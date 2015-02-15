/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class NSSet, NSURL;

@interface CalPropFindSynchronousTask : CalSingleSynchronousTask {

	NSSet* _responses;
	NSURL* _lastRedirectURL;

}

@property (retain) NSSet * responses;                    //@synthesize responses=_responses - In the implementation block
@property (retain) NSURL * lastRedirectURL;              //@synthesize lastRedirectURL=_lastRedirectURL - In the implementation block
-(void)dealloc;
-(NSSet *)responses;
-(void)executePropFindTask:(id)arg1 usingTaskManager:(id)arg2 ;
-(NSURL *)lastRedirectURL;
-(void)_setCompletionBlockOnTask:(id)arg1 ;
-(void)setResponses:(NSSet *)arg1 ;
-(void)setLastRedirectURL:(NSURL *)arg1 ;
@end
