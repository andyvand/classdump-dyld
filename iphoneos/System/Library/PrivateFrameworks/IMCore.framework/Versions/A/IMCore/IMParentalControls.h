/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMParentalControls : NSObject {

	char _shouldPostNotifications;
	char _active;
	char _disableAV;
	char _forceChatLogging;
	NSMutableDictionary* _parentalControls;

}

@property (nonatomic,readonly) char active;                                                 //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) char disableAV; 
@property (nonatomic,readonly) char forceChatLogging; 
@property (assign,nonatomic) char shouldPostNotifications;                                  //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _parentalControls;              //@synthesize parentalControls=_parentalControls - In the implementation block
@property (nonatomic,readonly) char _disableAV;                                             //@synthesize disableAV=_disableAV - In the implementation block
@property (nonatomic,readonly) char _forceChatLogging;                                      //@synthesize forceChatLogging=_forceChatLogging - In the implementation block
+(id)standardControls;
+(id)objectForKey:(id)arg1 ;
-(char)okToConnectAccount:(id)arg1 ;
-(void)setShouldPostNotifications:(char)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(char)disableAV;
-(char)forceChatLogging;
-(char)disableService:(id)arg1 ;
-(id)whitelistForService:(id)arg1 ;
-(char)forceWhitelistForService:(id)arg1 ;
-(char)accountIsEnabled:(id)arg1 ;
-(char)disableAccount:(id)arg1 ;
-(id)whitelistForAccount:(id)arg1 ;
-(char)forceWhitelistForAccount:(id)arg1 ;
-(char)accountHasWhitelist:(id)arg1 ;
-(char)shouldPostNotifications;
-(NSMutableDictionary *)_parentalControls;
-(char)_disableAV;
-(char)_forceChatLogging;
-(id)init;
-(void)dealloc;
-(char)active;
@end

