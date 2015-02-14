/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _requestElements;

}

@property (nonatomic,retain) NSMutableArray * requestElements;              //@synthesize requestElements=_requestElements - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(void)addRequestElements:(id)arg1 ;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(id)requestElementsAtIndex:(unsigned long long)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSMutableArray *)requestElements;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

