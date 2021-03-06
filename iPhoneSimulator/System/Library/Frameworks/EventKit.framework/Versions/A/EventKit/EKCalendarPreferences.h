/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences;

@interface EKCalendarPreferences : NSObject {

	CalPreferences* _preferences;
	CalPreferences* _calPreferences;

}

@property (retain) CalPreferences * calPreferences;              //@synthesize calPreferences=_calPreferences - In the implementation block
+(id)calendarPreferences;
-(void)_updateStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 state:(char)arg3 withKey:(id)arg4 withNotification:(id)arg5 ;
-(id)_disabledOrCollapsedItemsForDelegateID:(id)arg1 withKey:(id)arg2 ;
-(id)disabledCalendarsForDelegateWithUID:(id)arg1 ;
-(id)_keyForDelegateID:(id)arg1 ;
-(unsigned long long)_displayOrderForSourceWithIdentifier:(id)arg1 key:(id)arg2 ;
-(void)_updateDisplayOrderForSources:(id)arg1 key:(id)arg2 ;
-(void)updateCheckedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2 state:(char)arg3 ;
-(char)checkedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2 ;
-(void)updateExpandedStateForTopLevelNodeWithUID:(id)arg1 state:(char)arg2 ;
-(char)expandedStateForTopLevelNodeWithUID:(id)arg1 ;
-(char)_checkedStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 withKey:(id)arg3 ;
-(unsigned long long)displayOrderForLocalGroupWithSourceIdentifier:(id)arg1 ;
-(void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)arg1 ;
-(unsigned long long)displayOrderForAccountWithSourceIdentifier:(id)arg1 ;
-(void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)arg1 ;
-(CalPreferences *)calPreferences;
-(void)setCalPreferences:(CalPreferences *)arg1 ;
-(id)disabledCalendarsForMainWindow;
-(id)init;
@end

