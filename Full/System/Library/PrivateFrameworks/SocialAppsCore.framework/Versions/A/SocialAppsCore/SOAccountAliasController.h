/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialAppsCore.framework/Versions/A/SocialAppsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMAccount, NSMutableOrderedSet, NSMutableArray, NSMutableDictionary;

@interface SOAccountAliasController : NSObject {

	IMAccount* _account;
	NSMutableOrderedSet* _aliasSet;
	NSMutableArray* _aliasTimers;
	NSMutableDictionary* _aliasLookup;

}

@property (__weak,readonly) IMAccount * account;                   //@synthesize account=_account - In the implementation block
@property (retain) NSMutableOrderedSet * aliasSet;                 //@synthesize aliasSet=_aliasSet - In the implementation block
@property (retain) NSMutableArray * aliasTimers;                   //@synthesize aliasTimers=_aliasTimers - In the implementation block
@property (retain) NSMutableDictionary * aliasLookup;              //@synthesize aliasLookup=_aliasLookup - In the implementation block
+(id)stringForAliasValidationFailure:(long long)arg1 aliasName:(id)arg2 ;
-(id)aliases;
-(id)vettedAliases;
-(long long)validationErrorReasonForAlias:(id)arg1 ;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)_vettedAliasesChanged:(id)arg1 ;
-(void)_aliasesChanged:(id)arg1 ;
-(void)_aliasValidationChanged:(id)arg1 ;
-(long long)vettedAliasCount;
-(long long)activeAliasCount;
-(char)addAliasWithName:(id)arg1 ;
-(void)confirmNewAlias:(id)arg1 ;
-(void)configureAliasState:(id)arg1 ;
-(void)removeAliasWithName:(id)arg1 ;
-(NSMutableOrderedSet *)aliasSet;
-(id)activeAliases;
-(NSMutableDictionary *)aliasLookup;
-(void)_stopListeningToNotifications;
-(void)setAliasSet:(NSMutableOrderedSet *)arg1 ;
-(void)setAliasLookup:(NSMutableDictionary *)arg1 ;
-(void)_listenToNotifications;
-(void)_initializeAliases;
-(void)removeAliasesWithNames:(id)arg1 ;
-(void)addAliasesWithNames:(id)arg1 ;
-(void)_addAliasToSet:(id)arg1 ;
-(id)aliasForName:(id)arg1 ;
-(void)_removeAliasFromSet:(id)arg1 ;
-(void)_clearTimers;
-(void)_addAliasesToSet:(id)arg1 ;
-(void)_addAliasTimer:(id)arg1 length:(double)arg2 ;
-(NSMutableArray *)aliasTimers;
-(void)setAliasTimers:(NSMutableArray *)arg1 ;
-(void)_validationTimerEnded:(id)arg1 ;
-(void)deactivateAliases:(id)arg1 ;
-(void)deleteAlias:(id)arg1 ;
-(void)_removeAliasesFromSet:(id)arg1 ;
-(void)_removeTimerForAliasName:(id)arg1 ;
-(void)dealloc;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
@end

