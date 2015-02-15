/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore;

@interface CalAccountsProvider : NSObject {

	ACAccountStore* _store;

}
+(id)defaultProvider;
-(id)init;
-(void)dealloc;
-(id)oauthTokenForAccountWithIdentifier:(id)arg1 tokenType:(id)arg2 ;
-(id)generateGoogleTokenForUID:(id)arg1 ;
-(id)generateGoogleTokenForUsername:(id)arg1 ;
-(id)googleTokenIfExistsForUID:(id)arg1 ;
-(id)googleTokenIfExistsForUsername:(id)arg1 ;
-(id)providerIDForPluginID:(id)arg1 ;
-(void)notifyAccountsChangedExternally;
-(id)pluginIDForCalDAVHost:(id)arg1 ;
-(id)pluginIDForExchangeHost:(id)arg1 ;
-(char)isPluginIDSupported:(id)arg1 forApp:(id)arg2 ;
-(char)shouldSendInfoForPluginWithID:(id)arg1 ;
-(void)messageTraceAccountTypes;
-(id)acAccountWithIdentifier:(id)arg1 ;
-(id)iaAListPluginForCalDAVHost:(id)arg1 ;
-(void)_traceAccountsByType:(id)arg1 ;
-(void)_traceAccountsByProvider:(id)arg1 ;
-(id)_providerShortNameForProviderID:(id)arg1 ;
-(void)renewAccountCredentialsForAccountWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)iaAlistPluginForExchangeHost:(id)arg1 ;
-(id)brandNameForHost:(id)arg1 ;
-(char)shouldStorePasswordForCalDAVHost:(id)arg1 ;
-(id)titleForAccountWithHost:(id)arg1 login:(id)arg2 ;
@end

