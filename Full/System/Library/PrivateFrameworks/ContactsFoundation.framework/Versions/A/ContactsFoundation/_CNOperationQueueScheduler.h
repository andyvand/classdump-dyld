/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/CNScheduler.h>

@class NSOperationQueue, NSString;

@interface _CNOperationQueueScheduler : NSObject <CNScheduler> {

	NSOperationQueue* _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end

