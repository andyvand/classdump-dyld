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

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	unsigned long long _businessID;
	long long _placeID;
	NSMutableArray* _actionCaptures;
	int _localSearchProviderID;
	SCD_Struct_GE53 _has;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) char hasPlaceID; 
@property (assign,nonatomic) long long placeID;                            //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionCaptures;              //@synthesize actionCaptures=_actionCaptures - In the implementation block
@property (assign,nonatomic) char hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                    //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasBusinessID;
-(unsigned long long)businessID;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(char)arg1 ;
-(char)hasLocalSearchProviderID;
-(int)localSearchProviderID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setHasBusinessID:(char)arg1 ;
-(void)setActionCaptures:(NSMutableArray *)arg1 ;
-(void)addActionCapture:(id)arg1 ;
-(unsigned long long)actionCapturesCount;
-(void)clearActionCaptures;
-(id)actionCaptureAtIndex:(unsigned long long)arg1 ;
-(void)setPlaceID:(long long)arg1 ;
-(void)setHasPlaceID:(char)arg1 ;
-(char)hasPlaceID;
-(long long)placeID;
-(NSMutableArray *)actionCaptures;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
@end

