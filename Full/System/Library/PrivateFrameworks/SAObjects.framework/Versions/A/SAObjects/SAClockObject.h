/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * cityName; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * countryName; 
@property (nonatomic,copy) NSString * timezoneId; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(NSNumber *)alCityId;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(NSString *)cityName;
-(void)setCityName:(NSString *)arg1 ;
-(NSString *)unlocalizedCityName;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

