/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOClientCapabilities : PBCodable <NSCopying> {

	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _hardwareModel;
	int _maxManeuverTypeSupported;
	char _internalInstall;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) char hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                    //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) char hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                    //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) char hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel;                      //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign,nonatomic) char hasMaxManeuverTypeSupported; 
@property (assign,nonatomic) int maxManeuverTypeSupported;                  //@synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported - In the implementation block
@property (assign,nonatomic) char hasInternalInstall; 
@property (assign,nonatomic) char internalInstall;                          //@synthesize internalInstall=_internalInstall - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)setHardwareModel:(NSString *)arg1 ;
-(char)hasAppMajorVersion;
-(char)hasAppMinorVersion;
-(char)hasHardwareModel;
-(int)maxManeuverTypeSupported;
-(void)setMaxManeuverTypeSupported:(int)arg1 ;
-(void)setHasMaxManeuverTypeSupported:(char)arg1 ;
-(char)hasMaxManeuverTypeSupported;
-(void)setInternalInstall:(char)arg1 ;
-(void)setHasInternalInstall:(char)arg1 ;
-(char)hasInternalInstall;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(NSString *)hardwareModel;
-(char)internalInstall;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

