/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPAggregateClientOperation.h>

@interface IMAPAggregateFetchUIDOperation : IMAPAggregateClientOperation {

	unsigned _expectedSize;

}

@property (assign) unsigned expectedSize;              //@synthesize expectedSize=_expectedSize - In the implementation block
-(void)setExpectedSize:(unsigned)arg1 ;
-(id)activityString;
-(id)commandTypeString;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(id)initWithOperations:(id)arg1 ;
-(id)initWithOperations:(id)arg1 expectedSize:(unsigned)arg2 ;
-(void)cleanupAfterCompletion;
-(unsigned)expectedSize;
@end

