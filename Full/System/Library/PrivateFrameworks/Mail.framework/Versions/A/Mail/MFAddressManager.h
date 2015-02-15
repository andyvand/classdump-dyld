/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCActivityTarget.h>

@class NSMutableSet, NSMutableDictionary, NSCache, MCInvocationQueue, NSOperationQueue, NSString;

@interface MFAddressManager : NSObject <MCActivityTarget> {

	NSMutableSet* _emailsAwaitingImage;
	NSMutableSet* _emailsWithoutImage;
	NSMutableDictionary* _recordsCache;
	NSMutableSet* _addressesWithNoRecords;
	char _needToTrimRecordCaches;
	NSCache* _imageCache;
	MCInvocationQueue* _imageLoadingQueue;
	NSOperationQueue* _imageCreationQueue;

}

@property (nonatomic,readonly) NSCache * imageCache;                               //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) MCInvocationQueue * imageLoadingQueue;              //@synthesize imageLoadingQueue=_imageLoadingQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * imageCreationQueue;              //@synthesize imageCreationQueue=_imageCreationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_photoDimensionForPhotoSize:(unsigned long long)arg1 ;
+(id)addressManager;
+(id)placeholderImageOfSize:(unsigned long long)arg1 selected:(char)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_addressBookDidChange:(id)arg1 ;
-(void)_loadAddressBookSynchronously;
-(id)bestRecordMatchingFormattedAddress:(id)arg1 ;
-(void)_trimRecordCachesAfterDelay;
-(void)_trimRecordCaches;
-(NSCache *)imageCache;
-(void)_invalidateChangedRecords:(id)arg1 ;
-(void)_invalidateInsertedRecords:(id)arg1 ;
-(void)_clearCachedImagesForRemovedRecords:(id)arg1 ;
-(void)_postPhotoChangedNotification;
-(id)_fullAddressesForRecords:(id)arg1 ;
-(id)_addressBookRecordForEmail:(id)arg1 ;
-(id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)_addAddresses:(id)arg1 ;
-(id)_cachedImageForAddress:(id)arg1 displayName:(id)arg2 photoSize:(unsigned long long)arg3 selected:(char)arg4 ;
-(MCInvocationQueue *)imageLoadingQueue;
-(void)_fetchImageForAddress:(id)arg1 displayName:(id)arg2 size:(id)arg3 selected:(id)arg4 ;
-(id)_cacheKeyForAddress:(id)arg1 displayName:(id)arg2 ;
-(id)_cacheKeyForPhotoSize:(unsigned long long)arg1 selected:(char)arg2 ;
-(NSOperationQueue *)imageCreationQueue;
-(void)_setCachedImage:(id)arg1 forAddress:(id)arg2 displayName:(id)arg3 photoSize:(unsigned long long)arg4 selected:(char)arg5 ;
-(void)_abImageForAddress:(id)arg1 displayName:(id)arg2 photoSize:(unsigned long long)arg3 selected:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)groups;
-(id)loadAddressBookAsynchronously;
-(void)addRecentAddresses:(id)arg1 sendingAddress:(id)arg2 ;
-(void)addAddresses:(id)arg1 ;
-(id)addRecentToAddressBook:(id)arg1 ;
-(void)removeRecordFromAddressBook:(id)arg1 forRecent:(id)arg2 ;
-(void)removeRecentAddresses:(id)arg1 ;
-(void)removeRecentRecord:(id)arg1 ;
-(id)addressBookPersonForEmail:(id)arg1 ;
-(id)imageForMailAddress:(id)arg1 displayName:(id)arg2 photoSize:(unsigned long long)arg3 selected:(char)arg4 fetchState:(unsigned long long*)arg5 ;
-(id)init;
-(void)dealloc;
-(id)recordForUniqueId:(id)arg1 ;
@end

