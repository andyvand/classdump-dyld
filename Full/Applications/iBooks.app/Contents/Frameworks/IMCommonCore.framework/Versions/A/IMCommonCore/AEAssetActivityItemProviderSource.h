/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <IMCommonCore/AEUserPublishingDataSource.h>
#import <IMCommonCore/AEAssetHTMLGeneratorDataSource.h>

@class NSImage, NSURL, NSString;

@interface AEAssetActivityItemProviderSource : NSObject <AEUserPublishingDataSource, AEAssetHTMLGeneratorDataSource> {

	NSImage* _assetCover;
	NSURL* _storeUrl;
	NSURL* _storeShortUrl;
	char _storeUrlRequested;
	char _storeShortUrlRequested;
	NSString* _epubID;
	NSString* _storeId;
	/*^block*/id _propertySource;
	NSString* _activityType;

}

@property (nonatomic,copy) id propertySource;                       //@synthesize propertySource=_propertySource - In the implementation block
@property (nonatomic,retain) NSString * activityType;               //@synthesize activityType=_activityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activityItemProviderWithPropertySource:(/*^block*/id)arg1 ;
+(id)citationWithPropertySource:(/*^block*/id)arg1 activityType:(id)arg2 storeURL:(id)arg3 pageRange:(NSRange)arg4 ;
-(id)initWithPropertySource:(/*^block*/id)arg1 ;
-(id)propertySource;
-(void)setPropertySource:(id)arg1 ;
-(id)checkoutBookStringForHTMLGenerator:(id)arg1 ;
-(id)readingDirection;
-(id)assetCoverForHTMLGenerator:(id)arg1 ;
-(id)storeURLForHTMLGenerator:(id)arg1 ;
-(id)storeId;
-(id)HTMLGenerator:(id)arg1 citationForStoreURL:(id)arg2 ;
-(id)userPublishing:(id)arg1 storeURLForStoreId:(id)arg2 ;
-(id)userPublishing:(id)arg1 storeShortURLForStoreId:(id)arg2 ;
-(id)bookURL;
-(id)publisherLocation;
-(id)publisherName;
-(id)publisherYear;
-(id)assetCover;
-(id)storeUrl;
-(id)checkoutBookString;
-(char)isStoreAsset;
-(id)epubID;
-(char)contentProtected;
-(id)storeShortUrl;
-(char)isSeriesContainer;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)citation;
-(void)populateHTMLGenerator:(id)arg1 ;
-(id)storeUrlPreferShort;
-(id)checkOutBookWithShortCitationWithCharacterLimit:(unsigned long long)arg1 compressedFormat:(char)arg2 ;
-(id)filePathByGeneratingWebArchive;
-(id)genre;
-(char)isPDF;
-(void)setActivityType:(NSString *)arg1 ;
-(id)author;
-(id)title;
-(NSString *)activityType;
@end

