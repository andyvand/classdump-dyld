/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>

@class NSDate, NSString, NSURL, CalManagedCalendar, CalManagedSubscriptionError;

@interface CalManagedSubscriptionInfo : CalManagedObject

@property (assign) char hasAlarmFilter; 
@property (assign) char hasAttachmentFilter; 
@property (assign) char hasTaskFilter; 
@property (assign) char isAutoRefreshed; 
@property (assign) char isAutoProvisioned; 
@property (assign) char needsRefresh; 
@property (assign) long long refreshIntervalIfAutoRefreshed; 
@property (assign) int refreshInterval; 
@property (retain) NSDate * refreshDate; 
@property (retain) NSString * subscriptionID; 
@property (retain) NSString * subscriptionNotes; 
@property (retain) NSString * subscriptionTitle; 
@property (retain) NSURL * subscriptionURL; 
@property (readonly) NSString * user; 
@property (readonly) NSURL * displayableURL; 
@property (readonly) NSURL * browsableURL; 
@property (retain) CalManagedCalendar * calendar; 
@property (retain) CalManagedSubscriptionError * lastError; 
@property (retain) NSString * subscriptionURLString; 
@property (retain) NSString * languageCode; 
@property (retain) NSString * locationCode; 
@property (readonly) char isHolidayCalendar; 
+(void)initialize;
+(id)entityName;
-(NSString *)user;
-(id)properties;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
-(NSURL *)subscriptionURL;
-(void)setRefreshIntervalIfAutoRefreshed:(long long)arg1 ;
-(void)_activateSession;
-(void)_refreshSession;
-(void)_refreshSession:(long long)arg1 ;
-(id)_session;
-(void)willRefresh:(char)arg1 ;
-(id)enclosingSource;
-(char)isHolidayCalendar;
-(NSURL *)displayableURL;
-(NSURL *)browsableURL;
-(long long)refreshIntervalIfAutoRefreshed;
-(void)processForType:(int)arg1 inManagedObjectContext:(id)arg2 ;
-(char)_changeAffectsRefresh:(id)arg1 ;
-(id)_affectedObjectsForRefresh;
-(char)_insertAffectsAccount;
-(char)_deleteAffectsAccount;
-(id)_affectedObjectsForAccount;
@end

