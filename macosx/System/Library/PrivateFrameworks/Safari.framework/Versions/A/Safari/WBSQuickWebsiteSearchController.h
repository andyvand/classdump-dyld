/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Safari/Safari-Structs.h>
@class NSObject, NSMutableDictionary, NSArray;

@interface WBSQuickWebsiteSearchController : NSObject {

	NSObject*<OS_dispatch_queue> _quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
	NSMutableDictionary* _quickWebsiteSearchProvidersByHost;
	NSMutableDictionary* _openSearchDescriptionsByDescriptionDocumentURLString;
	NSMutableDictionary* _hostSetsByOpenSearchDescriptionDocumentURLString;
	unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >* _writer;
	char _quickWebsiteSearchProvidersLoadedFromDisk;

}

@property (nonatomic,readonly) NSArray * quickWebsiteSearchHosts; 
@property (assign) char quickWebsiteSearchProvidersLoadedFromDisk;              //@synthesize quickWebsiteSearchProvidersLoadedFromDisk=_quickWebsiteSearchProvidersLoadedFromDisk - In the implementation block
+(id)sharedController;
-(void)beginLoadingFromDiskIfNeeded;
-(void)savePendingChangesBeforeTermination;
-(void)setSearchURLTemplateStringFromForm:(id)arg1 forSourcePageURLString:(id)arg2 ;
-(void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2 ;
-(void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2 ;
-(void)didPerformSearchWithProvider:(id)arg1 ;
-(id)providersMatchingQueryString:(id)arg1 ;
-(void)removeProviderWithHost:(id)arg1 ;
-(NSArray *)quickWebsiteSearchHosts;
-(id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1 ;
-(void)_didCollectOpenSearchDescription:(id)arg1 ;
-(void)_loadFromDisk;
-(void)_resetCachedDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_saveToDiskSoon;
-(char)quickWebsiteSearchProvidersLoadedFromDisk;
-(char)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1 ;
-(void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2 ;
-(void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2 ;
-(void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2 ;
-(void)removeProvidersWithHosts:(id)arg1 ;
-(char)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1 ;
-(id)_searchDescriptionsURL;
-(id)_dictionaryRepresentation;
-(void)_pruneUnusedQuickWebsiteSearchProviders;
-(void)_didFinishLoadingFromDisk;
-(void)setQuickWebsiteSearchProvidersLoadedFromDisk:(char)arg1 ;
-(void)noteProvidersAreStale;
-(id)providerForSourcePageURLString:(id)arg1 ;
-(id)init;
-(void)clear;
@end

