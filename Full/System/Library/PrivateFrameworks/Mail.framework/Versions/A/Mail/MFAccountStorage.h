/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@interface MFAccountStorage : NSObject {

	id _plistLock;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)v2AccountsPlistName;
-(id)_accountsPlistPath;
-(id)init;
-(void)dealloc;
-(char)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
@end

