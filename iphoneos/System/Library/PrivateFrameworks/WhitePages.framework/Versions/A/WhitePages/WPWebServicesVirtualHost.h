/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WPWebServices, NSString, NSMutableDictionary;

@interface WPWebServicesVirtualHost : NSObject {

	WPWebServices* _webServices;
	NSString* _key;
	NSMutableDictionary* _info;

}
+(id)webServicesVirtualHostForWebServicesRecord:(id)arg1 withKey:(id)arg2 ;
+(id)webServicesVirtualHostWithKey:(id)arg1 ;
+(id)webServicesVirtualHost;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(id)principalPathTemplate;
-(char)supportsHTTPSProtocol;
-(unsigned long long)portForHTTPSProtocol;
-(char)supportsHTTPProtocol;
-(unsigned long long)portForHTTPProtocol;
-(id)urlReadableString;
-(id)userRelativeURIForServiceType:(id)arg1 ;
-(id)groupRelativeURIForServiceType:(id)arg1 ;
-(char)supportsServiceType:(id)arg1 ;
-(id)preferredProtocol;
-(unsigned long long)preferredPort;
-(id)webServices;
-(id)supportedServices;
-(char)isServiceTypeEnabled:(id)arg1 ;
-(char)canRecordCreateContent:(id)arg1 ;
-(id)humanReadableString;
-(id)hostDescription;
-(id)initWebServicesVirtualHostForWebServicesRecord:(id)arg1 withKey:(id)arg2 info:(id)arg3 ;
-(id)IPAddress;
-(char)isRecord:(id)arg1 memberOf:(id)arg2 ;
-(void)setSupportedServices:(id)arg1 ;
-(id)resourceRelativeURIForServiceType:(id)arg1 ;
-(id)calendarUserAddressTemplates;
-(id)recordsWithAccessToSite;
-(char)canRecordModerateContent:(id)arg1 ;
-(void)setHostDescription:(id)arg1 ;
-(void)setIPAddress:(id)arg1 ;
-(void)setPortForHTTPProtocol:(unsigned long long)arg1 ;
-(void)setPortForHTTPSProtocol:(unsigned long long)arg1 ;
-(void)setSupportsHTTPProtocol:(char)arg1 ;
-(void)setSupportsHTTPSProtocol:(char)arg1 ;
-(void)setIsServiceType:(id)arg1 enabled:(char)arg2 ;
-(void)setUserRelativeURI:(id)arg1 forServiceType:(id)arg2 ;
-(void)setGroupRelativeURI:(id)arg1 forServiceType:(id)arg2 ;
-(void)setResourceRelativeURI:(id)arg1 forServiceType:(id)arg2 ;
-(void)setPrincipalPathTemplate:(id)arg1 ;
-(void)setCalendarUserAddressTemplates:(id)arg1 ;
-(void)setRecordWithAccessToSite:(id)arg1 canCreate:(char)arg2 canModerate:(char)arg3 ;
-(void)removeRecordWithAccessToSite:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)key;
-(id)comments;
-(void)setComments:(id)arg1 ;
-(id)webServicesRecordGUID;
@end

