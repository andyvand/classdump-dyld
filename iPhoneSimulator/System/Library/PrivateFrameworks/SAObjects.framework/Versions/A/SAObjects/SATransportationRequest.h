/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SACalendar, SALocation, NSNumber, NSString;

@interface SATransportationRequest : SADomainObject

@property (nonatomic,retain) SACalendar * arrivalDate; 
@property (nonatomic,retain) SALocation * arrivalLocation; 
@property (nonatomic,copy) NSNumber * cost; 
@property (nonatomic,copy) NSString * currency; 
@property (nonatomic,retain) SACalendar * departureDate; 
@property (nonatomic,retain) SALocation * departureLocation; 
@property (nonatomic,copy) NSString * medium; 
@property (nonatomic,copy) NSNumber * passengerCount; 
@property (nonatomic,copy) NSString * serviceLevel; 
@property (nonatomic,copy) NSString * serviceName; 
+(id)request;
+(id)requestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)serviceName;
-(void)setDepartureDate:(SACalendar *)arg1 ;
-(void)setArrivalDate:(SACalendar *)arg1 ;
-(SACalendar *)departureDate;
-(SACalendar *)arrivalDate;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(SALocation *)arrivalLocation;
-(void)setArrivalLocation:(SALocation *)arg1 ;
-(SALocation *)departureLocation;
-(void)setDepartureLocation:(SALocation *)arg1 ;
-(NSString *)medium;
-(void)setMedium:(NSString *)arg1 ;
-(NSNumber *)passengerCount;
-(void)setPassengerCount:(NSNumber *)arg1 ;
-(NSString *)serviceLevel;
-(void)setServiceLevel:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setCost:(NSNumber *)arg1 ;
-(NSNumber *)cost;
@end

