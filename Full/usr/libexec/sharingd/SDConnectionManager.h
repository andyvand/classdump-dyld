/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/SFCompanionXPCManagerProtocol.h>
#import <sharingd/SDCompanionConnectionDelegate.h>
#import <sharingd/SDCompanionStreamDelegate.h>
#import <sharingd/SDUnlockXPCSesssionDelegate.h>
#import <sharingd/SDCompanionPublisherProtocol.h>

@protocol SDConnectionManagerDelegate;
@class SDCompanionBrowser, SDActivityScanner, NSXPCConnection, NSMutableArray, SDServiceManager, SDActivityAdvertiser, NSMutableDictionary, SDHotspotBrowser, NSString;

@interface SDConnectionManager : NSObject <SFCompanionXPCManagerProtocol, SDCompanionConnectionDelegate, SDCompanionStreamDelegate, SDUnlockXPCSesssionDelegate, SDCompanionPublisherProtocol> {

	id<SDConnectionManagerDelegate> _delegate;
	SDCompanionBrowser* _browser;
	SDActivityScanner* _scanner;
	NSXPCConnection* _xpcConnection;
	NSMutableArray* _companionStreams;
	SDServiceManager* _serviceManager;
	SDActivityAdvertiser* _advertiser;
	NSMutableArray* _companionConnections;
	NSMutableDictionary* _deviceStreamMap;
	NSMutableArray* _unlockSessions;
	NSMutableArray* _streamIdentifiers;
	SDHotspotBrowser* _hotspotBrowser;

}

@property (__weak) id<SDConnectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) SDCompanionBrowser * browser;                          //@synthesize browser=_browser - In the implementation block
@property (retain) SDActivityScanner * scanner;                           //@synthesize scanner=_scanner - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;                       //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NSMutableArray * companionStreams;                     //@synthesize companionStreams=_companionStreams - In the implementation block
@property (retain) SDServiceManager * serviceManager;                     //@synthesize serviceManager=_serviceManager - In the implementation block
@property (retain) SDActivityAdvertiser * advertiser;                     //@synthesize advertiser=_advertiser - In the implementation block
@property (retain) NSMutableArray * companionConnections;                 //@synthesize companionConnections=_companionConnections - In the implementation block
@property (retain) NSMutableDictionary * deviceStreamMap;                 //@synthesize deviceStreamMap=_deviceStreamMap - In the implementation block
@property (retain) NSMutableArray * unlockSessions;                       //@synthesize unlockSessions=_unlockSessions - In the implementation block
@property (retain) NSMutableArray * streamIdentifiers;                    //@synthesize streamIdentifiers=_streamIdentifiers - In the implementation block
@property (retain) SDHotspotBrowser * hotspotBrowser;                     //@synthesize hotspotBrowser=_hotspotBrowser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)companionConnectionDidInvalidate:(id)arg1 ;
-(void)companionStreamClosedStreams:(id)arg1 ;
-(NSMutableArray *)companionStreams;
-(void)setCompanionStreams:(NSMutableArray *)arg1 ;
-(void)cleanUpConnections;
-(void)unlockSessionDidFinish:(id)arg1 ;
-(void)setServiceManager:(SDServiceManager *)arg1 ;
-(SDActivityAdvertiser *)advertiser;
-(void)setAdvertiser:(SDActivityAdvertiser *)arg1 ;
-(NSMutableArray *)companionConnections;
-(void)setCompanionConnections:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)deviceStreamMap;
-(void)setDeviceStreamMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)unlockSessions;
-(void)setUnlockSessions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)streamIdentifiers;
-(void)setStreamIdentifiers:(NSMutableArray *)arg1 ;
-(SDHotspotBrowser *)hotspotBrowser;
-(void)setHotspotBrowser:(SDHotspotBrowser *)arg1 ;
-(void)setScanner:(SDActivityScanner *)arg1 ;
-(SDServiceManager *)serviceManager;
-(void)createCompanionBrowserWithIdentifier:(id)arg1 serviceType:(id)arg2 clientProxy:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)createCompanionServiceManagerWithIdentifier:(id)arg1 clientProxy:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)createCompanionConnectionManagerForService:(id)arg1 clientProxy:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)createStreamsForMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)createActivityAdvertiserForClientProxy:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)createContinuityScannerForClientProxy:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)createUnlockManagerWithReply:(/*^block*/id)arg1 ;
-(void)createHotspotSessionForClientProxy:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(SDActivityScanner *)scanner;
-(void)setDelegate:(id<SDConnectionManagerDelegate>)arg1 ;
-(void)start;
-(id<SDConnectionManagerDelegate>)delegate;
-(void)setBrowser:(SDCompanionBrowser *)arg1 ;
-(SDCompanionBrowser *)browser;
@end
