/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSDate, NSNumber, NSString, NSArray;

@interface SACalendarEventSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSURL * eventId; 
@property (nonatomic,retain) NSNumber * limit; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSArray * participants; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)eventSearch;
+(id)eventSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSURL *)eventId;
-(void)setEventId:(NSURL *)arg1 ;
-(NSNumber *)limit;
-(void)setLimit:(NSNumber *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDate *)endDate;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

