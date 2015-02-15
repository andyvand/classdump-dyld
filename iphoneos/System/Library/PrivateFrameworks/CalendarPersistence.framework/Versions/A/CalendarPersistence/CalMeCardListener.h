/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalABListener.h>

@protocol OS_dispatch_queue;
@class NSObject, CalMeCard;

@interface CalMeCardListener : CalABListener {

	NSObject*<OS_dispatch_queue> _cacheInitializationQueue;
	NSObject*<OS_dispatch_queue> _cacheAccessQueue;
	char _initializedInMemoryCache;
	CalMeCard* _calMeCard;

}

@property (retain) CalMeCard * calMeCard;              //@synthesize calMeCard=_calMeCard - In the implementation block
+(id)sharedListener;
-(id)init;
-(void)dealloc;
-(CalMeCard *)calMeCard;
-(id)_plistPath;
-(void)setCalMeCard:(CalMeCard *)arg1 ;
-(id)_currentCalMeCardDerivedFromAB;
-(void)_updateInMemoryCacheAndNotifyWithCalMeCard:(id)arg1 ;
-(void)_notifyCalMeCardChanged;
-(id)_scheduledEventManagedIDsInContext:(id)arg1 ;
-(char)_updateMyAttendeeForEventIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)_updateCachesWithCalMeCard:(id)arg1 ;
-(char)_checkIfMeCardOutOfDate;
-(void)_runUpdateJobSynchronously;
-(id)_currentCachedMeCardUniqueID;
-(void)_runUpdateJobIfNecessaryInBackground;
-(id)currentCachedMeCard;
-(void)_addressBookChanged:(id)arg1 ;
-(void)_configureInBackground;
-(void)ensureMeCardCacheFileExists;
@end
