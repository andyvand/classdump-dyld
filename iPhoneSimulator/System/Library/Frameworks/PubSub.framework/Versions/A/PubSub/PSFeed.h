/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PubSub/PubSub-Structs.h>
@class PSClient, NSString, NSDate, NSTimeZone, NSURL, NSError, PSFeedSettings, NSArray;

@interface PSFeed : NSObject {

	id _internal;

}

@property (readonly) PSClient * client; 
@property (retain,readonly) NSString * identifier; 
@property (retain,readonly) NSString * title; 
@property (retain,readonly) NSString * subtitle; 
@property (retain,readonly) NSString * rights; 
@property (retain,readonly) NSDate * dateUpdated; 
@property (retain,readonly) NSTimeZone * timeZoneUpdated; 
@property (retain,readonly) NSURL * URL; 
@property (retain,readonly) NSURL * alternateURL; 
@property (retain,readonly) NSURL * iconURL; 
@property (retain,readonly) NSURL * logoURL; 
@property (retain,readonly) NSURL * redirectedURL; 
@property (retain,readonly) NSDate * localDateUpdated; 
@property (retain) NSString * login; 
@property (readonly) int feedFormat; 
@property (getter=isRefreshing,readonly) char refreshing; 
@property (readonly) NSError * lastError; 
@property (retain) PSFeedSettings * settings; 
@property (readonly) NSArray * links; 
@property (readonly) int unreadCount; 
@property (readonly) NSArray * entries; 
-(void)setSettings:(PSFeedSettings *)arg1 ;
-(PSFeedSettings *)settings;
-(NSDate *)dateUpdated;
-(void)_beginRefresh;
-(void)_endRefresh;
-(void)_rememberDeletedEntry:(id)arg1 ;
-(void)_rememberAddedEntry:(id)arg1 ;
-(void)_rememberUpdatedEntry:(id)arg1 ;
-(void)_rememberFlaggedEntry:(id)arg1 ;
-(void)_sendEntryNotifications;
-(void)_checkForUnreadCountChange;
-(char)_addToClient:(ClientCore*)arg1 ;
-(char)_remove;
-(id)_initWithFeedCore:(FeedCore*)arg1 subscriptionCore:(SubscriptionCore*)arg2 ;
-(id)_temporarySettingsDictionary;
-(void)_notifyUpdating:(id)arg1 delegateSelector:(SEL)arg2 ;
-(void)_listenForAgentDeath;
-(void)_notifyClient:(id)arg1 selector:(SEL)arg2 entries:(id)arg3 userInfo:(id)arg4 key:(id)arg5 ;
-(id)XMLRepresentationWithEntries:(char)arg1 ;
-(NSURL *)redirectedURL;
-(FeedCore*)_feedCore;
-(id)initWithData:(id)arg1 URL:(id)arg2 ;
-(SubscriptionCore*)_subscriptionCore;
-(char)isRefreshing;
-(void)_agentDied;
-(id)entryEnumeratorSortedBy:(id)arg1 ;
-(id)extensionXMLElementsUsingNamespace:(id)arg1 ;
-(id)localDateCreatedOfNewestEntry;
-(NSString *)rights;
-(NSTimeZone *)timeZoneUpdated;
-(NSURL *)alternateURL;
-(NSURL *)iconURL;
-(NSURL *)logoURL;
-(NSDate *)localDateUpdated;
-(int)feedFormat;
-(id)XMLRepresentation;
-(NSArray *)entries;
-(int)unreadCount;
-(id)XMLData;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)title;
-(id)initWithURL:(id)arg1 ;
-(PSClient *)client;
-(NSString *)subtitle;
-(NSArray *)links;
-(NSError *)lastError;
-(void)setPassword:(id)arg1 ;
-(NSString *)login;
-(void)setLogin:(NSString *)arg1 ;
-(char)refresh:(id*)arg1 ;
@end

