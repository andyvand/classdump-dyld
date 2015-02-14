/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class NSDate, NSString, NSURL;

@interface CalStoreRemoteManagedAlarm : CalStoreRemoteManagedObject {

	NSDate* _absoluteTrigger;
	NSDate* _acknowledged;
	NSString* _action;
	NSString* _emailAddress;
	int _order;
	NSString* _sound;
	NSURL* _url;
	NSString* _relatedTo;
	double _relativeTrigger;

}

@property (nonatomic,retain) NSDate * absoluteTrigger;              //@synthesize absoluteTrigger=_absoluteTrigger - In the implementation block
@property (nonatomic,retain) NSDate * acknowledged;                 //@synthesize acknowledged=_acknowledged - In the implementation block
@property (nonatomic,retain) NSString * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;               //@synthesize emailAddress=_emailAddress - In the implementation block
@property (assign,nonatomic) int order;                             //@synthesize order=_order - In the implementation block
@property (nonatomic,retain) NSString * sound;                      //@synthesize sound=_sound - In the implementation block
@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * relatedTo;                  //@synthesize relatedTo=_relatedTo - In the implementation block
@property (assign,nonatomic) double relativeTrigger;                //@synthesize relativeTrigger=_relativeTrigger - In the implementation block
+(char)supportsSecureCoding;
-(id)triggerDateRelativeTo:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)action;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)sound;
-(int)order;
-(void)setOrder:(int)arg1 ;
-(void)setAcknowledged:(NSDate *)arg1 ;
-(NSString *)relatedTo;
-(NSDate *)acknowledged;
-(void)setRelatedTo:(NSString *)arg1 ;
-(double)relativeTrigger;
-(NSDate *)absoluteTrigger;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(long long)compareAlarmOrder:(id)arg1 ;
-(void)setAbsoluteTrigger:(NSDate *)arg1 ;
-(void)setRelativeTrigger:(double)arg1 ;
@end

