/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:21:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/ConfigurationProfiles/PlugIns/VPN.profileDomainPlugin_new/Contents/MacOS/VPN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VPN/ProfileDomainPayloadPluginProtocol.h>

@class NSString;

@interface NEProfileIngestionPlugin : NSObject <ProfileDomainPayloadPluginProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pdp_pluginDomainsSupported;
-(char)pdp_payloadRenewed:(id)arg1 forProfile:(id)arg2 forUserGUID:(id)arg3 withChanges:(id)arg4 error:(id*)arg5 ;
-(id)pdp_pluginDisplayDetailsForPayload:(id)arg1 forProfile:(id)arg2 ;
-(char)pdp_pluginDetermineMissingInfoForPayload:(id)arg1 forProfile:(id)arg2 forUserGUID:(id)arg3 intoResults:(id)arg4 error:(id*)arg5 ;
-(char)pdp_pluginRemovePayload:(id)arg1 forProfile:(id)arg2 forUserGUID:(id)arg3 error:(id*)arg4 ;
-(char)pdp_pluginInstallPayload:(id)arg1 forProfile:(id)arg2 forUserGUID:(id)arg3 replacingProfile:(id)arg4 error:(id*)arg5 ;
-(char)pdp_pluginValidatePayload:(id)arg1 forProfile:(id)arg2 forUserGUID:(id)arg3 outResponseFlags:(unsigned*)arg4 error:(id*)arg5 ;
-(char)removeVPNConfiguration:(id)arg1 profile:(id)arg2 ;
-(char)removeOrphanVPNConfigurations:(id)arg1 ;
-(id)setInstallFailure:(long long)arg1 forDomain:(id)arg2 ;
-(id)installVPNConfiguration:(id)arg1 payloadSummary:(id)arg2 credentialInfoArray:(id)arg3 isSystemProfile:(char)arg4 outSysPersistRefs:(id*)arg5 error:(id*)arg6 profile:(id)arg7 forUserGUID:(id)arg8 ;
-(id)getCertificateRefWithPayloadUUID:(id)arg1 profileCertRefs:(id)arg2 ;
-(char)installVPNConfigurationAppLayer:(id)arg1 forPayload:(id)arg2 andProfile:(id)arg3 ;
-(id)init;
@end
