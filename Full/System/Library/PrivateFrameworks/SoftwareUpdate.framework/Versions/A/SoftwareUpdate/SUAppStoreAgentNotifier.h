/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSArray, NSDictionary;

@interface SUAppStoreAgentNotifier : NSObject {

	NSXPCConnection* _connection;
	char _postNotifyOnly;
	NSArray* _availableUpdates;
	NSArray* _installLaterKeys;
	NSArray* _postNotifyStrings;
	NSDictionary* _postLogoutInstallResults;
	long long _postNotifyCount;
	char _deviceInitiatedScan;
	/*^block*/id _logBlock;

}

@property (copy) id logBlock;              //@synthesize logBlock=_logBlock - In the implementation block
-(void)_getUpdateInformationFromDaemon;
-(id)initWithServiceConnection:(id)arg1 forPostInstallNotificationOnly:(char)arg2 ;
-(id)availableUpdateParameters;
-(void)notifyAppStoreAgentAndWaitUntilDone:(id)arg1 ;
-(id)logBlock;
-(void)setLogBlock:(id)arg1 ;
-(void)dealloc;
@end

