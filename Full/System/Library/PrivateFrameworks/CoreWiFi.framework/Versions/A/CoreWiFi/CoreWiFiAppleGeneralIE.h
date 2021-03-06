/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:09 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFiIE.h>

@class NSNumber, NSString;

@interface CoreWiFiAppleGeneralIE : CoreWiFiIE {

	long long version;
	NSNumber* AppleProductID;
	NSString* AppleProductName;
	char hasInterferenceRobustness;
	char isUnconfigured;
	char hasFoundRemotePPPoEServer;
	char isGuestNetwork;
	char hasLegacyWDS;
	char isWPSCapable;
	char isWPSActive;
	char isSAWCapable;
	char isWoWCapable;
	char hasRestoreProfiles;

}

@property (assign,nonatomic) long long version; 
@property (nonatomic,retain) NSNumber * AppleProductID; 
@property (nonatomic,retain) NSString * AppleProductName; 
@property (assign,nonatomic) char hasInterferenceRobustness; 
@property (assign,nonatomic) char isUnconfigured; 
@property (assign,nonatomic) char hasFoundRemotePPPoEServer; 
@property (assign,nonatomic) char isGuestNetwork; 
@property (assign,nonatomic) char hasLegacyWDS; 
@property (assign,nonatomic) char isWPSCapable; 
@property (assign,nonatomic) char isWPSActive; 
@property (assign,nonatomic) char isSAWCapable; 
@property (assign,nonatomic) char isWoWCapable; 
@property (assign,nonatomic) char hasRestoreProfiles; 
+(id)stringValueForProductID:(unsigned char)arg1 ;
-(id)initWithIE:(id)arg1 ;
-(char)parseIE:(id*)arg1 ;
-(char)generateIE:(id*)arg1 ;
-(NSNumber *)AppleProductID;
-(void)setAppleProductID:(NSNumber *)arg1 ;
-(NSString *)AppleProductName;
-(void)setAppleProductName:(NSString *)arg1 ;
-(char)hasInterferenceRobustness;
-(void)setHasInterferenceRobustness:(char)arg1 ;
-(char)isUnconfigured;
-(void)setIsUnconfigured:(char)arg1 ;
-(char)hasFoundRemotePPPoEServer;
-(void)setHasFoundRemotePPPoEServer:(char)arg1 ;
-(char)isGuestNetwork;
-(void)setIsGuestNetwork:(char)arg1 ;
-(char)hasLegacyWDS;
-(void)setHasLegacyWDS:(char)arg1 ;
-(char)isWPSCapable;
-(void)setIsWPSCapable:(char)arg1 ;
-(char)isWPSActive;
-(void)setIsWPSActive:(char)arg1 ;
-(char)isSAWCapable;
-(void)setIsSAWCapable:(char)arg1 ;
-(char)isWoWCapable;
-(void)setIsWoWCapable:(char)arg1 ;
-(char)hasRestoreProfiles;
-(void)setHasRestoreProfiles:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
@end

