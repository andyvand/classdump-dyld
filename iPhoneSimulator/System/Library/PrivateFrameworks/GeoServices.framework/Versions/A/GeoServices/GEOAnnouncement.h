/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEOPDFlyover, GEOMapRegion;

@interface GEOAnnouncement : PBCodable <NSCopying> {

	unsigned _announcementID;
	NSString* _buttonOneAppURI;
	NSString* _buttonOneMessage;
	NSString* _buttonTwoAppURI;
	NSString* _buttonTwoMessage;
	unsigned _displayDestinations;
	GEOPDFlyover* _flyoverInfo;
	GEOMapRegion* _mapRegion;
	int _releasePhase;
	NSString* _userMessage;
	SCD_Struct_GE64 _has;

}

@property (assign,nonatomic) char hasAnnouncementID; 
@property (assign,nonatomic) unsigned announcementID;                   //@synthesize announcementID=_announcementID - In the implementation block
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                  //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) char hasUserMessage; 
@property (nonatomic,retain) NSString * userMessage;                    //@synthesize userMessage=_userMessage - In the implementation block
@property (nonatomic,readonly) char hasButtonOneMessage; 
@property (nonatomic,retain) NSString * buttonOneMessage;               //@synthesize buttonOneMessage=_buttonOneMessage - In the implementation block
@property (nonatomic,readonly) char hasButtonOneAppURI; 
@property (nonatomic,retain) NSString * buttonOneAppURI;                //@synthesize buttonOneAppURI=_buttonOneAppURI - In the implementation block
@property (nonatomic,readonly) char hasButtonTwoMessage; 
@property (nonatomic,retain) NSString * buttonTwoMessage;               //@synthesize buttonTwoMessage=_buttonTwoMessage - In the implementation block
@property (nonatomic,readonly) char hasButtonTwoAppURI; 
@property (nonatomic,retain) NSString * buttonTwoAppURI;                //@synthesize buttonTwoAppURI=_buttonTwoAppURI - In the implementation block
@property (assign,nonatomic) char hasDisplayDestinations; 
@property (assign,nonatomic) unsigned displayDestinations;              //@synthesize displayDestinations=_displayDestinations - In the implementation block
@property (assign,nonatomic) char hasReleasePhase; 
@property (assign,nonatomic) int releasePhase;                          //@synthesize releasePhase=_releasePhase - In the implementation block
@property (nonatomic,readonly) char hasFlyoverInfo; 
@property (nonatomic,retain) GEOPDFlyover * flyoverInfo;                //@synthesize flyoverInfo=_flyoverInfo - In the implementation block
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasMapRegion;
-(void)setUserMessage:(NSString *)arg1 ;
-(void)setButtonOneMessage:(NSString *)arg1 ;
-(void)setButtonOneAppURI:(NSString *)arg1 ;
-(void)setButtonTwoMessage:(NSString *)arg1 ;
-(void)setButtonTwoAppURI:(NSString *)arg1 ;
-(void)setFlyoverInfo:(GEOPDFlyover *)arg1 ;
-(void)setAnnouncementID:(unsigned)arg1 ;
-(void)setHasAnnouncementID:(char)arg1 ;
-(char)hasAnnouncementID;
-(char)hasUserMessage;
-(char)hasButtonOneMessage;
-(char)hasButtonOneAppURI;
-(char)hasButtonTwoMessage;
-(char)hasButtonTwoAppURI;
-(void)setDisplayDestinations:(unsigned)arg1 ;
-(void)setHasDisplayDestinations:(char)arg1 ;
-(char)hasDisplayDestinations;
-(void)setReleasePhase:(int)arg1 ;
-(void)setHasReleasePhase:(char)arg1 ;
-(char)hasReleasePhase;
-(char)hasFlyoverInfo;
-(unsigned)announcementID;
-(NSString *)userMessage;
-(NSString *)buttonOneMessage;
-(NSString *)buttonOneAppURI;
-(NSString *)buttonTwoMessage;
-(NSString *)buttonTwoAppURI;
-(unsigned)displayDestinations;
-(int)releasePhase;
-(GEOPDFlyover *)flyoverInfo;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

