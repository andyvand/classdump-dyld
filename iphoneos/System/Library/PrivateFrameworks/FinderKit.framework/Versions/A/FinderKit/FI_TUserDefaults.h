/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <CoreFoundation/NSUserDefaults.h>

@interface FI_TUserDefaults : NSUserDefaults
+(id)userDefaults;
+(long long)integerForRegID:(int)arg1 ;
+(BOOL)boolForRegID:(int)arg1 ;
+(BOOL)showAllExtensions;
+(BOOL)showAllFiles;
+(id)stringForRegID:(int)arg1 ;
+(void)setString:(id)arg1 forRegID:(int)arg2 ;
+(id)dictionaryForRegID:(int)arg1 ;
+(void)setDictionary:(id)arg1 forRegID:(int)arg2 ;
+(void)removeObjectForRegID:(int)arg1 ;
+(void)setBool:(BOOL)arg1 forRegID:(int)arg2 ;
+(BOOL)regIDExists:(int)arg1 ;
+(unsigned)fourCharCodeForRegID:(int)arg1 ;
+(void)setFourCharCode:(unsigned)arg1 forRegID:(int)arg2 ;
+(id)arrayForRegID:(int)arg1 ;
+(CGRect)rectForRegID:(int)arg1 ;
+(void)setRect:(const CGRect*)arg1 forRegID:(int)arg2 ;
+(void)resetUserDefaults;
+(void)setShowAllFiles:(BOOL)arg1 ;
+(id)objectForRegID:(int)arg1 ;
+(void)setObject:(id)arg1 forRegID:(int)arg2 ;
+(void)sendKeyChangedNotification:(const TString*)arg1 ;
+(double)doubleForRegID:(int)arg1 ;
+(void)setDouble:(double)arg1 forRegID:(int)arg2 ;
+(long long)sint64ForRegID:(int)arg1 ;
+(void)setSInt64:(long long)arg1 forRegID:(int)arg2 ;
+(float)floatForRegID:(int)arg1 ;
+(void)setFloat:(float)arg1 forRegID:(int)arg2 ;
+(double)cgFloatForRegID:(int)arg1 ;
+(void)setCGFloat:(double)arg1 forRegID:(int)arg2 ;
+(void)setInteger:(long long)arg1 forRegID:(int)arg2 ;
+(CGPoint)pointForRegID:(int)arg1 ;
+(void)setPoint:(const CGPoint*)arg1 forRegID:(int)arg2 ;
+(CGSize)sizeForRegID:(int)arg1 ;
+(void)setSize:(const CGSize*)arg1 forRegID:(int)arg2 ;
+(void)setArray:(id)arg1 forRegID:(int)arg2 ;
+(void)setShowAllExtensions:(BOOL)arg1 ;
+(void)sendRegIDChangedNotification:(int)arg1 ;
+(void)resetStandardUserDefaults;
+(BOOL)synchronize;
+(id)standardUserDefaults;
-(void)removeObjectForRegID:(int)arg1 ;
-(BOOL)regIDExists:(int)arg1 ;
-(void)preferencesNeedToBeSynced:(id)arg1 ;
-(void)showAllExtensionsPrefsChangedByLaunchServices:(id)arg1 ;
-(BOOL)_boolForRegID:(int)arg1 ;
-(id)objectForRegID:(int)arg1 ;
-(id)_finderObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forRegID:(int)arg2 ;
-(void)setObjectIfDifferent:(id)arg1 forKey:(id)arg2 ;
-(void)_finderSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(void)dealloc;
-(char)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
@end

