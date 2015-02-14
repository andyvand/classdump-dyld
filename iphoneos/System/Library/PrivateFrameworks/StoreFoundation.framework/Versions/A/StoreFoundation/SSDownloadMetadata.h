/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/StoreFoundation-Structs.h>
#import <StoreFoundation/NSSecureCoding.h>
#import <StoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSLock, NSString, NSURL, NSNumber, NSArray, NSDictionary, NSData;

@interface SSDownloadMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	NSLock* _lock;

}

@property (retain) NSString * genre; 
@property (assign) unsigned long long itemIdentifier; 
@property (retain) NSString * kind; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * title; 
@property (retain) NSURL * thumbnailImageURL; 
@property (retain) NSString * transactionIdentifier; 
@property (assign) char animationExpected; 
@property (retain) NSString * productType; 
@property (readonly) NSNumber * ageRestriction; 
@property (retain) NSURL * preflightPackageURL; 
@property (retain) NSString * buyParameters; 
@property (readonly) NSString * purchaseDate; 
@property (readonly) char isExplicitContents; 
@property (retain) NSString * iapInstallPath; 
@property (readonly) NSNumber * iapContentSize; 
@property (readonly) NSString * iapContentVersion; 
@property (retain) NSString * collectionName; 
@property (retain) NSNumber * durationInMilliseconds; 
@property (getter=isRental) char rental; 
@property (getter=isSample,readonly) char sample; 
@property (readonly) NSString * applicationIdentifier; 
@property (assign) char artworkIsPrerendered; 
@property (retain) NSString * bundleIdentifier; 
@property (retain) NSString * bundleVersion; 
@property (readonly) NSNumber * version; 
@property (readonly) char needsSoftwareInstallOperation; 
@property (assign) char isMDMProvided; 
@property (readonly) NSArray * assets; 
@property (retain) NSDictionary * dictionary; 
@property (retain) NSString * downloadKey; 
@property (retain) NSData * epubRightsData; 
@property (retain) NSString * appleID; 
@property (retain) NSString * fileExtension; 
@property (retain) NSArray * sinfs; 
@property (readonly) char extractionCanBeStreamed; 
@property (readonly) NSNumber * uncompressedSize; 
+(char)supportsSecureCoding;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(NSArray *)assets;
-(NSString *)genre;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)fileExtension;
-(NSString *)appleID;
-(NSNumber *)uncompressedSize;
-(void)setUncompressedSize:(NSNumber *)arg1 ;
-(id)initWithKind:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSString *)productType;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(NSNumber *)version;
-(unsigned long long)itemIdentifier;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)purchaseDate;
-(void)setBuyParameters:(NSString *)arg1 ;
-(NSURL *)preflightPackageURL;
-(NSURL *)thumbnailImageURL;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(void)setAnimationExpected:(char)arg1 ;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(char)artworkIsPrerendered;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)collectionName;
-(NSNumber *)durationInMilliseconds;
-(NSNumber *)ageRestriction;
-(char)isExplicitContents;
-(NSString *)buyParameters;
-(char)isRental;
-(char)isSample;
-(id)deltaPackages;
-(char)needsSoftwareInstallOperation;
-(char)isMDMProvided;
-(char)extractionCanBeStreamed;
-(void)setArtworkIsPrerendered:(char)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(void)setDurationInMilliseconds:(NSNumber *)arg1 ;
-(void)setRental:(char)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setPreflightPackageURL:(NSURL *)arg1 ;
-(void)setExtractionCanBeStreamed:(char)arg1 ;
-(void)setIsMDMProvided:(char)arg1 ;
-(NSString *)transactionIdentifier;
-(char)animationExpected;
-(NSString *)downloadKey;
-(NSData *)epubRightsData;
-(NSNumber *)iapContentSize;
-(NSString *)iapContentVersion;
-(NSString *)iapInstallPath;
-(id)localServerInfo;
-(void)setDownloadKey:(NSString *)arg1 ;
-(void)setEpubRightsData:(NSData *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setIapInstallPath:(NSString *)arg1 ;
-(NSArray *)sinfs;
@end

