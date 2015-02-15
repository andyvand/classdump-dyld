/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionId;
	NSString* _sourceAppBundleId;
	NSString* _uriScheme;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasSessionId; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionId;                  //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) char hasSourceAppBundleId; 
@property (nonatomic,retain) NSString * sourceAppBundleId;              //@synthesize sourceAppBundleId=_sourceAppBundleId - In the implementation block
@property (nonatomic,readonly) char hasUriScheme; 
@property (nonatomic,retain) NSString * uriScheme;                      //@synthesize uriScheme=_uriScheme - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasSessionId;
-(SCD_Struct_GE2)sessionId;
-(void)setSessionId:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionId:(char)arg1 ;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(void)setUriScheme:(NSString *)arg1 ;
-(char)hasSourceAppBundleId;
-(char)hasUriScheme;
-(NSString *)sourceAppBundleId;
-(NSString *)uriScheme;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

