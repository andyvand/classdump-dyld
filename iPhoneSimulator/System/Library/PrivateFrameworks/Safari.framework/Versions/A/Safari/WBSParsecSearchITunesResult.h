/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/WBSParsecSearchResult.h>

@class NSArray, WBSParsecImageRepresentation, NSString;

@interface WBSParsecSearchITunesResult : WBSParsecSearchResult {

	NSArray* _moreGlyphsOnFirstLineRepresentations;
	NSArray* _moreGlyphsOnSecondLineRepresentations;
	NSArray* _moreGlyphsRepresentations;
	WBSParsecImageRepresentation* _rottenTomatoesGlyph;
	char _rottenTomatoesInformationOnSecondLine;
	double _rating;
	NSString* _ratingText;
	NSString* _rottenTomatoesText;
	NSString* _descriptionFirstLine;
	NSString* _descriptionSecondLine;

}

@property (nonatomic,readonly) double rating;                                           //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) NSString * ratingText;                                   //@synthesize ratingText=_ratingText - In the implementation block
@property (nonatomic,readonly) NSString * rottenTomatoesText;                           //@synthesize rottenTomatoesText=_rottenTomatoesText - In the implementation block
@property (nonatomic,readonly) char rottenTomatoesInformationOnSecondLine;              //@synthesize rottenTomatoesInformationOnSecondLine=_rottenTomatoesInformationOnSecondLine - In the implementation block
@property (nonatomic,readonly) NSString * descriptionFirstLine;                         //@synthesize descriptionFirstLine=_descriptionFirstLine - In the implementation block
@property (nonatomic,readonly) NSString * descriptionSecondLine;                        //@synthesize descriptionSecondLine=_descriptionSecondLine - In the implementation block
-(id)rottenTomatoesGlyphWithSession:(id)arg1 ;
-(NSString *)rottenTomatoesText;
-(double)rating;
-(NSString *)ratingText;
-(id)moreGlyphsOnFirstLineWithSession:(id)arg1 ;
-(NSString *)descriptionFirstLine;
-(char)rottenTomatoesInformationOnSecondLine;
-(id)moreGlyphsOnSecondLineWithSession:(id)arg1 ;
-(NSString *)descriptionSecondLine;
-(id)moreGlyphsWithSession:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

