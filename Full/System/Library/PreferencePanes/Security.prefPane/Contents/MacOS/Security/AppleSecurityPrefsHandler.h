/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Security.prefPane/Contents/MacOS/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Security/Security-Structs.h>
@interface AppleSecurityPrefsHandler : NSObject {

	CFStringRef _app;
	CFStringRef _user;
	CFStringRef _host;
	char _isMachinePref;
	char _syncPending;

}
-(id)initWithApp:(CFStringRef)arg1 user:(CFStringRef)arg2 host:(CFStringRef)arg3 ;
-(char)readBoolean:(id)arg1 defaultValue:(char)arg2 ;
-(void)forceSyncNow;
-(void)writeString:(id)arg1 forKey:(id)arg2 ;
-(id)readString:(id)arg1 defaultValue:(id)arg2 ;
-(void)writeBoolean:(char)arg1 forKey:(id)arg2 ;
-(void)writeDict:(id)arg1 forKey:(id)arg2 ;
-(void)writeNSInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)writeFloat:(float)arg1 forKey:(id)arg2 ;
-(long long)readNSInteger:(id)arg1 defaultValue:(long long)arg2 ;
-(id)readDict:(id)arg1 ;
-(id)readArray:(id)arg1 ;
-(void)writeArray:(id)arg1 forKey:(id)arg2 ;
-(float)readFloat:(id)arg1 defaultValue:(float)arg2 ;
-(char)keyExists:(id)arg1 ;
-(unsigned long long)keyTypeID:(id)arg1 ;
-(void)removeKey:(id)arg1 ;
-(void)dealloc;
@end
