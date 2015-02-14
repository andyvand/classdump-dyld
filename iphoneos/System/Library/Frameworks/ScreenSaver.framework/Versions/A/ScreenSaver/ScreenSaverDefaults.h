/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class NSMutableDictionary, NSString;

@interface ScreenSaverDefaults : NSUserDefaults {

	NSMutableDictionary* _defaults;
	NSMutableDictionary* _registeredDefaults;
	NSString* _userName;
	NSString* _domainName;
	char _dirty;
	char _screenLockPrefChanged;

}
+(id)defaultsForModuleWithName:(id)arg1 ;
+(id)defaultsForEngine;
+(id)defaultsForUser:(id)arg1 moduleName:(id)arg2 ;
+(id)defaultsForModule:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)standardUserDefaults;
-(id)initWithUser:(id)arg1 moduleName:(id)arg2 ;
-(id)_removeSecurityKeysFromDefaults:(id)arg1 ;
-(id)activeModule;
-(void)removeDefaultsForModuleWithName:(id)arg1 ;
-(id)registeredDefaults;
-(char)reload;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(void)removePersistentDomainForName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)synchronize;
-(id)persistentDomainForName:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)volatileDomainForName:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(id)volatileDomainNames;
-(id)persistentDomainNames;
@end

