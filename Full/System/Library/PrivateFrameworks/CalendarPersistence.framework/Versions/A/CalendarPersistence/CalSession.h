/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalNetworkChangeNotificationListener.h>

@class NSError, NSManagedObjectID, NSString;

@interface CalSession : NSObject <CalNetworkChangeNotificationListener> {

	double _interval;
	int _status;
	NSError* _error;
	NSManagedObjectID* _objectID;
	NSString* _sessionID;

}

@property (assign) int status; 
@property (retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (assign) double interval;                                    //@synthesize interval=_interval - In the implementation block
@property (retain,readonly) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (retain) NSString * sessionID;                               //@synthesize sessionID=_sessionID - In the implementation block
+(id)defaultUserAgent;
+(id)knownNonNodeSessionIDs;
+(void)setDefaultUserAgent:(id)arg1 ;
-(void)setInterval:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(void)synchronize;
-(char)activate;
-(void)deactivate;
-(NSManagedObjectID *)objectID;
-(int)status;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)interval;
-(void)_schedule;
-(void)setStatus:(int)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(void)reactivate;
-(id)initWithSessionID:(id)arg1 ;
-(void)goOnline;
-(void)goOffline;
-(void)deletePersistedErrorAndNotify;
-(void)synchronizeDelegatesWithCompletion:(/*^block*/id)arg1 ;
-(char)updatePushState:(char)arg1 ;
-(void)schedule;
-(id)_createScheduleCriteria;
-(void)timerFiredWithInfo:(id)arg1 ;
-(char)needsSyncDueToTime;
-(id)managedObjectInContext:(id)arg1 ;
-(void)synchronizeWithFlags:(long long)arg1 ;
-(id)debugInfo;
-(void)reschedule;
-(double)timeSinceLastSync;
-(char)needsSync;
-(char)processChangeRequests:(char)arg1 ;
-(char)persistErrorAndNotify;
-(void)systemNetworkDidChange;
-(void)systemWillSleep;
-(void)systemDidWake;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)unschedule;
-(void)broadcastStatusUpdate;
-(char)isOffline;
-(char)isOfflineOrError;
-(void)setError:(id)arg1 status:(int)arg2 ;
@end

