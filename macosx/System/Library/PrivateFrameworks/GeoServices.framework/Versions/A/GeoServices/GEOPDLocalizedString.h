/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOPDLocalizedString : PBCodable <NSCopying> {

	NSString* _locale;
	NSString* _stringValue;

}

@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) NSString * locale;                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasLocale;
-(char)hasStringValue;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
@end

