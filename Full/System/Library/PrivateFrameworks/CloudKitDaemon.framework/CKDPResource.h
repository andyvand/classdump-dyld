/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPRecordIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPResource : PBCodable <NSCopying> {

	long long _customClientResourceType;
	CKDPRecordIdentifier* _recordId;
	int _targetDatabase;
	CKDPRecordZoneIdentifier* _zoneId;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) char hasZoneId; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneId;               //@synthesize zoneId=_zoneId - In the implementation block
@property (assign,nonatomic) char hasTargetDatabase; 
@property (assign,nonatomic) int targetDatabase;                              //@synthesize targetDatabase=_targetDatabase - In the implementation block
@property (nonatomic,readonly) char hasRecordId; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordId;                 //@synthesize recordId=_recordId - In the implementation block
@property (assign,nonatomic) char hasCustomClientResourceType; 
@property (assign,nonatomic) long long customClientResourceType;              //@synthesize customClientResourceType=_customClientResourceType - In the implementation block
-(void)setTargetDatabase:(int)arg1 ;
-(int)targetDatabase;
-(void)setHasTargetDatabase:(char)arg1 ;
-(char)hasTargetDatabase;
-(char)hasRecordId;
-(char)hasZoneId;
-(CKDPRecordZoneIdentifier *)zoneId;
-(void)setZoneId:(CKDPRecordZoneIdentifier *)arg1 ;
-(void)setCustomClientResourceType:(long long)arg1 ;
-(void)setHasCustomClientResourceType:(char)arg1 ;
-(char)hasCustomClientResourceType;
-(long long)customClientResourceType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPRecordIdentifier *)recordId;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
@end
