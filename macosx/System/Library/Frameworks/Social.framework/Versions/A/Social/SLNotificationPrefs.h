/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SLNotificationPrefs : NSObject
+(id)sharedPreferences;
-(id)defaultTwitterPrefs;
-(id)defaultSinaWeiboPrefs;
-(id)localizedPrefsForType:(id)arg1 withValue:(id)arg2 ;
-(id)defaultPrefsForBundleID:(id)arg1 ;
-(id)preferencesForClient:(id)arg1 ;
-(void)addCheckBoxFromPreferences:(id)arg1 toArray:(id)arg2 forKey:(id)arg3 ;
-(void)addRadioButtonsFromPreferences:(id)arg1 toArray:(id)arg2 forKey:(id)arg3 ;
-(id)notificationPreferencesForClient:(id)arg1 ;
-(id)notificationPreferenceForClient:(id)arg1 andKey:(id)arg2 ;
-(void)setNotificationPreferenceForClient:(id)arg1 withObject:(id)arg2 forKey:(id)arg3 ;
-(id)init;
@end

