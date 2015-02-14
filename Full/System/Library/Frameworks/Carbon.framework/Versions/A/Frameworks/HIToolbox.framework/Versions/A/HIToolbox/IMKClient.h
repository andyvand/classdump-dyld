/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HIToolbox/HIToolbox-Structs.h>
#import <HIToolbox/IMKClientProtocol.h>

@class IMKInputSession, NSString, NSBundle, NSDictionary, NSArray, NSConnection, NSXPCConnection, NSXPCListenerEndpoint, NSRecursiveLock;

@interface IMKClient : NSObject <IMKClientProtocol> {

	IMKInputSession* _currentSession;
	NSString* _bundleIdentifier;
	NSBundle* _bundle;
	NSDictionary* _modes;
	NSDictionary* _inputMethodInfoDictionary;
	NSArray* localizedStrings;
	NSDictionary* _selectorDictionary;
	NSDictionary* _modeMenuKeys;
	char _lookedForMenuKeys;
	OpaqueEventHandlerRefRef _eventHandlerRef;
	CFMessagePortRef _launchPort;
	char _isServerStarted;
	char _clientHasDied;
	char _cleanTermination;
	char _serverDiedBadly;
	char _getServerRetryPending;
	SEL _getServerRetryNotificationSel;
	id _getServerRetryNotificationTarget;
	long long _getServerRetryCount;
	char _getServerGetMenuWasCalledDuringRetry;
	/*^block*/id _tisSelectInputSourceCompletionBlock;
	id _serverDOProxy;
	NSString* _connection;
	NSString* _serverName;
	NSConnection* _serverConnection;
	NSXPCConnection* _launcherXPCConnection;
	NSXPCListenerEndpoint* _inputMethodXPCEndpoint;
	long long _exceptionTimeoutBumpCount;
	double _timeout;
	char _waitingForMenu;
	/*^block*/id completionBlock;
	NSRecursiveLock* _remoteProxyLock;

}

@property (assign) char cleanTermination;              //@synthesize cleanTermination=_cleanTermination - In the implementation block
@property (assign) char serverDiedBadly;               //@synthesize serverDiedBadly=_serverDiedBadly - In the implementation block
@property (assign) char _waitingForMenu;               //@synthesize waitingForMenu=_waitingForMenu - In the implementation block
+(char)isConnectionTracing;
+(char)isClientServerTracing;
+(char)isClientServerXPCTracing;
+(char)isGeneralDebuggingOn;
+(char)isDataTracingOn;
+(char)clientServerXPCBlockStallLogging;
+(void)replyWaitCount_lockIncrement;
+(void)replyWaitCount_lockDecrement;
+(void)replyWaitCount_unlock;
+(int)replyWaitCount_testWithLocking;
+(void)replyWaitCount_incrementWithLocking;
+(void)replyWaitCount_decrementWithLocking;
-(id)currentSession;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)_serverConnection;
-(void)menuWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)modes;
-(void)modesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setServerDiedBadly:(char)arg1 ;
-(void)_setBundleIdentifier:(id)arg1 ;
-(id)_inputMethodInfoDictionary;
-(id)_modeMenuKeys;
-(void)_modeMenuKeysWithCompletionHandler:(/*^block*/id)arg1 ;
-(TISInputSourceRef)_mapKeyCodeToInputSource:(id)arg1 modifiers:(id)arg2 ;
-(void)_mapKeyCodeToInputSource:(id)arg1 modifiers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_selectorDictionary;
-(char)shouldUseXPC;
-(id)inputMethodXPCEndpoint;
-(void)_addActionFrom:(id)arg1 toDictionary:(id)arg2 forCarbonMenu:(OpaqueMenuRefRef)arg3 base:(unsigned long long)arg4 ;
-(char)isConnectionTracing;
-(id)remoteXPCProxyForSession:(id)arg1 fromCaller:(SEL)arg2 ;
-(id)serverDOProxy;
-(char)isClientServerTracing;
-(void)set_waitingForMenu:(char)arg1 ;
-(char)isClientServerXPCTracing;
-(OpaqueMenuRefRef)_createAndInstallMenuSetSelectorDictFromMenuDict:(id)arg1 ;
-(char)_bumpTimeout;
-(void)_setSelectorDictionary:(id)arg1 ;
-(char)_haveSafeServerProxy:(id)arg1 ;
-(void)invalidateServerConnection;
-(void)setTISSelectCompletionBlock:(/*^block*/id)arg1 ;
-(void)_cancelGetServerRetry;
-(char)_isNonLaunchOption;
-(void)_getServerRetry;
-(id)_getServerDOProxy;
-(void)fulfillServerDependentWork;
-(char)haveTISSelectCompletionBlock;
-(/*^block*/id)tisSelectCompletionBlock;
-(id)_safeServerDOProxy;
-(double)_defaultTimeout;
-(int)_launch:(id)arg1 fromBundle:(id)arg2 throughPort:(CFMessagePortRef)arg3 usingSBExtension:(char)arg4 ;
-(void)startServerSetupForEndpoint;
-(char)isGeneralDebuggingOn;
-(char)isDataTracingOn;
-(void)serverWillTerminate;
-(char)switchedInputMode:(OpaqueEventRefRef)arg1 ;
-(void)switchedInputMode:(OpaqueEventRefRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_buildSelectorDictionaryFromMenuDict:(id)arg1 settingCommandID:(OpaqueMenuRefRef)arg2 ;
-(OpaqueMenuRefRef)menuWithCompletionBlock:(/*^block*/id)arg1 ;
-(OpaqueEventHandlerRefRef)_eventHandlerRef;
-(void)_setEventHandlerRef:(OpaqueEventHandlerRefRef)arg1 ;
-(id)localizedStringForKey:(id)arg1 ;
-(id)imageFileForName:(id)arg1 ;
-(void)setCurrentSession:(id)arg1 ;
-(char)_isPalette;
-(char)_isServerRetryPending;
-(id)_targetForServerRetry;
-(char)_setTargetForServerRetry:(id)arg1 ;
-(void)_untargetFromServerRetry:(id)arg1 ;
-(char)_requestGetServerRetryNotifyingTarget:(id)arg1 withSelector:(SEL)arg2 ;
-(void)_checkSetTISCompletionBlock;
-(double)_timeout;
-(char)_startServer_AllowingSandboxExtension:(char)arg1 ;
-(char)cleanTermination;
-(void)setCleanTermination:(char)arg1 ;
-(char)serverDiedBadly;
-(char)_waitingForMenu;
-(void)xpcSetupForMessaging;
-(void)setIMKXPCEndpoint:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)invalidateIMKXPCEndpointForBundleIdentifier:(id)arg1 ;
-(void)_receiveXPCConnectionEndpoint:(id)arg1 ;
-(void)_invalidateXPCConnectionEndpoint;
-(char)_getServerXPCProxyForSession:(id)arg1 ;
-(void)dealloc;
-(id)bundleIdentifier;
-(OpaqueMenuRefRef)menu;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)_senderIsInvalid:(id)arg1 ;
-(id)_bundle;
-(/*^block*/id)completionBlock;
@end

