/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSNumber *)alCityId;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(NSString *)unlocalizedCityName;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
@end

