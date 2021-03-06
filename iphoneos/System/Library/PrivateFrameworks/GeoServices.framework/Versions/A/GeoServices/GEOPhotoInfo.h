/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying> {

	int _size;
	NSString* _url;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasSize; 
@property (assign,nonatomic) int size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url;              //@synthesize url=_url - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasSize;
-(void)setHasSize:(char)arg1 ;
-(char)hasUrl;
-(id)initWithPlaceDataPhotoContent:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)size;
-(void)setSize:(int)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

