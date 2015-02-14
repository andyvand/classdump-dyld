/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/NSNetServiceBrowserDelegate.h>

@class NSNetServiceBrowser, NSMutableArray, NSMutableDictionary, NSString;

@interface BonjourServiceCollector : NSObject <NSNetServiceBrowserDelegate> {

	NSNetServiceBrowser* _serviceBrowser;
	NSMutableArray* _services;
	NSMutableDictionary* _serviceNameToServices;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceType:(id)arg1 inDomain:(id)arg2 ;
-(id)services;
-(unsigned)countOfServicesNamed:(id)arg1 ;
-(id)servicesNamed:(id)arg1 ;
-(void)_populateServiceNamesDictionaryIfNeeded;
-(void)_addServiceToServiceNamesDictionary:(id)arg1 ;
-(void)_removeServiceFromServiceNamesDictionary:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
@end

