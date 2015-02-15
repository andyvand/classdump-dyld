/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {

	SCD_Struct_GE69* _muids;
	int _resultProviderId;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                         //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (nonatomic,readonly) unsigned long long muidsCount; 
@property (nonatomic,readonly) unsigned long long* muids; 
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(char)arg1 ;
-(char)hasResultProviderId;
-(int)resultProviderId;
-(unsigned long long)muidsCount;
-(void)clearMuids;
-(unsigned long long)muidAtIndex:(unsigned long long)arg1 ;
-(void)addMuid:(unsigned long long)arg1 ;
-(unsigned long long*)muids;
-(void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithMUIDs:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
