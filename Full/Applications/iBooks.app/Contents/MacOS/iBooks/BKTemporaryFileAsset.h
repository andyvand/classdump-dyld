/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKAsset.h>

@class NSString, NSURL, NSDate, NSNumber;

@interface BKTemporaryFileAsset : NSObject <BKAsset> {

	char _sample;
	char _proof;
	char _compressed;
	char _locked;
	char _shouldDisableOptimizeSpeed;
	char _shouldDisableTouchEmulation;
	char _computedRating;
	short _contentType;
	short _state;
	short _desktopSupportLevel;
	NSString* _accountID;
	NSString* _assetID;
	NSString* _storeID;
	NSString* _author;
	NSString* _title;
	NSString* _sortTitle;
	NSURL* _url;
	NSString* _genre;
	NSString* _dataSourceIdentifier;
	long long _generation;
	long long _fileSize;
	NSDate* _dataSourceInsertionDate;
	long long _pageCount;
	long long _rating;
	NSDate* _updateDate;
	NSNumber* _versionNumber;
	NSString* _bookDescription;
	NSString* _comments;
	NSString* _kind;
	NSString* _year;
	NSString* _grouping;

}

@property (retain) NSString * accountID;                                 //@synthesize accountID=_accountID - In the implementation block
@property (retain) NSString * assetID;                                   //@synthesize assetID=_assetID - In the implementation block
@property (retain) NSString * storeID;                                   //@synthesize storeID=_storeID - In the implementation block
@property (retain) NSString * author;                                    //@synthesize author=_author - In the implementation block
@property (retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (retain) NSString * sortTitle;                                 //@synthesize sortTitle=_sortTitle - In the implementation block
@property (retain) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (retain) NSString * genre;                                     //@synthesize genre=_genre - In the implementation block
@property (retain) NSString * dataSourceIdentifier;                      //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (getter=isSample) char sample;                                 //@synthesize sample=_sample - In the implementation block
@property (getter=isProof) char proof;                                   //@synthesize proof=_proof - In the implementation block
@property (getter=isCompressed) char compressed;                         //@synthesize compressed=_compressed - In the implementation block
@property (getter=isLocked) char locked;                                 //@synthesize locked=_locked - In the implementation block
@property (assign) long long generation;                                 //@synthesize generation=_generation - In the implementation block
@property (assign) long long fileSize;                                   //@synthesize fileSize=_fileSize - In the implementation block
@property (assign) short contentType;                                    //@synthesize contentType=_contentType - In the implementation block
@property (assign) short state;                                          //@synthesize state=_state - In the implementation block
@property (retain) NSDate * dataSourceInsertionDate;                     //@synthesize dataSourceInsertionDate=_dataSourceInsertionDate - In the implementation block
@property (assign) char shouldDisableOptimizeSpeed;                      //@synthesize shouldDisableOptimizeSpeed=_shouldDisableOptimizeSpeed - In the implementation block
@property (assign) char shouldDisableTouchEmulation;                     //@synthesize shouldDisableTouchEmulation=_shouldDisableTouchEmulation - In the implementation block
@property (assign) short desktopSupportLevel;                            //@synthesize desktopSupportLevel=_desktopSupportLevel - In the implementation block
@property (assign) long long pageCount;                                  //@synthesize pageCount=_pageCount - In the implementation block
@property (assign) long long rating;                                     //@synthesize rating=_rating - In the implementation block
@property (retain) NSDate * updateDate;                                  //@synthesize updateDate=_updateDate - In the implementation block
@property (retain) NSNumber * versionNumber;                             //@synthesize versionNumber=_versionNumber - In the implementation block
@property (retain) NSString * bookDescription;                           //@synthesize bookDescription=_bookDescription - In the implementation block
@property (retain) NSString * comments;                                  //@synthesize comments=_comments - In the implementation block
@property (retain) NSString * kind;                                      //@synthesize kind=_kind - In the implementation block
@property (retain) NSString * year;                                      //@synthesize year=_year - In the implementation block
@property (retain) NSString * grouping;                                  //@synthesize grouping=_grouping - In the implementation block
@property (assign) char computedRating;                                  //@synthesize computedRating=_computedRating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDate * releaseDate; 
@property (readonly) NSDate * purchaseDate; 
@property (readonly) NSString * scrollDirection; 
@property (readonly) long long metadataMigrationVersion; 
@property (readonly) unsigned long long storeFrontID; 
@property (readonly) NSNumber * seriesIsHidden; 
@property (readonly) NSNumber * seriesIsCloudOnly; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * seriesID; 
@property (readonly) NSNumber * seriesSortKey; 
@property (getter=isDevelopment,readonly) char development; 
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
-(void)setSample:(char)arg1 ;
-(void)setDataSourceIdentifier:(NSString *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setProof:(char)arg1 ;
-(void)setDataSourceInsertionDate:(NSDate *)arg1 ;
-(void)setShouldDisableOptimizeSpeed:(char)arg1 ;
-(void)setShouldDisableTouchEmulation:(char)arg1 ;
-(void)setDesktopSupportLevel:(short)arg1 ;
-(void)setUpdateDate:(NSDate *)arg1 ;
-(void)setVersionNumber:(NSNumber *)arg1 ;
-(void)setBookDescription:(NSString *)arg1 ;
-(void)setComputedRating:(char)arg1 ;
-(NSString *)genre;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)grouping;
-(void)setGrouping:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(long long)rating;
-(void)setGeneration:(long long)arg1 ;
-(long long)generation;
-(void)setContentType:(short)arg1 ;
-(short)contentType;
-(NSString *)storeID;
-(void)setFileSize:(long long)arg1 ;
-(NSNumber *)versionNumber;
-(NSString *)author;
-(void)setRating:(long long)arg1 ;
-(void)setPageCount:(long long)arg1 ;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(void)setState:(short)arg1 ;
-(short)state;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)year;
-(long long)pageCount;
-(void)setYear:(NSString *)arg1 ;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(long long)fileSize;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setCompressed:(char)arg1 ;
-(NSDate *)purchaseDate;
-(void)setAuthor:(NSString *)arg1 ;
-(char)isSample;
@end
