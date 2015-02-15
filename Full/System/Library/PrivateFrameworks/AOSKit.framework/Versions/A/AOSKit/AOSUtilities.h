/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AOSKit/AOSKit-Structs.h>
@interface AOSUtilities : NSObject
+(id)makeAgentRequestWithAccount:(AOSAccountRef)arg1 type:(int)arg2 args:(id)arg3 callback:(AOSCallbackInfo*)arg4 maxRetries:(int)arg5 ;
+(id)clientIdentifierFromAccount:(AOSAccountRef)arg1 ;
+(char)validateURL:(id)arg1 forAccount:(AOSAccountRef)arg2 withInfo:(id)arg3 ;
+(char)postNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(char)arg4 timeout:(double)arg5 ;
+(id)mailPropsCache;
+(AOSTransactionC*)createTransactionWithResult:(void*)arg1 error:(CFErrorRef)arg2 callbackInfo:(AOSCallbackInfo*)arg3 ;
+(void)addCallStackInfo:(id)arg1 toAccount:(AOSAccountRef)arg2 ;
+(char)isPrimaryAccount:(AOSAccountRef)arg1 ;
+(char)setValue:(id)arg1 forKey:(id)arg2 andAccount:(AOSAccountRef)arg3 ;
+(id)valueForKey:(id)arg1 andAccount:(AOSAccountRef)arg2 ;
+(void)setCachedSignUpSessionInfo:(id)arg1 ;
+(id)machineSerialNumber;
+(id)currentComputerName;
+(id)machineUDID;
+(void)registerForPushNotifications;
+(id)cachedSignUpSessionInfo;
+(id)generateSignUpSessionInfoForClient:(id)arg1 ;
+(id)currentProcessIdentifier;
+(void)handleHSAErrorsForRequest:(id)arg1 withDSID:(id)arg2 andClientID:(id)arg3 ;
+(id)adsidForAccount:(AOSAccountRef)arg1 usingInfo:(id)arg2 ;
+(void)openICloudPrefsWithAction:(id)arg1 ;
+(void)openIAPrefsForDSID:(id)arg1 withAction:(id)arg2 ;
+(id)hashBTMMPassword:(id)arg1 usingAccountInfo:(id)arg2 ;
+(id)aliasesForAccount:(AOSAccountRef)arg1 withInfo:(id)arg2 ;
+(id)retrieveOTPHeadersForDSID:(id)arg1 ;
+(char)sessionLostKeychainAccess;
+(void)attemptDaemonShutdown;
+(id)agentSessionInfo;
+(char)_isKnownDomain:(id)arg1 usingAccountInfo:(id)arg2 ;
+(id)_payloadWithAccount:(AOSAccountRef)arg1 requestType:(int)arg2 requestArgs:(id)arg3 ;
+(id)stringForRequestType:(int)arg1 ;
+(char)_isTransactionExpectedForRequestType:(int)arg1 ;
+(id)aosErrorWithCode:(int)arg1 ;
+(void)_handleCompletionForRequestWithType:(int)arg1 result:(id)arg2 andAccount:(AOSAccountRef)arg3 ;
+(char)updateBTMMConfigForAccount:(AOSAccountRef)arg1 ;
+(id)currentProcessName;
+(id)xmlStringFromDictionary:(id)arg1 ;
+(char)currentUserIsAdmin;
+(id)namedPortForAPSEnvironment:(id)arg1 ;
+(int)checkKeychainAccess:(id*)arg1 ;
+(id)notificationCenterLock;
+(char)executeBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 andLock:(id)arg4 ;
+(char)_performProvisioningAction:(id)arg1 forRequest:(id)arg2 withDSID:(id)arg3 andClientID:(id)arg4 ;
+(id)_cachedValidationStatusForDomain:(id)arg1 ;
+(void)_cacheValidationStatus:(id)arg1 forDomain:(id)arg2 ;
+(id)payloadDescription:(id)arg1 ;
+(id)pushLock;
+(void)setAgentSessionInfo:(id)arg1 ;
+(void)initialize;
+(char)isDaemon;
@end

