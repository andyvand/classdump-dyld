/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/PrintAndScan.prefPane/Contents/MacOS/PrintAndScan
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintAndScan/NSMachPortDelegate.h>

@class NSRecursiveLock, PFPrinterGroup, NSMutableDictionary, NSMutableArray, NSPort, NSRunLoop, PKBrowser, NSString;

@interface PFPrinterManager : NSObject <NSMachPortDelegate> {

	NSRecursiveLock* _lock;
	PFPrinterGroup* _printerGroup;
	PFPrinterGroup* _faxGroup;
	PFPrinterGroup* _scannerGroup;
	NSMutableDictionary* _pfpsDict;
	NSMutableArray* _allGroups;
	NSMutableArray* _allDevices;
	NSMutableArray* _sortOrder;
	char _updateNeeded;
	NSPort* _printerListChangesPort;
	int _printersChangedPortToken;
	int _favoritesChangedPortToken;
	int _statusChangedPortToken;
	int _defaultIndex;
	NSRunLoop* _monitorLoop;
	PKBrowser* _pkBrowser;

}

@property (readonly) PFPrinterGroup * printerGroup;                 //@synthesize printerGroup=_printerGroup - In the implementation block
@property (readonly) PFPrinterGroup * faxGroup;                     //@synthesize faxGroup=_faxGroup - In the implementation block
@property (readonly) PFPrinterGroup * scannerGroup;                 //@synthesize scannerGroup=_scannerGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)allDevices;
-(id)faxes;
-(void)updateLists;
-(void)postNotify:(id)arg1 ;
-(void)doUpdate;
-(id)printers;
-(void)dirtyPrinterList;
-(void)stopPrinterListMonitor;
-(void)startPrinterListMonitor;
-(PFPrinterGroup *)scannerGroup;
-(PFPrinterGroup *)printerGroup;
-(PFPrinterGroup *)faxGroup;
-(id)scanners;
-(id)nearbyDevices;
-(id)allGroups;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)handlePortMessage:(id)arg1 ;
@end
