/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAAlarmSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enabled;
-(NSArray *)frequency;
-(void)setFrequency:(NSArray *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSNumber *)hour;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)minute;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSString *)label;
-(id)groupIdentifier;
@end

