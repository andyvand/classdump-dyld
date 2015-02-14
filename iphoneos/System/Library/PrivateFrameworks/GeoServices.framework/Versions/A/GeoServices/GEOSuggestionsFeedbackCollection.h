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

@class NSData;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	int _suggestionEntryIndex;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	int _suggestionsEntryListIndex;
	SCD_Struct_GE64 _has;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasSuggestionsEntryListIndex; 
@property (assign,nonatomic) int suggestionsEntryListIndex;                  //@synthesize suggestionsEntryListIndex=_suggestionsEntryListIndex - In the implementation block
@property (assign,nonatomic) char hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex;                       //@synthesize suggestionEntryIndex=_suggestionEntryIndex - In the implementation block
@property (nonatomic,readonly) char hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                    //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) char hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;               //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(char)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(void)setHasSuggestionsEntryListIndex:(char)arg1 ;
-(char)hasSuggestionsEntryListIndex;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(void)setHasSuggestionEntryIndex:(char)arg1 ;
-(char)hasSuggestionEntryIndex;
-(char)hasSuggestionEntryMetadata;
-(int)suggestionsEntryListIndex;
-(int)suggestionEntryIndex;
-(NSData *)suggestionEntryMetadata;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
@end

