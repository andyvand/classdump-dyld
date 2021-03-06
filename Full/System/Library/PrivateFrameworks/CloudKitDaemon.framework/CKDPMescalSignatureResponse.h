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

@class NSData;

@interface CKDPMescalSignatureResponse : PBCodable <NSCopying> {

	NSData* _mescalHeaderData;
	int _status;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasMescalHeaderData; 
@property (nonatomic,retain) NSData * mescalHeaderData;               //@synthesize mescalHeaderData=_mescalHeaderData - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                              //@synthesize status=_status - In the implementation block
-(NSData *)mescalHeaderData;
-(void)setMescalHeaderData:(NSData *)arg1 ;
-(char)hasMescalHeaderData;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

