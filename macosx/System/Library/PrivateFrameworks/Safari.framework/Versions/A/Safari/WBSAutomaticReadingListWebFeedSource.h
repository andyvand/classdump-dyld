/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/WBSAutomaticReadingListSocialSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSUbiquitousKeyValueStore, NSXPCConnection, WBSAutomaticReadingListTrackedRecordsInfo;

@interface WBSAutomaticReadingListWebFeedSource : WBSAutomaticReadingListSocialSource {

	NSObject*<OS_dispatch_queue> _webFeedSourceDataSynchronizationQueue;
	NSMutableSet* _subscribedFeeds;
	NSMutableSet* _potentialFeedSubscriptions;
	NSMutableSet* _subscribedFeedsAddedWhenSyncWasOff;
	NSMutableDictionary* _posts;
	NSMutableSet* _feedURLs;
	NSUbiquitousKeyValueStore* _subscriptionsKeyValueStore;
	char _canFetchFeeds;
	char _hasStartedFetchingFeeds;
	char _cloudSyncEnabled;
	NSXPCConnection* _webFeedParserConnection;

}

@property (nonatomic,readonly) WBSAutomaticReadingListTrackedRecordsInfo * items; 
@property (assign,nonatomic) char cloudSyncEnabled;                                            //@synthesize cloudSyncEnabled=_cloudSyncEnabled - In the implementation block
@property (nonatomic,retain) NSXPCConnection * webFeedParserConnection;                        //@synthesize webFeedParserConnection=_webFeedParserConnection - In the implementation block
+(id)sharedSource;
-(void)getSourceURLsForFeedURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)blockFeedWithItem:(id)arg1 ;
-(void)requestMoreItemsWithAge:(int)arg1 ;
-(void)addPairingFromSourceURL:(id)arg1 toFeedURL:(id)arg2 title:(id)arg3 iconURLs:(id)arg4 ;
-(void)subscribeToFeedURL:(id)arg1 fromSourceURL:(id)arg2 siteIconURLs:(id)arg3 ;
-(id)serviceImage;
-(void)debugClearWebFeedSubscriptionsKeyValueStore;
-(void)fetchPotentialSubscriptionFeedSources:(/*^block*/id)arg1 ;
-(void)getFeedSourcesWithState:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)blockFeedWithFeedURL:(id)arg1 ;
-(id)serviceName;
-(void)setCloudSyncEnabled:(char)arg1 ;
-(id)_findAccounts;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(id)accountTypeIdentifier;
-(void)_loadFeedSourcesFromDiskOnSynchronizationQueue;
-(id)_webFeedSourceListLocation;
-(void)_addFeedURL:(id)arg1 ;
-(void)_subscribedFeedsDidChangeExternallyOnSynchronizationQueue;
-(void)_removeFeedURL:(id)arg1 ;
-(void)_webFeedSourcesDidChangeOnSynchronizationQueue;
-(void)_subscribedFeedsDidChangeOnSynchronizationQueue;
-(void)_parseFeedURL:(id)arg1 ;
-(void)_beginFetchingFeedsIfNecessary;
-(id)_findSubscribedFeedsOnSynchronizationQueueWithFeedURL:(id)arg1 ;
-(void)_removeSubscribedFeedsOnSynchronizationQueueWithFeedURL:(id)arg1 ;
-(void)_persistBlockedFeedURL:(id)arg1 ;
-(void)_beginParsingFeedURL:(id)arg1 ;
-(NSXPCConnection *)webFeedParserConnection;
-(void)_parsingFinishedForFeedURL:(id)arg1 metadata:(id)arg2 entries:(id)arg3 ;
-(void)setWebFeedParserConnection:(NSXPCConnection *)arg1 ;
-(id)_subscriptionsToSync;
-(void)_persistSubscribedFeedURL:(id)arg1 fromSourceURL:(id)arg2 siteIconURLs:(id)arg3 ;
-(void)loadFeedSourcesIfNecessary;
-(void)_startListeningForCloudSubscriptionsChangesIfNecessary;
-(void)_setTitle:(id)arg1 forFeedURL:(id)arg2 ;
-(void)getSiteIconURLsForFeedURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)servicePluginIdentifier;
-(char)cloudSyncEnabled;
-(id)init;
-(char)isActive;
-(WBSAutomaticReadingListTrackedRecordsInfo *)items;
-(id)_items;
-(id)serviceType;
@end

