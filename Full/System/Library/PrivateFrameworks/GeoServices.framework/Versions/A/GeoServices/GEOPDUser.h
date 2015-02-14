/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPDPhoto, NSString;

@interface GEOPDUser : PBCodable <NSCopying> {

	GEOPDPhoto* _image;
	NSString* _name;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,retain) GEOPDPhoto * image;              //@synthesize image=_image - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(char)hasImage;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(GEOPDPhoto *)image;
-(void)setImage:(GEOPDPhoto *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

