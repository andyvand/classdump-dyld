/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {

	NSString* _displayName;
	NSString* _language;
	NSMutableArray* _logoURLs;
	NSMutableArray* _snippetLogoURLs;

}

@property (nonatomic,readonly) char hasLanguage; 
@property (nonatomic,retain) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) char hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * logoURLs;                     //@synthesize logoURLs=_logoURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * snippetLogoURLs;              //@synthesize snippetLogoURLs=_snippetLogoURLs - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLogoURLs:(NSMutableArray *)arg1 ;
-(void)setSnippetLogoURLs:(NSMutableArray *)arg1 ;
-(void)addLogoURLs:(id)arg1 ;
-(void)addSnippetLogoURLs:(id)arg1 ;
-(unsigned long long)logoURLsCount;
-(void)clearLogoURLs;
-(id)logoURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)snippetLogoURLsCount;
-(void)clearSnippetLogoURLs;
-(id)snippetLogoURLsAtIndex:(unsigned long long)arg1 ;
-(char)hasLanguage;
-(char)hasDisplayName;
-(NSMutableArray *)logoURLs;
-(NSMutableArray *)snippetLogoURLs;
-(id)bestURLForLogos:(id)arg1 scale:(double)arg2 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

