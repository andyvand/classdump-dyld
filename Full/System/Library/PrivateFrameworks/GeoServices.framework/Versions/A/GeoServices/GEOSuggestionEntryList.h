/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOSuggestionEntryList : PBCodable <NSCopying> {

	NSString* _localizedSectionHeader;
	NSMutableArray* _suggestionEntries;

}

@property (nonatomic,retain) NSMutableArray * suggestionEntries;              //@synthesize suggestionEntries=_suggestionEntries - In the implementation block
@property (nonatomic,readonly) char hasLocalizedSectionHeader; 
@property (nonatomic,retain) NSString * localizedSectionHeader;               //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)suggestionEntriesCount;
-(NSMutableArray *)suggestionEntries;
-(NSString *)localizedSectionHeader;
-(void)setSuggestionEntries:(NSMutableArray *)arg1 ;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(void)addSuggestionEntries:(id)arg1 ;
-(void)clearSuggestionEntries;
-(id)suggestionEntriesAtIndex:(unsigned long long)arg1 ;
-(char)hasLocalizedSectionHeader;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

