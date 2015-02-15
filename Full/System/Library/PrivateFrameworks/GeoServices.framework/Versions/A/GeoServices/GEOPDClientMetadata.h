/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray, GEOLatLng;

@interface GEOPDClientMetadata : PBCodable <NSCopying> {

	NSString* _deviceCountryCode;
	NSString* _deviceDisplayLocale;
	NSMutableArray* _deviceInstalledKeyboardLocales;
	NSString* _deviceKeyboardLocale;
	GEOLatLng* _deviceLocation;
	NSString* _deviceSpokenLocale;
	unsigned _timeSinceMapEnteredForeground;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) char hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                 //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) char hasDeviceLocation; 
@property (nonatomic,retain) GEOLatLng * deviceLocation;                                   //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) char hasDeviceDisplayLocale; 
@property (nonatomic,retain) NSString * deviceDisplayLocale;                               //@synthesize deviceDisplayLocale=_deviceDisplayLocale - In the implementation block
@property (nonatomic,readonly) char hasDeviceKeyboardLocale; 
@property (nonatomic,retain) NSString * deviceKeyboardLocale;                              //@synthesize deviceKeyboardLocale=_deviceKeyboardLocale - In the implementation block
@property (nonatomic,readonly) char hasDeviceSpokenLocale; 
@property (nonatomic,retain) NSString * deviceSpokenLocale;                                //@synthesize deviceSpokenLocale=_deviceSpokenLocale - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceInstalledKeyboardLocales;              //@synthesize deviceInstalledKeyboardLocales=_deviceInstalledKeyboardLocales - In the implementation block
@property (assign,nonatomic) char hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground;                       //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)setDeviceLocation:(GEOLatLng *)arg1 ;
-(char)hasDeviceCountryCode;
-(char)hasDeviceLocation;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(char)arg1 ;
-(char)hasTimeSinceMapEnteredForeground;
-(NSString *)deviceCountryCode;
-(GEOLatLng *)deviceLocation;
-(unsigned)timeSinceMapEnteredForeground;
-(void)setDeviceDisplayLocale:(NSString *)arg1 ;
-(void)setDeviceKeyboardLocale:(NSString *)arg1 ;
-(void)setDeviceSpokenLocale:(NSString *)arg1 ;
-(void)setDeviceInstalledKeyboardLocales:(NSMutableArray *)arg1 ;
-(void)addDeviceInstalledKeyboardLocale:(id)arg1 ;
-(unsigned long long)deviceInstalledKeyboardLocalesCount;
-(void)clearDeviceInstalledKeyboardLocales;
-(id)deviceInstalledKeyboardLocaleAtIndex:(unsigned long long)arg1 ;
-(char)hasDeviceDisplayLocale;
-(char)hasDeviceKeyboardLocale;
-(char)hasDeviceSpokenLocale;
-(NSString *)deviceDisplayLocale;
-(NSString *)deviceKeyboardLocale;
-(NSString *)deviceSpokenLocale;
-(NSMutableArray *)deviceInstalledKeyboardLocales;
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

