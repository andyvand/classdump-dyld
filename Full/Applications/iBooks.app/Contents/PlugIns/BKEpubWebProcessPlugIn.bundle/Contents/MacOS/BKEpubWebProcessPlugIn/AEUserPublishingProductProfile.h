/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKEpubWebProcessPlugIn.bundle/Contents/MacOS/BKEpubWebProcessPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKEpubWebProcessPlugIn/BKEpubWebProcessPlugIn-Structs.h>
#import <BKEpubWebProcessPlugIn/BKSeriesDataItem.h>

@class NSString, NSNumber, NSArray, NSDictionary;

@interface AEUserPublishingProductProfile : NSObject <BKSeriesDataItem> {

	NSDictionary* _profileDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * series_adamId; 
@property (nonatomic,readonly) NSString * series_sortTitle; 
@property (nonatomic,readonly) NSString * series_title; 
@property (nonatomic,readonly) NSString * series_sortAuthor; 
@property (nonatomic,readonly) NSString * series_author; 
@property (nonatomic,readonly) NSNumber * series_isExplicit; 
@property (nonatomic,readonly) NSString * series_formattedPrice; 
@property (nonatomic,readonly) NSArray * series_genres; 
@property (nonatomic,readonly) NSString * series_genre; 
@property (nonatomic,readonly) NSString * seriesID; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * childrenIDs; 
@property (nonatomic,readonly) char isExplicit; 
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) char isPreorder; 
@property (nonatomic,retain) NSDictionary * profileDictionary;                //@synthesize profileDictionary=_profileDictionary - In the implementation block
-(NSString *)seriesID;
-(NSString *)series_adamId;
-(NSString *)series_formattedPrice;
-(NSString *)series_title;
-(id)series_seriesId;
-(NSArray *)childrenIDs;
-(id)series_displayLabel;
-(id)series_seriesTitle;
-(NSString *)series_sortTitle;
-(NSString *)series_sortAuthor;
-(NSString *)series_author;
-(NSNumber *)series_isExplicit;
-(NSString *)series_genre;
-(NSDictionary *)profileDictionary;
-(char)_isContentRatingExplicitForInfo:(id)arg1 ;
-(id)_offer;
-(id)initWithProfileDictionary:(id)arg1 ;
-(void)setProfileDictionary:(NSDictionary *)arg1 ;
-(NSArray *)series_genres;
-(id)series_seriesInfo;
-(unsigned long long)series_position;
-(id)urlForCoverImageOfSize:(CGSize)arg1 ;
-(NSString *)description;
-(id)objectForKey:(id)arg1 ;
-(NSArray *)children;
-(char)isExplicit;
-(char)isPreorder;
-(NSString *)buyParameters;
@end

