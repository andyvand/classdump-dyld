/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABUserDefaults;

@interface ABPreferencesMigrator : NSObject {

	ABUserDefaults* _defaults;

}
+(void)migrateDefaults:(id)arg1 ;
-(id)initWithDefaults:(id)arg1 ;
-(void)migrateDefaults;
-(long long)preferencesVersion;
-(void)updatePreferencesVersionFromVersion:(long long)arg1 ;
-(void)updatePrivateMeCardPreferencesFromVersion:(long long)arg1 ;
-(void)updateBirthdayVisiblePreferenceFromVersion:(long long)arg1 ;
-(char)privateMeCardFieldsEnabledPreferenceExists;
-(char)hasPrivateMeCardFields;
-(void)enablePrivateMeCardFields;
-(char)birthdayVisiblePreferenceExists;
-(void)dealloc;
@end
