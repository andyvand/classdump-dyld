/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/RemoteConfigurationConsumer.h>

@class NSString;

@interface PowerSaverConfigurationConsumer : NSObject <RemoteConfigurationConsumer> {

	Context* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConsumer;
+(id)_defaultPlugInWhitelistDomains;
-(char)remoteConfigurationsController:(id)arg1 didReceiveNewConfiguration:(id)arg2 forKey:(id)arg3 ;
-(void)loadConfigurationForContext:(const Context*)arg1 ;
-(void)_setPlugInAutoStartOrigins:(id)arg1 ;
-(void)dealloc;
@end
