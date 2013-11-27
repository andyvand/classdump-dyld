/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:40:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/ATConnectionDelegate.h>

@protocol AirTrafficSettingsDataSourceDelegate;
@class ATConnection, ATWakeupCall, NSString, NSMutableSet, NSTimer, NSDictionary, ;

@interface AirTrafficSettingsDataSource : NSObject <ATConnectionDelegate> {

	ATConnection* _connection;
	ATWakeupCall* _wakeupCall;
	NSString* _libraryIdentifier;
	NSMutableSet* _connectedLibraries;
	NSMutableSet* _wakeableLibraries;
	NSMutableSet* _wakingLibraries;
	NSMutableSet* _librariesWaitingToSync;
	NSMutableSet* _syncingLibraries;
	NSTimer* _waitingForSyncTimer;
	unsigned _backgroundTaskIdentifier;
	BOOL _registered;
	NSDictionary* _lastProgressDict;
	<AirTrafficSettingsDataSourceDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <AirTrafficSettingsDataSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) BOOL syncing; 
@property (nonatomic,readonly) BOOL waitingToSync; 
@property (nonatomic,readonly) BOOL waitingToWake; 
@property (getter=isWifiEnabled,nonatomic,readonly) BOOL wifiEnabled; 
+(id)sharedDataSource;
-(id)initWithLibraryIdentifier:(id)arg1 ;
-(void)unregisterConnectionIfUnused;
-(void)syncTimeoutExpired;
-(id)hostsWaitingToWake;
-(void)scanWakeableLibraries;
-(void)registerForProgressWithLibraryIdentifier:(id)arg1 ;
-(void)unregisterForProgress;
-(void)stopScanningWakeableLibraries;
-(id)hostForIdentifier:(id)arg1 ;
-(id)hostIdentifiers;
-(BOOL)waitingToWake;
-(BOOL)waitingToSync;
-(BOOL)syncing;
-(BOOL)isWifiEnabled;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)connection;
-(void)cancelSync;
-(BOOL)connected;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)requestSync;
-(void).cxx_destruct;
@end
