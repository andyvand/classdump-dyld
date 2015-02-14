/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableSet;

@interface CUTTelephonyManager : NSObject {

	char _registered;
	NSRecursiveLock* _lock;
	NSMutableSet* _disableFastDormancyTokens;
	void* __suspendDormancyAssertion;

}

@property (assign,nonatomic) char registered;                                       //@synthesize registered=_registered - In the implementation block
@property (assign,nonatomic) void* _suspendDormancyAssertion;                       //@synthesize _suspendDormancyAssertion=__suspendDormancyAssertion - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * disableFastDormancyTokens;              //@synthesize disableFastDormancyTokens=_disableFastDormancyTokens - In the implementation block
+(id)sharedInstance;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
-(void)_adjustFastDormancyTokens;
-(void)__adjustFastDormancyTokens;
-(void)_setFastDormancySuspended:(char)arg1 ;
-(char)disableFastDormancy;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(NSMutableSet *)disableFastDormancyTokens;
-(void)setDisableFastDormancyTokens:(NSMutableSet *)arg1 ;
-(void*)_suspendDormancyAssertion;
-(void)set_suspendDormancyAssertion:(void*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSRecursiveLock *)lock;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end

