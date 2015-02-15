/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/StoreFoundation-Structs.h>
#import <StoreFoundation/NSCopying.h>
#import <StoreFoundation/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, NSDictionary, NSURL, NSMutableDictionary, SSPurchase;

@interface CKBook : NSObject <NSCopying, NSSecureCoding> {

	char _isLocal;
	NSString* _path;
	NSString* _title;
	NSString* _author;
	NSString* _category;
	NSString* _sortName;
	NSDate* _purchaseDate;
	NSString* _uniqueIdentifier;
	NSNumber* _itemIdentifier;
	NSNumber* _publicationVersion;
	NSString* _publicationDisplayVersion;
	NSDictionary* _bookInfo;
	NSDictionary* _iTunesMetaData;
	NSString* _redownloadBuyParams;
	NSNumber* _downloadAssetSize;
	NSString* _updateBuyParams;
	NSDate* _expectedReleaseDate;
	NSNumber* _daapPurchasedToken;
	NSNumber* _daapItemIdentifier;
	NSURL* _coverImageURL;
	NSNumber* _jaliscoItemIdentifier;
	NSMutableDictionary* _externalMetadata;

}

@property (copy) NSString * path;                                       //@synthesize path=_path - In the implementation block
@property (assign) char isLocal;                                        //@synthesize isLocal=_isLocal - In the implementation block
@property (copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (copy) NSString * author;                                     //@synthesize author=_author - In the implementation block
@property (copy) NSString * category;                                   //@synthesize category=_category - In the implementation block
@property (copy) NSString * sortName;                                   //@synthesize sortName=_sortName - In the implementation block
@property (copy) NSDate * purchaseDate;                                 //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (copy) NSString * uniqueIdentifier;                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSNumber * publicationVersion;                         //@synthesize publicationVersion=_publicationVersion - In the implementation block
@property (copy) NSString * publicationDisplayVersion;                  //@synthesize publicationDisplayVersion=_publicationDisplayVersion - In the implementation block
@property (copy) NSDictionary * bookInfo;                               //@synthesize bookInfo=_bookInfo - In the implementation block
@property (copy) NSDictionary * iTunesMetaData;                         //@synthesize iTunesMetaData=_iTunesMetaData - In the implementation block
@property (copy) NSString * redownloadBuyParams;                        //@synthesize redownloadBuyParams=_redownloadBuyParams - In the implementation block
@property (copy) NSNumber * downloadAssetSize;                          //@synthesize downloadAssetSize=_downloadAssetSize - In the implementation block
@property (copy) NSString * updateBuyParams;                            //@synthesize updateBuyParams=_updateBuyParams - In the implementation block
@property (readonly) SSPurchase * redownloadPurchase; 
@property (readonly) SSPurchase * updatePurchase; 
@property (readonly) char isPreorder; 
@property (copy) NSDate * expectedReleaseDate;                          //@synthesize expectedReleaseDate=_expectedReleaseDate - In the implementation block
@property (copy) NSNumber * daapPurchasedToken;                         //@synthesize daapPurchasedToken=_daapPurchasedToken - In the implementation block
@property (copy) NSNumber * daapItemIdentifier;                         //@synthesize daapItemIdentifier=_daapItemIdentifier - In the implementation block
@property (copy) NSURL * coverImageURL;                                 //@synthesize coverImageURL=_coverImageURL - In the implementation block
@property (copy) NSNumber * jaliscoItemIdentifier;                      //@synthesize jaliscoItemIdentifier=_jaliscoItemIdentifier - In the implementation block
@property (retain) NSMutableDictionary * externalMetadata;              //@synthesize externalMetadata=_externalMetadata - In the implementation block
+(char)supportsSecureCoding;
+(id)_imageFetchQueue;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)sortName;
-(void)setSortName:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)author;
-(id)description;
-(NSString *)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)uniqueIdentifier;
-(void)setPath:(NSString *)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(char)isLocal;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSURL *)coverImageURL;
-(NSNumber *)publicationVersion;
-(NSString *)publicationDisplayVersion;
-(NSDictionary *)iTunesMetaData;
-(NSDate *)expectedReleaseDate;
-(NSNumber *)daapPurchasedToken;
-(NSNumber *)daapItemIdentifier;
-(NSMutableDictionary *)externalMetadata;
-(void)setExternalMetadata:(NSMutableDictionary *)arg1 ;
-(NSDate *)purchaseDate;
-(NSNumber *)jaliscoItemIdentifier;
-(NSNumber *)downloadAssetSize;
-(NSString *)updateBuyParams;
-(NSString *)redownloadBuyParams;
-(char)isEqualToBook:(id)arg1 ;
-(void)_copyLibraryPropertiesFromBook:(id)arg1 ;
-(void)fetchCoverImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(SSPurchase *)redownloadPurchase;
-(SSPurchase *)updatePurchase;
-(char)isPreorder;
-(id)getItemIdentifier;
-(void)setIsLocal:(char)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(void)setPublicationVersion:(NSNumber *)arg1 ;
-(void)setPublicationDisplayVersion:(NSString *)arg1 ;
-(NSDictionary *)bookInfo;
-(void)setBookInfo:(NSDictionary *)arg1 ;
-(void)setITunesMetaData:(NSDictionary *)arg1 ;
-(void)setRedownloadBuyParams:(NSString *)arg1 ;
-(void)setDownloadAssetSize:(NSNumber *)arg1 ;
-(void)setUpdateBuyParams:(NSString *)arg1 ;
-(void)setExpectedReleaseDate:(NSDate *)arg1 ;
-(void)setDaapPurchasedToken:(NSNumber *)arg1 ;
-(void)setDaapItemIdentifier:(NSNumber *)arg1 ;
-(void)setCoverImageURL:(NSURL *)arg1 ;
-(void)setJaliscoItemIdentifier:(NSNumber *)arg1 ;
@end

