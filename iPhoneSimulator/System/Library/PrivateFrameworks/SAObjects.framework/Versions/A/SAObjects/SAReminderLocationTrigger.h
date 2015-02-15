/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSURL, SALocation, NSString;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (nonatomic,copy) NSURL * contactIdentifier; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * timing; 
+(id)locationTrigger;
+(id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)timing;
-(void)setTiming:(NSString *)arg1 ;
-(NSURL *)contactIdentifier;
-(id)encodedClassName;
-(void)setContactIdentifier:(NSURL *)arg1 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)groupIdentifier;
@end

