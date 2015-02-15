/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@interface ADMInternetServices : NSObject
+(id)sharedInternetServices;
-(char)setInetDServiceEnabled:(id)arg1 enabled:(char)arg2 ;
-(void)setHttpdEnabled:(char)arg1 ;
-(void)setRemoteAEServerEnabled:(char)arg1 ;
-(char)remoteAEServerEnabled;
-(CFBundleRef)_netFSServerFrameworkBundle;
-(char)ftpServerEnabled;
-(void)setFTPServerEnabled:(char)arg1 ;
-(char)isFTPServerAvailable;
-(char)sshServerEnabled;
-(void)setSSHServerEnabled:(char)arg1 ;
-(char)isSSHServerAvailable;
-(char)isRemoteAEServerAvailable;
-(char)faxReceiveEnabled;
-(void)setFaxReceiveEnabled:(char)arg1 ;
-(char)isFaxReceiveAvailable;
-(char)httpdEnabled;
-(char)isHttpdAvailable;
-(void)saveNatPrefs:(id)arg1 ;
-(char)isOpticalDiscSharingEnabled;
-(void)setOpticalDiscSharingEnabled:(char)arg1 ;
-(char)screensharingEnabled;
-(void)setScreensharingEnabled:(char)arg1 ;
-(void)sendSIGHUPToEfax;
-(unsigned)nscServerShutdown:(id)arg1 withDelay:(int)arg2 ;
-(char)isNSServerShuttingDown:(id)arg1 ;
-(void)nscServerCancelShutdown:(id)arg1 refNum:(unsigned)arg2 ;
-(char)isNSCProtocolAvailable:(id)arg1 ;
-(long long)numberOfClientsForProtocols:(id)arg1 ;
-(char)isGuestForProtocolEnabled:(id)arg1 ;
-(void)setGuestForProtocol:(id)arg1 enabled:(char)arg2 ;
-(char)isNSCProtocolEnabled:(id)arg1 ;
-(void)setNSCProtocols:(id)arg1 enabled:(char)arg2 ;
@end

