/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPrimitiveUserDefaults;
@class NSDictionary;

@interface ABUserDefaults : NSObject {

	id<ABPrimitiveUserDefaults> _primitiveDefaults;
	NSDictionary* _registeredDefaults;

}

@property (copy) NSDictionary * registeredDefaults;              //@synthesize registeredDefaults=_registeredDefaults - In the implementation block
+(id)standardPreferences;
+(id)addressBookPreferences;
+(id)iisSupportPreferences;
+(id)addressBookManagerPreferences;
+(id)preferencesWithApplicationID:(id)arg1 ;
-(char)boolForKey:(id)arg1 keyExists:(char*)arg2 ;
-(id)initWithApplicationID:(id)arg1 ;
-(id)initWithPrimitiveDefaults:(id)arg1 ;
-(void)setRegisteredDefaults:(NSDictionary *)arg1 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(char*)arg2 ;
-(char)primitiveBoolValueForKey:(id)arg1 keyExists:(char*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(NSDictionary *)registeredDefaults;
-(id)primitiveDefaults;
-(long long)integerForKey:(id)arg1 keyExists:(char*)arg2 ;
-(char)userHasOptedOutOfPreference:(id)arg1 ;
-(char)userHasOptedInToPreference:(id)arg1 ;
-(void)dealloc;
-(char)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
@end

