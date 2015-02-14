/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKLibraryPlatformDataSources.bundle/Contents/MacOS/BKLibraryPlatformDataSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKLibraryPlatformDataSources/BKAsset.h>

@class NSDate, SSDownload, NSString, NSNumber, NSURL;

@interface BKDownloadAsset : NSObject <BKAsset> {

	NSDate* _purchaseDate;
	SSDownload* _download;
	NSString* _assetID;
	NSString* _storeID;
	NSString* _author;
	NSString* _title;
	NSString* _sortTitle;
	NSString* _genre;
	NSNumber* _versionNumber;
	NSString* _kind;
	NSString* _dataSourceIdentifier;
	NSDate* _dataSourceInsertionDate;
	double _lastPercentComplete;

}

@property (nonatomic,retain) SSDownload * download;                      //@synthesize download=_download - In the implementation block
@property (retain) NSString * assetID;                                   //@synthesize assetID=_assetID - In the implementation block
@property (retain) NSString * storeID;                                   //@synthesize storeID=_storeID - In the implementation block
@property (retain) NSString * author;                                    //@synthesize author=_author - In the implementation block
@property (retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (retain) NSString * sortTitle;                                 //@synthesize sortTitle=_sortTitle - In the implementation block
@property (retain) NSString * genre;                                     //@synthesize genre=_genre - In the implementation block
@property (retain) NSNumber * versionNumber;                             //@synthesize versionNumber=_versionNumber - In the implementation block
@property (retain) NSString * kind;                                      //@synthesize kind=_kind - In the implementation block
@property (retain) NSString * dataSourceIdentifier;                      //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (retain) NSDate * dataSourceInsertionDate;                     //@synthesize dataSourceInsertionDate=_dataSourceInsertionDate - In the implementation block
@property (assign,nonatomic) double lastPercentComplete;                 //@synthesize lastPercentComplete=_lastPercentComplete - In the implementation block
@property (readonly) NSDate * purchaseDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * accountID; 
@property (readonly) NSURL * url; 
@property (getter=isSample,readonly) char sample; 
@property (getter=isProof,readonly) char proof; 
@property (getter=isCompressed,readonly) char compressed; 
@property (getter=isLocked,readonly) char locked; 
@property (readonly) long long generation; 
@property (readonly) long long fileSize; 
@property (readonly) short contentType; 
@property (readonly) short state; 
@property (readonly) NSDate * releaseDate; 
@property (readonly) char shouldDisableOptimizeSpeed; 
@property (readonly) char shouldDisableTouchEmulation; 
@property (readonly) short desktopSupportLevel; 
@property (readonly) NSString * scrollDirection; 
@property (readonly) long long pageCount; 
@property (readonly) long long rating; 
@property (readonly) NSDate * updateDate; 
@property (readonly) NSString * bookDescription; 
@property (readonly) NSString * comments; 
@property (readonly) NSString * year; 
@property (readonly) NSString * grouping; 
@property (readonly) char computedRating; 
@property (readonly) long long metadataMigrationVersion; 
@property (readonly) unsigned long long storeFrontID; 
@property (readonly) NSNumber * seriesIsHidden; 
@property (readonly) NSNumber * seriesIsCloudOnly; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * seriesID; 
@property (readonly) NSNumber * seriesSortKey; 
@property (getter=isDevelopment,readonly) char development; 
+(id)dateFormatter;
-(NSString *)seriesID;
-(char)isCompressed;
-(void)setAssetID:(NSString *)arg1 ;
-(NSString *)assetID;
-(NSString *)dataSourceIdentifier;
-(char)isProof;
-(NSDate *)dataSourceInsertionDate;
-(char)shouldDisableOptimizeSpeed;
-(char)shouldDisableTouchEmulation;
-(short)desktopSupportLevel;
-(NSString *)scrollDirection;
-(NSDate *)updateDate;
-(NSString *)bookDescription;
-(char)computedRating;
-(long long)metadataMigrationVersion;
-(void)setDataSourceIdentifier:(NSString *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setDataSourceInsertionDate:(NSDate *)arg1 ;
-(void)setVersionNumber:(NSNumber *)arg1 ;
-(double)lastPercentComplete;
-(void)setLastPercentComplete:(double)arg1 ;
-(NSString *)genre;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)grouping;
-(NSDate *)releaseDate;
-(SSDownload *)download;
-(long long)rating;
-(long long)generation;
-(void)setDownload:(SSDownload *)arg1 ;
-(short)contentType;
-(NSString *)storeID;
-(NSNumber *)versionNumber;
-(NSString *)author;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(id)init;
-(NSString *)description;
-(NSURL *)url;
-(short)state;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)year;
-(long long)pageCount;
-(char)isLocked;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(long long)fileSize;
-(NSString *)comments;
-(NSString *)accountID;
-(NSDate *)purchaseDate;
-(void)setAuthor:(NSString *)arg1 ;
-(char)isSample;
@end

