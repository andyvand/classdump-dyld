/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, SALocation, NSString;

@interface SATransportationScheduleStop : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * arrivalDate; 
@property (nonatomic,retain) SACalendar * departureDate; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * medium; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSString * serviceLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scheduleStop;
+(id)scheduleStopWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDepartureDate:(SACalendar *)arg1 ;
-(void)setArrivalDate:(SACalendar *)arg1 ;
-(SACalendar *)departureDate;
-(SACalendar *)arrivalDate;
-(id)encodedClassName;
-(NSString *)medium;
-(void)setMedium:(NSString *)arg1 ;
-(NSString *)serviceLevel;
-(void)setServiceLevel:(NSString *)arg1 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

