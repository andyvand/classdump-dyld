/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKEpubWebProcessPlugIn.bundle/Contents/MacOS/BKEpubWebProcessPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSNumber, NSArray;


@protocol BKSeriesDataItem <NSObject>
@property (nonatomic,readonly) NSString * series_adamId; 
@property (nonatomic,readonly) NSString * series_sortTitle; 
@property (nonatomic,readonly) NSString * series_title; 
@property (nonatomic,readonly) NSString * series_sortAuthor; 
@property (nonatomic,readonly) NSString * series_author; 
@property (nonatomic,readonly) NSNumber * series_isExplicit; 
@property (nonatomic,readonly) NSString * series_formattedPrice; 
@property (nonatomic,readonly) NSArray * series_genres; 
@property (nonatomic,readonly) NSString * series_genre; 
@required
-(NSString *)series_adamId;
-(NSString *)series_formattedPrice;
-(NSString *)series_title;
-(NSString *)series_sortTitle;
-(NSString *)series_sortAuthor;
-(NSString *)series_author;
-(NSNumber *)series_isExplicit;
-(NSString *)series_genre;
-(NSArray *)series_genres;

@end

