/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PubSub/PubSub-Structs.h>
@class PSFeedSettings, NSDate, NSArray, NSString;

@interface PSClient : NSObject {

	id _internal;

}

@property (retain) PSFeedSettings * settings; 
@property (readonly) NSDate * dateLastUpdated; 
@property (readonly) NSArray * feeds; 
@property (retain,readonly) NSString * signature; 
@property (setter=setPrivate:,getter=isPrivate) char isPrivate; 
@property (assign) id delegate; 
+(id)applicationClient;
+(id)clientForBundleIdentifier:(id)arg1 ;
+(id)allClientBundleIdentifiers;
+(void)_enablePSLogging:(char)arg1 ;
+(char)startSync;
-(void)setSettings:(PSFeedSettings *)arg1 ;
-(PSFeedSettings *)settings;
-(NSArray *)feeds;
-(char)removeFeed:(id)arg1 ;
-(id)_initWithCore:(ClientCore*)arg1 ;
-(NSDate *)dateLastUpdated;
-(char)tracksEntryChanges;
-(void)_setDateLastUpdated:(id)arg1 ;
-(void)_refreshNonBackgroundSubscriptions;
-(void)_removeObservers;
-(void)_handleDownloadNotification:(ArrayOf<const __CFString>Ref)arg1 reload:(char)arg2 ;
-(void)sendChangesSinceDate:(id)arg1 ;
-(ClientCore*)_clientCore;
-(id)_enclosuresWhere:(const char*)arg1 ;
-(void)_tellDelegate:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)_handleFeedNotification:(const CFStringRef)arg1 sender:(const CFStringRef)arg2 ;
-(void)_sendChanges;
-(void)setTracksEntryChanges:(char)arg1 ;
-(void)_setUsesExtensionXML:(char)arg1 ;
-(char)_usesExtensionXML;
-(void)_handleSubscriptionNotification:(id)arg1 ;
-(char)addFeed:(id)arg1 ;
-(id)addFeedWithURL:(id)arg1 ;
-(id)feedWithURL:(id)arg1 ;
-(char)private;
-(void)setPrivate:(char)arg1 ;
-(id)feedWithIdentifier:(id)arg1 ;
-(id)entryWithIdentifier:(id)arg1 ;
-(void)expireAllEntries;
-(id)enclosures;
-(id)enclosuresBeingDownloaded;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)delegate;
-(NSString *)signature;
-(char)isPrivate;
@end

