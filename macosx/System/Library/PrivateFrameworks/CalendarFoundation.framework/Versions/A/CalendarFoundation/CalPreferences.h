/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {

	NSString* _domain;
	NSMutableSet* _registeredNotificationsToReflect;

}
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3 ;
-(char)getBooleanPreference:(id)arg1 defaultValue:(char)arg2 ;
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(void)_preferenceChangedInternally:(id)arg1 ;
-(void)_synchronizePreferences;
-(void)setBooleanPreference:(id)arg1 value:(char)arg2 notificationName:(id)arg3 ;
-(void)_preferenceChangedExternally:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDomain:(id)arg1 ;
-(id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2 ;
@end

