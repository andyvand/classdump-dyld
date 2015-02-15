/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKBatchChangeInfo.h>

@class NSDateComponents;

@interface EKRecurrenceChangeInfo : EKBatchChangeInfo {

	long long _changeType;
	NSDateComponents* _offset;

}

@property (assign) long long changeType;                   //@synthesize changeType=_changeType - In the implementation block
@property (retain) NSDateComponents * offset;              //@synthesize offset=_offset - In the implementation block
-(NSDateComponents *)offset;
-(id)updatedIdentifier:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(NSDateComponents *)arg1 ;
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
@end

