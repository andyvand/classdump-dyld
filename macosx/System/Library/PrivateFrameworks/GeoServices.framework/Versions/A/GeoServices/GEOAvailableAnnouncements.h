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

@class NSMutableArray, NSString;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {

	NSMutableArray* _announcements;
	NSString* _languageCode;

}

@property (nonatomic,retain) NSMutableArray * announcements;              //@synthesize announcements=_announcements - In the implementation block
@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                     //@synthesize languageCode=_languageCode - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)languageCode;
-(void)setAnnouncements:(NSMutableArray *)arg1 ;
-(void)addAnnouncement:(id)arg1 ;
-(unsigned long long)announcementsCount;
-(void)clearAnnouncements;
-(id)announcementAtIndex:(unsigned long long)arg1 ;
-(char)hasLanguageCode;
-(NSMutableArray *)announcements;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

