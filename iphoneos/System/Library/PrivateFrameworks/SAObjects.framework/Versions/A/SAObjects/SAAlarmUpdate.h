/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSNumber, NSString;

@interface SAAlarmUpdate : SADomainCommand

@property (nonatomic,copy) NSArray * addedFrequency; 
@property (nonatomic,copy) NSURL * alarmId; 
@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSArray * removedFrequency; 
+(id)updateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)update;
-(NSNumber *)enabled;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSURL *)alarmId;
-(void)setAlarmId:(NSURL *)arg1 ;
-(NSArray *)addedFrequency;
-(void)setAddedFrequency:(NSArray *)arg1 ;
-(NSArray *)removedFrequency;
-(void)setRemovedFrequency:(NSArray *)arg1 ;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSNumber *)hour;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)minute;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSString *)label;
-(id)groupIdentifier;
@end

