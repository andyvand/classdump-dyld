/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:18:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/NSNetServiceBrowserDelegate.h>
#import <IA/NSNetServiceDelegate.h>

@class NSString, NSNumber, NSNetService;

@interface OSLANServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	id _delegate;
	NSString* _serviceType;
	NSString* _serviceID;
	NSNumber* _serviceIDSuffix;
	unsigned short _listenPort;
	int _listenSocket;
	NSNetService* _netService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)startWithDelegate:(id)arg1 ;
-(void)acceptThread:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 serviceID:(id)arg2 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(NSString *)description;
@end
