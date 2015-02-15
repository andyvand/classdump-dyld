/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLSystemConfigManager : NSObject {

	void* _prefs;
	char _notifyForExternalChangeOnly;
	int _applySkipCount;
	NSString* _serviceType;

}
+(id)sharedInstanceForCallbackWhileLocked:(void*)arg1 ;
+(id)sharedInstanceForServiceType:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)_refresh;
-(void)_notifyTarget:(unsigned)arg1 ;
-(void)_keepAlive;
-(void)_initializeSystemConfigPrefs:(id)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_synchronize;
-(void)_setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_SL1*)arg2 ;
-(void)setCachedUsername:(id)arg1 ;
-(id)cachedUsername;
-(void)_tearDown;
-(void)dealloc;
@end

