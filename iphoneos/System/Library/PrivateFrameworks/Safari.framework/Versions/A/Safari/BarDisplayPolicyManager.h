/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BarDisplayPolicyManager : NSObject {

	NSMutableDictionary* _windowPolicyDictionary;
	NSMutableDictionary* _fullScreenPolicyDictionary;

}
+(id)sharedManager;
-(id)_policyStoreForContext:(int)arg1 ;
-(void)_persistPolicy:(int)arg1 inContext:(int)arg2 forBarWithIdentifier:(id)arg3 ;
-(void)_loadPoliciesFromUserDefaults;
-(void)setPolicy:(int)arg1 inContext:(int)arg2 forBarWithIdentifier:(id)arg3 ;
-(void)_persistPolicy:(int)arg1 forStatusBarInContext:(int)arg2 ;
-(void)_persistPolicy:(int)arg1 forFavoritesBarInContext:(int)arg2 ;
-(void)_persistPolicy:(int)arg1 forTabBarInContext:(int)arg2 ;
-(int)policyForBarWithIdentifier:(id)arg1 inContext:(int)arg2 ;
-(id)init;
-(id)_init;
@end
