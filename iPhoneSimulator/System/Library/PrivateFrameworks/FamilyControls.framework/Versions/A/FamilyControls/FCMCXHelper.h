/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCXPrefObject;

@interface FCMCXHelper : NSObject {

	MCXPrefObject* _mcxManager;
	FCMCXHelper* _mcxHelper;

}
+(id)mcxHelperForManager:(id)arg1 ;
-(id)initWithMCXManager:(id)arg1 ;
-(char)hasSettingsForDomains:(id)arg1 ;
-(id)MCXRAWDict;
-(void)removeForcedPrefsDictionaryForDomains:(id)arg1 ;
-(id)forcedPrefsObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setForcedPrefsObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(void)removeForcedPrefsObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setForcedPrefsDictionary:(id)arg1 inDomain:(id)arg2 ;
-(void)dealloc;
@end

