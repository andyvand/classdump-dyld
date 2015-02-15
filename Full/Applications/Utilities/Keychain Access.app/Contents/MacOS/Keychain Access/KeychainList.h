/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/MacOS/Keychain Access
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Keychain Access/Keychain Access-Structs.h>
@class NSArray;

@interface KeychainList : NSObject {

	NSArray* _keychainListCache;
	long long _firstUserKeychainItemIndex;
	long long _lastUserKeychainItemIndex;
	char _isActive;

}
+(void)lockAllKeychains;
+(id)sharedKeychainList;
+(char)isAKeychainFile:(id)arg1 ;
+(char)createNewKeychain;
+(void)addKeychain:(id)arg1 ;
+(void)addKeychainToPrefs:(OpaqueSecKeychainRefRef)arg1 ;
+(OpaqueSecKeychainRefRef)primaryKeychainStoreRef;
+(void)postKeychainListsHaveChanged;
+(void)postKeychainLockedStateChanged;
+(void)writeUserKeychainList:(id)arg1 ;
+(void)removeKeychainFromPrefs:(OpaqueSecKeychainRefRef)arg1 ;
+(char)isKeychainInList:(OpaqueSecKeychainRefRef)arg1 ;
+(char)isKeychainWithFilenameInList:(id)arg1 ;
+(BOOL)areAllKeychainsLocked;
+(id)primaryKeychainStorePath;
+(char)isPrimaryKeychainStoreRef:(OpaqueSecKeychainRefRef)arg1 ;
+(unsigned long long)getCount;
-(id)keychainRefs;
-(void)keychainListChangedNotification:(id)arg1 ;
-(void)keychainDefaultChangedNotification:(id)arg1 ;
-(void)keychainLockNotification:(id)arg1 ;
-(void)keychainUnlockNotification:(id)arg1 ;
-(void)cacheKeychainLists;
-(char)isKeychainRefInCache:(OpaqueSecKeychainRefRef)arg1 ;
-(long long)firstUserKeychainItemIndex;
-(long long)lastUserKeychainItemIndex;
-(void)moveUserKeychainRef:(OpaqueSecKeychainRefRef)arg1 toIndex:(long long)arg2 ;
-(void)addKeychainRefToCache:(OpaqueSecKeychainRefRef)arg1 ;
-(id)init;
-(void)dealloc;
@end
