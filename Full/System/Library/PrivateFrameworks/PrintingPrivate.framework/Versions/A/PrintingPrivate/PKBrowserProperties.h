/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKBrowserDelegate;
#import <PrintingPrivate/PrintingPrivate-Structs.h>
@class NSMutableArray, NSMutableDictionary, ICDeviceBrowser;

@interface PKBrowserProperties : NSObject {

	id<PKBrowserDelegate> delegate;
	char browsing;
	unsigned long long browsingMask;
	NSMutableArray* deviceList;
	NSMutableDictionary* deviceDictionary;
	NSMutableDictionary* recentDevices;
	DNSServiceRef_tRef main;
	ICDeviceBrowser* icDeviceBrowser;
	char cupsBrowsing;
	int printerListChangedToken;

}

@property (assign) id<PKBrowserDelegate> delegate; 
@property (assign) char browsing; 
@property (assign) unsigned long long browsingMask; 
@property (retain) NSMutableArray * deviceList; 
@property (retain) NSMutableDictionary * deviceDictionary; 
@property (retain) NSMutableDictionary * recentDevices; 
@property (assign) DNSServiceRef_tRef main; 
@property (retain) ICDeviceBrowser * icDeviceBrowser; 
@property (assign) char cupsBrowsing; 
@property (assign) int printerListChangedToken; 
-(char)browsing;
-(void)setBrowsing:(char)arg1 ;
-(unsigned long long)browsingMask;
-(void)setBrowsingMask:(unsigned long long)arg1 ;
-(NSMutableDictionary *)recentDevices;
-(NSMutableDictionary *)deviceDictionary;
-(void)setMain:(DNSServiceRef_tRef)arg1 ;
-(void)setDeviceDictionary:(NSMutableDictionary *)arg1 ;
-(void)setRecentDevices:(NSMutableDictionary *)arg1 ;
-(void)setCupsBrowsing:(char)arg1 ;
-(void)setIcDeviceBrowser:(ICDeviceBrowser *)arg1 ;
-(ICDeviceBrowser *)icDeviceBrowser;
-(char)cupsBrowsing;
-(int)printerListChangedToken;
-(void)setPrinterListChangedToken:(int)arg1 ;
-(NSMutableArray *)deviceList;
-(void)setDeviceList:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setDelegate:(id<PKBrowserDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id<PKBrowserDelegate>)delegate;
-(DNSServiceRef_tRef)main;
@end
