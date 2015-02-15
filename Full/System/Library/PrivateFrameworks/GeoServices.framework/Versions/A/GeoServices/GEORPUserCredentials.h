/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	NSString* _icloudUserMapsAuthToken;
	NSString* _icloudUserPersonId;

}

@property (nonatomic,readonly) char hasIcloudUserPersonId; 
@property (nonatomic,retain) NSString * icloudUserPersonId;                   //@synthesize icloudUserPersonId=_icloudUserPersonId - In the implementation block
@property (nonatomic,readonly) char hasIcloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * icloudUserMapsAuthToken;              //@synthesize icloudUserMapsAuthToken=_icloudUserMapsAuthToken - In the implementation block
+(id)_credentialsForPrimaryICloudAccount;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIcloudUserPersonId:(NSString *)arg1 ;
-(void)setIcloudUserMapsAuthToken:(NSString *)arg1 ;
-(char)hasIcloudUserPersonId;
-(char)hasIcloudUserMapsAuthToken;
-(NSString *)icloudUserPersonId;
-(NSString *)icloudUserMapsAuthToken;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

