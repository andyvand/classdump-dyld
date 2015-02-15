/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionIncomingReplyBlockTable : NSObject {

	CFDictionaryRef _replyTable;
	int _replyTableLock;
	unsigned long long _sequence;

}
-(unsigned long long)sequenceForIncomingReplyBlockWithProgress:(id)arg1 cleanupBlock:(/*^block*/id)arg2 ;
-(char)removeIncomingReplyBlockForSequence:(unsigned long long)arg1 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
-(void)cleanupIncomingReplyBlocks;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

