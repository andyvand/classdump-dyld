/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LSBestAppSuggestionManagerDelegate;
@class LSBestAppSuggestion, NSXPCConnection;

@interface LSBestAppSuggestionManager : NSObject {

	id<LSBestAppSuggestionManagerDelegate> _delegate;
	char _listeningForBestAppSuggestions;
	int _bestAppNotificationCount;
	LSBestAppSuggestion* _lastBestAppSuggestion;
	NSXPCConnection* _connection;

}

@property (__weak) id<LSBestAppSuggestionManagerDelegate> delegate; 
@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
-(void)notifyBestAppChanged:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 bundleIdentifier:(id)arg4 activityType:(id)arg5 when:(id)arg6 confidence:(double)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9 deviceType:(id)arg10 ;
-(void)startListeningForBestAppSuggestions;
-(void)stopListeningForBestAppSuggestions;
-(id)bestAppSuggestion;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6 ;
-(void)removeBestApp:(id)arg1 options:(id)arg2 ;
-(char)determineBestAppWithDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)bestAppSuggestions:(long long)arg1 ;
-(void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1 ;
-(void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2 ;
-(void)bestAppSuggestionLaunchWasCancelled:(id)arg1 ;
-(id)targetAEDescForBundleIdentifierIfRunning:(id)arg1 sendBringForward:(char)arg2 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2 ;
-(void)launchAppWithBestAppSuggestion:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)init;
-(void)setDelegate:(id<LSBestAppSuggestionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<LSBestAppSuggestionManagerDelegate>)delegate;
@end

