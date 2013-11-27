/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufWifi.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDProtobufWifi.dylib/libAWDProtobufWifi.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface AWDWiFiMetricRssiHistory : PBCodable {

	SCD_Struct_AW3* _rssiHistorys;
	unsigned long long _timestamp;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned rssiHistorysCount; 
@property (nonatomic,readonly) int* rssiHistorys; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)rssiHistorysCount;
-(void)clearRssiHistorys;
-(int)rssiHistoryAtIndex:(unsigned)arg1 ;
-(void)addRssiHistory:(int)arg1 ;
-(int*)rssiHistorys;
-(void)setRssiHistorys:(int*)arg1 count:(unsigned)arg2 ;
@end
