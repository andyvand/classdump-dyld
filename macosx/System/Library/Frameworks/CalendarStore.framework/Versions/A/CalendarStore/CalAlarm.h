/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <CalendarStore/NSCopying.h>

@class NSString, NSURL, NSDate;

@interface CalAlarm : NSObject <NSCopying> {

	id _objectID;
	void* _reserved;
	NSString* _action;
	NSString* _sound;
	NSString* _emailAddress;
	NSURL* _url;
	double _relativeTrigger;
	NSDate* _absoluteTrigger;

}

@property (copy) NSString * action;                     //@synthesize action=_action - In the implementation block
@property (copy) NSString * sound;                      //@synthesize sound=_sound - In the implementation block
@property (copy) NSString * emailAddress;               //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (assign) double relativeTrigger;              //@synthesize relativeTrigger=_relativeTrigger - In the implementation block
@property (copy) NSDate * absoluteTrigger;              //@synthesize absoluteTrigger=_absoluteTrigger - In the implementation block
+(id)alarm;
-(id)triggerDateRelativeTo:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(void)setAction:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)action;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)sound;
-(void)setAcknowledged:(id)arg1 ;
-(id)relatedTo;
-(id)acknowledged;
-(void)setRelatedTo:(id)arg1 ;
-(double)relativeTrigger;
-(NSDate *)absoluteTrigger;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setAbsoluteTrigger:(NSDate *)arg1 ;
-(void)setRelativeTrigger:(double)arg1 ;
-(void)_createReservedDictionaryIfNeeded;
@end

