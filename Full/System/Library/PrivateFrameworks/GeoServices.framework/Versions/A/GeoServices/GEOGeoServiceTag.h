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

@interface GEOGeoServiceTag : PBCodable <NSCopying> {

	int _serviceType;
	NSString* _tag;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasServiceType; 
@property (assign,nonatomic) int serviceType;                  //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * tag;                   //@synthesize tag=_tag - In the implementation block
+(id)defaultTag;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasServiceType:(char)arg1 ;
-(char)hasServiceType;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setServiceType:(int)arg1 ;
-(int)serviceType;
@end

