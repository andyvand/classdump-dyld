/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, CKDPRecord, CKDPDateStatistics;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecord* _serverFields;
	CKDPDateStatistics* _timeStatistics;

}

@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                  //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasTimeStatistics; 
@property (nonatomic,retain) CKDPDateStatistics * timeStatistics;              //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,readonly) char hasServerFields; 
@property (nonatomic,retain) CKDPRecord * serverFields;                        //@synthesize serverFields=_serverFields - In the implementation block
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(void)setServerFields:(CKDPRecord *)arg1 ;
-(char)hasTimeStatistics;
-(char)hasServerFields;
-(CKDPDateStatistics *)timeStatistics;
-(CKDPRecord *)serverFields;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasEtag;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)etag;
@end

