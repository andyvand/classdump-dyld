/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ADMWebServerConfig : NSObject {

	NSString* _configurationDirectory;

}
+(id)sharedWebServerConfig;
+(id)sharedRemoteAdminServerConfig;
-(id)initWithConfigurationDirectory:(id)arg1 ;
-(char)isWebServerRunning;
-(void)stopWebServer;
-(void)startWebServer;
-(void)restartWebServer;
-(char)isValidServerName:(id)arg1 ;
-(id)webServerName;
-(void)dealloc;
@end

