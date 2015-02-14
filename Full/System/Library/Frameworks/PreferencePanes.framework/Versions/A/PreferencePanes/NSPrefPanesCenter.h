/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PreferencePanes/PreferencePanes-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface NSPrefPanesCenter : NSObject {

	NSMutableArray* _ppBundles;
	NSMutableDictionary* _ppByIdentifier;
	unsigned long long _numIOPrefPanes;
	IONotificationPortRef _notifyPort;
	unsigned _ioIterator[16];

}
+(id)preferencesCacheFilePath;
+(id)prefPanesDirectories;
+(id)cacheFolderPath;
+(id)preferencesDirectoryPath;
+(id)sharedPreferencesCenter;
+(id)pathOfPreferenceWithIdentifier:(id)arg1 ;
-(void)updateCache;
-(void)_writeCache:(id)arg1 ;
-(id)_verifyAndReadCache;
-(void)_checkHWForPreferences:(id)arg1 ;
-(id)_prefPaneBundles;
-(id)_prefPanesByIdentifier;
-(unsigned long long)indexOfPrefPaneWithIdentifier:(id)arg1 ;
-(id)prefPaneBundleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPrefPanes;
-(id)prefPaneBundleWithIdentifier:(id)arg1 ;
-(unsigned long long)indexOfPrefPaneWithBundlePath:(id)arg1 ;
-(unsigned long long)indexOfPrefPane:(id)arg1 ;
-(id)orderedPrefPanes;
-(id)arrayOfPrefPaneIdentifiers;
-(void)updateCacheFileWithPrefPane:(id)arg1 ;
-(void)removePrefPaneFromCache:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

