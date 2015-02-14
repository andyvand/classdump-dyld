/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOTrafficIncident : PBCodable <NSCopying> {

	double _endTime;
	double _lastUpdated;
	double _startTime;
	long long _uID;
	NSString* _info;
	NSString* _location;
	NSString* _title;
	int _type;
	int _vertexCount;
	int _vertexOffset;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) char hasUID; 
@property (assign,nonatomic) long long uID;                     //@synthesize uID=_uID - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasInfo; 
@property (nonatomic,retain) NSString * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) NSString * location;               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char hasVertexOffset; 
@property (assign,nonatomic) int vertexOffset;                  //@synthesize vertexOffset=_vertexOffset - In the implementation block
@property (assign,nonatomic) char hasVertexCount; 
@property (assign,nonatomic) int vertexCount;                   //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) char hasStartTime; 
@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char hasEndTime; 
@property (assign,nonatomic) double endTime;                    //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) char hasLastUpdated; 
@property (assign,nonatomic) double lastUpdated;                //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                          //@synthesize type=_type - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)vertexCount;
-(NSString *)info;
-(long long)uID;
-(char)hasLocation;
-(char)hasStartTime;
-(double)startTime;
-(char)hasEndTime;
-(double)endTime;
-(char)hasLastUpdated;
-(double)lastUpdated;
-(int)vertexOffset;
-(void)setInfo:(NSString *)arg1 ;
-(char)hasType;
-(void)setHasType:(char)arg1 ;
-(void)setHasUID:(char)arg1 ;
-(char)hasUID;
-(void)setVertexOffset:(int)arg1 ;
-(void)setVertexCount:(int)arg1 ;
-(char)hasTitle;
-(char)hasInfo;
-(void)setHasVertexOffset:(char)arg1 ;
-(char)hasVertexOffset;
-(void)setHasVertexCount:(char)arg1 ;
-(char)hasVertexCount;
-(void)setHasStartTime:(char)arg1 ;
-(void)setHasEndTime:(char)arg1 ;
-(void)setLastUpdated:(double)arg1 ;
-(void)setHasLastUpdated:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setUID:(long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setEndTime:(double)arg1 ;
@end

