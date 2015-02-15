/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/FetchableItem.h>

@class NSMutableDictionary, NSString, NSDate, NSArray, NSImage;

@interface ReadingListItem : NSObject <FetchableItem> {

	RefPtr<Safari::Bookmark>* _bookmark;
	char _hasDefaultSiteIcon;
	char _isReaderAvailable;
	char _isFetchInProgress;
	NSMutableDictionary* _pageURLStringToPageNumberMap;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * title; 
@property (setter=setURLString:,nonatomic,copy) NSString * urlString; 
@property (nonatomic,copy) NSString * previewText; 
@property (nonatomic,copy) NSDate * dateLastViewed; 
@property (nonatomic,copy) NSDate * dateAdded; 
@property (assign,getter=isUnread,nonatomic) char unread; 
@property (assign,nonatomic) char addedLocally; 
@property (nonatomic,copy) NSDate * dateLastFetched; 
@property (nonatomic,readonly) char needsInfoUpdated; 
@property (assign,nonatomic) char isFetchInProgress;                                                //@synthesize isFetchInProgress=_isFetchInProgress - In the implementation block
@property (assign,nonatomic) int fetchResult; 
@property (nonatomic,readonly) unsigned long long numberOfFailedLoadsWithUnknownError; 
@property (nonatomic,readonly) char hasErrorDuringFetch; 
@property (assign,nonatomic) char isReaderAvailable;                                                //@synthesize isReaderAvailable=_isReaderAvailable - In the implementation block
@property (assign,nonatomic) char isArchiveOnDisk; 
@property (nonatomic,readonly) NSArray * urlStringsForAdditionalPages; 
@property (nonatomic,readonly) Bookmark* bookmark; 
@property (nonatomic,readonly) NSString * domainString; 
@property (nonatomic,readonly) NSImage * icon; 
@property (assign,nonatomic) char hasDefaultSiteIcon;                                               //@synthesize hasDefaultSiteIcon=_hasDefaultSiteIcon - In the implementation block
@property (nonatomic,retain,readonly) NSDate * legacySyncedDateLastFetched; 
@property (nonatomic,copy) NSString * localTitle; 
@property (nonatomic,copy) NSString * localPreviewText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)firstPageNumber;
+(id)keyPathsForValuesAffectingIcon;
+(id)keyPathsForValuesAffectingHasDefaultSiteIcon;
+(id)keyPathsForValuesAffectingUnread;
-(NSString *)urlString;
-(void)setURLString:(id)arg1 ;
-(Bookmark*)bookmark;
-(NSString *)UUID;
-(id)urlStringFromPageNumber:(unsigned long long)arg1 ;
-(unsigned long long)pageNumberFromURLString:(id)arg1 ;
-(char)hasDefaultSiteIcon;
-(NSDate *)dateAdded;
-(void)setDateLastViewed:(NSDate *)arg1 ;
-(void)setHasDefaultSiteIcon:(char)arg1 ;
-(char)isUnread;
-(void)setUnread:(char)arg1 ;
-(void)setIsFetchInProgress:(char)arg1 ;
-(void)setFetchResult:(int)arg1 ;
-(void)clearURLStringsForAdditionalPages;
-(void)addURLStringForAdditionalPage:(id)arg1 ;
-(char)isFetchInProgress;
-(char)needsInfoUpdated;
-(char)addedLocally;
-(id)initAsNewItemWithBookmark:(Bookmark*)arg1 ;
-(void)setIsArchiveOnDisk:(char)arg1 ;
-(char)isReaderAvailable;
-(char)hasErrorDuringFetch;
-(char)isArchiveOnDisk;
-(NSDate *)dateLastViewed;
-(void)updateWithFetchedURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 dateFetched:(id)arg4 ;
-(void)setIsReaderAvailable:(char)arg1 ;
-(void)didFailFetchingItemWithResult:(int)arg1 ;
-(NSDate *)dateLastFetched;
-(void)updateSiteIcon;
-(id)initAsExistingItemWithBookmark:(Bookmark*)arg1 ;
-(NSArray *)urlStringsForAdditionalPages;
-(void)setDateAdded:(NSDate *)arg1 ;
-(void)setAddedLocally:(char)arg1 ;
-(NSString *)localTitle;
-(void)removeLocalTitle;
-(NSString *)localPreviewText;
-(id)extraAttributeValueForKey:(id)arg1 ;
-(NSString *)previewText;
-(void)removeLocalPreviewText;
-(void)setExtraAttributeValue:(id)arg1 forKey:(id)arg2 ;
-(id)extraNonSyncAttributeValueForKey:(id)arg1 ;
-(void)setExtraNonSyncAttributeValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeNonSyncAttributeValueForKey:(id)arg1 ;
-(NSDate *)legacySyncedDateLastFetched;
-(int)fetchResult;
-(unsigned long long)numberOfFailedLoadsWithUnknownError;
-(void)removeDateLastViewed;
-(void)setLocalTitle:(NSString *)arg1 ;
-(void)setLocalPreviewText:(NSString *)arg1 ;
-(void)setDateLastFetched:(NSDate *)arg1 ;
-(void)removeAttributeValueForKey:(id)arg1 ;
-(NSString *)domainString;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSImage *)icon;
-(void)setPreviewText:(NSString *)arg1 ;
@end
