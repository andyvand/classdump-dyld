/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString, NSNumber;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * abSources; 
@property (nonatomic,copy) NSString * anchor; 
@property (assign,nonatomic) char censorSpeech; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSNumber * debugFlags; 
@property (nonatomic,copy) NSArray * deviceCapabilities; 
@property (nonatomic,copy) NSString * deviceVersion; 
@property (nonatomic,copy) NSString * firstName; 
@property (assign,nonatomic) char handsFree; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSArray * meCards; 
@property (nonatomic,copy) NSString * osVersion; 
@property (nonatomic,copy) NSArray * parentalRestrictions; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSNumber * storefront; 
@property (nonatomic,copy) NSString * temperatureUnit; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSNumber * twentyFourHourTimeDisplay; 
@property (nonatomic,copy) NSNumber * uiScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAssistantData;
+(id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)uiScale;
-(NSString *)countryCode;
-(NSString *)region;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(char)censorSpeech;
-(void)setCensorSpeech:(char)arg1 ;
-(char)handsFree;
-(void)setHandsFree:(char)arg1 ;
-(NSArray *)abSources;
-(void)setAbSources:(NSArray *)arg1 ;
-(NSNumber *)debugFlags;
-(void)setDebugFlags:(NSNumber *)arg1 ;
-(NSArray *)deviceCapabilities;
-(void)setDeviceCapabilities:(NSArray *)arg1 ;
-(void)setDeviceVersion:(NSString *)arg1 ;
-(NSArray *)meCards;
-(void)setMeCards:(NSArray *)arg1 ;
-(NSArray *)parentalRestrictions;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(NSNumber *)storefront;
-(void)setStorefront:(NSNumber *)arg1 ;
-(NSString *)temperatureUnit;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(NSNumber *)twentyFourHourTimeDisplay;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
-(void)setUiScale:(NSNumber *)arg1 ;
-(NSString *)firstName;
-(void)setRegion:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)lastName;
-(NSString *)deviceVersion;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
@end

