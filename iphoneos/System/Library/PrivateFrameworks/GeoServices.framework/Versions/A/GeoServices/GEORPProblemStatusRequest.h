/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, NSString, GEORPUserCredentials;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {

	NSMutableArray* _problemIds;
	NSString* _statusNotificationId;
	GEORPUserCredentials* _userCredentials;

}

@property (nonatomic,readonly) char hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;              //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) char hasStatusNotificationId; 
@property (nonatomic,retain) NSString * statusNotificationId;                     //@synthesize statusNotificationId=_statusNotificationId - In the implementation block
@property (nonatomic,retain) NSMutableArray * problemIds;                         //@synthesize problemIds=_problemIds - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(char)hasUserCredentials;
-(GEORPUserCredentials *)userCredentials;
-(void)setStatusNotificationId:(NSString *)arg1 ;
-(void)setProblemIds:(NSMutableArray *)arg1 ;
-(void)addProblemId:(id)arg1 ;
-(unsigned long long)problemIdsCount;
-(void)clearProblemIds;
-(id)problemIdAtIndex:(unsigned long long)arg1 ;
-(char)hasStatusNotificationId;
-(NSString *)statusNotificationId;
-(NSMutableArray *)problemIds;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

