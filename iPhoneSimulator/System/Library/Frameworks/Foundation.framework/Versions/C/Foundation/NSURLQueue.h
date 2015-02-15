/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned long long count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	char waitOnTake;
	char _pad1;
	char _pad2;
	char _pad3;

}
+(id)newNode;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peekAt:(unsigned long long)arg1 ;
-(long long)indexOf:(id)arg1 ;
-(char)waitOnTake;
-(void)setWaitOnTake:(char)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(void)clear;
-(char)remove:(id)arg1 ;
-(char)isEmpty;
-(id)peek;
@end

