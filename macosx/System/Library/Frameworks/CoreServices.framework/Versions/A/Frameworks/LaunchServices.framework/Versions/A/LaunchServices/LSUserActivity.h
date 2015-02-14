/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LaunchServices/SFCompanionAdvertiserDelegate.h>

@protocol LSUserActivityDelegate;
@class LSUserActivityManager, NSMutableDictionary, NSString, NSURL, SFCompanionAdvertiser, NSError, NSUUID, NSDate, NSDictionary, NSData;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate> {

	LSUserActivityManager* _manager;
	NSMutableDictionary* _userInfo;
	NSMutableDictionary* _frameworkPayload;
	NSString* _title;
	NSURL* _webpageURL;
	id<LSUserActivityDelegate> _delegate;
	SFCompanionAdvertiser* _advertiser;
	SFCompanionAdvertiser* _resumerAdvertiser;
	double _lastSaveTime;
	char _saveScheduled;
	char _createsNewUUIDIfSaved;
	NSError* _decodeUserInfoError;
	char _needsSave;
	char _dirty;
	char _sendToServerPending;
	char _inWillSaveCallback;
	char _supportsContinuationStreams;
	char _forceImmediateSendToServer;
	char _encodedContainsUnsynchronizedCloudDocument;
	char _encodedFileProviderURL;
	double _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
	char _canCreateStreams;
	NSString* _typeIdentifier;
	NSUUID* _uniqueIdentifier;
	unsigned long long _suggestedActionType;
	NSDate* _lastActivityDate;
	NSDictionary* _options;
	NSData* _streamsData;

}

@property (copy) NSString * owningBundleIdentifier; 
@property (getter=isActive) char active; 
@property (copy) NSDictionary * activityPayload; 
@property (setter=setActivityPayload:,getter=activityPayload,copy) NSDictionary * activityPayloadDictionary; 
@property (setter=setFrameworkPayload:,getter=frameworkPayload,copy) NSDictionary * frameworkPayloadDictionary; 
@property (copy) NSDictionary * frameworkPayload; 
@property (copy) NSURL * webPageURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * typeIdentifier;                                                                                  //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * title; 
@property (copy) NSDictionary * userInfo; 
@property (copy) NSURL * webpageURL; 
@property (assign) char needsSave; 
@property (assign) char supportsContinuationStreams; 
@property (assign) char forceImmediateSendToServer;                                                                          //@synthesize forceImmediateSendToServer=_forceImmediateSendToServer - In the implementation block
@property (assign) id<LSUserActivityDelegate> delegate; 
@property (copy) NSUUID * uniqueIdentifier;                                                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long suggestedActionType;                                                                 //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (copy) NSDate * lastActivityDate;                                                                                  //@synthesize lastActivityDate=_lastActivityDate - In the implementation block
@property (copy) NSDictionary * options;                                                                                     //@synthesize options=_options - In the implementation block
@property (copy) NSData * streamsData;                                                                                       //@synthesize streamsData=_streamsData - In the implementation block
@property (assign) char canCreateStreams;                                                                                    //@synthesize canCreateStreams=_canCreateStreams - In the implementation block
@property (readonly) LSUserActivityManager * manager; 
@property (assign) char dirty; 
@property (assign) char sendToServerPending;                                                                                 //@synthesize sendToServerPending=_sendToServerPending - In the implementation block
@property (assign) char createsNewUUIDIfSaved;                                                                               //@synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved - In the implementation block
@property (retain) NSError * decodeUserInfoError;                                                                            //@synthesize decodeUserInfoError=_decodeUserInfoError - In the implementation block
@property (assign) char encodedContainsUnsynchronizedCloudDocument;                                                          //@synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument - In the implementation block
@property (assign) double encodedContainsUnsynchronizedCloudDocumentBackoffInterval;                                         //@synthesize encodedContainsUnsynchronizedCloudDocumentBackoffInterval=_encodedContainsUnsynchronizedCloudDocumentBackoffInterval - In the implementation block
@property (assign) char encodedFileProviderURL;                                                                              //@synthesize encodedFileProviderURL=_encodedFileProviderURL - In the implementation block
+(char)userActivityContinuationSupported;
+(char)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(char)arg3 ;
+(id)userActivityFromUUID:(id)arg1 withError:(id*)arg2 ;
+(id)suggestedActionOfType:(unsigned long long)arg1 ;
+(id)allowedWebpageURLSchemes;
+(id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)unregisterForSuggestedActionNudgeOfType:(id)arg1 ;
+(void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)userActivity;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)tellDaemonAboutNewLSUserActivity;
-(void)setDecodeUserInfoError:(NSError *)arg1 ;
-(void)setForceImmediateSendToServer:(char)arg1 ;
-(char)forceImmediateSendToServer;
-(void)scheduleSendUserActivityInfoToLSUserActivityd;
-(void)sendUserActivityInfoToLSUserActivityd:(char)arg1 onAsyncQueue:(char)arg2 ;
-(void)setEncodedContainsUnsynchronizedCloudDocument:(char)arg1 ;
-(void)setEncodedFileProviderURL:(char)arg1 ;
-(NSError *)decodeUserInfoError;
-(id)encodeUserInfo:(id)arg1 ;
-(id)decodeUserInfo:(id)arg1 ;
-(char)sendToServerPending;
-(void)setSendToServerPending:(char)arg1 ;
-(char)createsNewUUIDIfSaved;
-(void)setCreatesNewUUIDIfSaved:(char)arg1 ;
-(char)encodedContainsUnsynchronizedCloudDocument;
-(double)encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
-(void)setEncodedContainsUnsynchronizedCloudDocumentBackoffInterval:(double)arg1 ;
-(char)encodedFileProviderURL;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(char)canCreateStreams;
-(void)setCanCreateStreams:(char)arg1 ;
-(id)initWithSuggestedActionType:(unsigned long long)arg1 options:(id)arg2 ;
-(id)initWithUUID:(id)arg1 ;
-(NSString *)owningBundleIdentifier;
-(void)setOwningBundleIdentifier:(NSString *)arg1 ;
-(void)removeFrameworkPayloadForKey:(id)arg1 ;
-(void)updateActivityPayloadValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeActivityPayloadForKey:(id)arg1 ;
-(NSDictionary *)activityPayload;
-(void)setActivityPayload:(NSDictionary *)arg1 ;
-(id)resourceURLs;
-(void)setResourceURLs:(id)arg1 ;
-(id)addResourceURL:(id)arg1 ;
-(void)removeResourceURL:(id)arg1 ;
-(id)resourceURLForKey:(id)arg1 ;
-(id)userActivityInfoForSelf;
-(id)callWillSaveDelegateIfDirtyAndPackageUpData:(char)arg1 clearDirty:(char)arg2 ;
-(id)initWithManager:(id)arg1 userActivityInfo:(id)arg2 ;
-(void)willSynchronizeUserActivityWithHandler:(/*^block*/id)arg1 ;
-(void)didSynchronizeUserActivity;
-(void)advertiser:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(char)sendGURLAppleEvent;
-(id)initWithTypeIdentifier:(id)arg1 options:(id)arg2 ;
-(char)needsSave;
-(char)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(char)arg1 ;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(NSURL *)webPageURL;
-(void)setWebPageURL:(NSURL *)arg1 ;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3 ;
-(void)updateUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeUserInfoValueForKey:(id)arg1 ;
-(NSDictionary *)frameworkPayload;
-(void)setFrameworkPayload:(NSDictionary *)arg1 ;
-(void)updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeFrameworkPayloadValueForKey:(id)arg1 ;
-(unsigned long long)suggestedActionType;
-(NSDate *)lastActivityDate;
-(void)setLastActivityDate:(NSDate *)arg1 ;
-(id)init;
-(void)setDelegate:(id<LSUserActivityDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(char)isActive;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<LSUserActivityDelegate>)delegate;
-(NSDictionary *)options;
-(NSUUID *)uniqueIdentifier;
-(void)setActive:(char)arg1 ;
-(LSUserActivityManager *)manager;
-(void)remove;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)typeIdentifier;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(void)becomeCurrent;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)setNeedsSave:(char)arg1 ;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(void)save;
-(char)dirty;
-(void)setDirty:(char)arg1 ;
@end

