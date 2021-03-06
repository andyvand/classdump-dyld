/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSSet;

@interface _DockNotificationCenterBadgeConnection : NSObject {

	char _needsAuthentication;
	char _serverConnectionFailure;
	NSObject*<OS_xpc_object> _connection;
	NSSet* _badgesDisabledForBundleIdentifiers;

}
-(void)tellNCAboutDeletedApp:(id)arg1 ;
-(void)tellNCAboutUpdatedApp:(id)arg1 ;
-(char)badgesDisabledForIdentifier:(id)arg1 ;
-(void)_got_server_keep_alive:(id)arg1 ;
-(void)_handleDockBadgeSet:(id)arg1 ;
-(void)_handleDisabledBadgesSet:(id)arg1 ;
-(id)_serverConnection;
-(void)_send_connection_authentication;
-(id)init;
@end

