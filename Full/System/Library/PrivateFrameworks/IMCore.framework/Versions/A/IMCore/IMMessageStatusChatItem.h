/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class NSDate, NSString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem {

	long long _statusType;
	NSDate* _time;
	long long _expireStatusType;
	NSDate* _timeAdded;
	NSDate* _timeStale;
	unsigned long long _count;

}

@property (nonatomic,readonly) long long messageStatusType; 
@property (nonatomic,readonly) long long statusType;                     //@synthesize statusType=_statusType - In the implementation block
@property (nonatomic,readonly) char isFromMe; 
@property (nonatomic,retain,readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain,readonly) NSString * errorText; 
@property (nonatomic,readonly) long long expireStatusType;               //@synthesize expireStatusType=_expireStatusType - In the implementation block
-(NSDate *)time;
-(id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5 ;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
-(NSString *)errorText;
-(long long)messageStatusType;
-(id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 ;
-(id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3 ;
-(long long)expireStatusType;
-(char)isFromMe;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)statusType;
@end

