/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject {

	NSString* _singleDeviceSaveChangesThrottlingPolicyString;
	NSString* _multipleDeviceSaveChangesThrottlingPolicyString;
	NSString* _singleDeviceFetchChangesThrottlingPolicyString;
	NSString* _multipleDeviceFetchChangesThrottlingPolicyString;
	NSString* _syncCircleSizeRetrievalThrottlingPolicyString;
	unsigned long long _maximumRequestCharacterCount;
	unsigned long long _syncWindow;

}

@property (retain) NSString * singleDeviceSaveChangesThrottlingPolicyString;                 //@synthesize singleDeviceSaveChangesThrottlingPolicyString=_singleDeviceSaveChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * multipleDeviceSaveChangesThrottlingPolicyString;               //@synthesize multipleDeviceSaveChangesThrottlingPolicyString=_multipleDeviceSaveChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * singleDeviceFetchChangesThrottlingPolicyString;                //@synthesize singleDeviceFetchChangesThrottlingPolicyString=_singleDeviceFetchChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * multipleDeviceFetchChangesThrottlingPolicyString;              //@synthesize multipleDeviceFetchChangesThrottlingPolicyString=_multipleDeviceFetchChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * syncCircleSizeRetrievalThrottlingPolicyString;                 //@synthesize syncCircleSizeRetrievalThrottlingPolicyString=_syncCircleSizeRetrievalThrottlingPolicyString - In the implementation block
@property (assign) unsigned long long maximumRequestCharacterCount;                          //@synthesize maximumRequestCharacterCount=_maximumRequestCharacterCount - In the implementation block
@property (assign) unsigned long long syncWindow;                                            //@synthesize syncWindow=_syncWindow - In the implementation block
+(id)existingSharedCloudHistoryConfiguration;
-(void)applyRemoteConfiguration:(id)arg1 ;
-(id)platformBuiltInConfiguration;
-(id)remoteConfiguration;
-(void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2 ;
-(NSString *)singleDeviceSaveChangesThrottlingPolicyString;
-(NSString *)multipleDeviceSaveChangesThrottlingPolicyString;
-(NSString *)singleDeviceFetchChangesThrottlingPolicyString;
-(NSString *)multipleDeviceFetchChangesThrottlingPolicyString;
-(NSString *)syncCircleSizeRetrievalThrottlingPolicyString;
-(id)_builtInConfiguration;
-(void)_applyBuiltInConfiguration:(id)arg1 ;
-(id)_sharedBuiltInConfiguration;
-(void)_applyConfiguration:(id)arg1 withTolerance:(long long)arg2 ;
-(void)setSingleDeviceSaveChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMultipleDeviceSaveChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setSingleDeviceFetchChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMultipleDeviceFetchChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setSyncCircleSizeRetrievalThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMaximumRequestCharacterCount:(unsigned long long)arg1 ;
-(void)setSyncWindow:(unsigned long long)arg1 ;
-(unsigned long long)maximumRequestCharacterCount;
-(unsigned long long)syncWindow;
-(id)init;
@end

