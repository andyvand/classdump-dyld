/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface PKBrowser : NSObject {

	id _properties;

}

@property (assign) id<PKBrowserDelegate> delegate; 
@property (readonly) char browsing; 
@property (assign) unsigned long long browsingMask; 
@property (readonly) NSArray * deviceList; 
@property (readonly) NSArray * filteredDeviceList; 
+(char)preferAirprint;
-(char)browsing;
-(unsigned long long)browsingMask;
-(void)setBrowsingMask:(unsigned long long)arg1 ;
-(void)startBrowsingForNearbyDevices;
-(void)stopBrowsingForNearbyDevices;
-(id)queueList;
-(NSArray *)filteredDeviceList;
-(void)startBonjourBrowser;
-(void)startScannerBrowser;
-(void)stopScannerBrowser;
-(void)stopBonjourBrowser;
-(void)notifyOfRecentChanges;
-(void)bonjourBrowseReply:(unsigned)arg1 interface:(unsigned)arg2 service:(id)arg3 type:(id)arg4 domain:(id)arg5 ;
-(id)icBrowser;
-(void)setProperties:(id)arg1 ;
-(NSArray *)deviceList;
-(void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(char)arg3 ;
-(void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(char)arg3 ;
-(id)init;
-(void)setDelegate:(id<PKBrowserDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id<PKBrowserDelegate>)delegate;
-(id)properties;
@end

