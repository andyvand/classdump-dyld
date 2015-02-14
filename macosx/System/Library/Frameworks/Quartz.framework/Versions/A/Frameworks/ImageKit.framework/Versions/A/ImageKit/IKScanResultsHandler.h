/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, NSTableView, NSMutableArray, NSArray;

@interface IKScanResultsHandler : NSObject {

	NSWindow* _window;
	NSTableView* _tableView;
	NSMutableArray* _scanInfos;
	NSArray* _scanResultsTLO;

}

@property (retain) NSArray * scanResultsTLO;              //@synthesize scanResultsTLO=_scanResultsTLO - In the implementation block
+(void)autoShowUI;
+(id)sharedScannerResultsHandler;
-(void)removeScanInfo:(id)arg1 ;
-(void)hideUI;
-(void)redisplayScanInfo:(id)arg1 ;
-(void)addScanInfo:(id)arg1 ;
-(id)scanInfoForURL:(id)arg1 ;
-(NSArray *)scanResultsTLO;
-(void)setScanResultsTLO:(NSArray *)arg1 ;
-(id)init;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(void)clear:(id)arg1 ;
-(void)showUI;
-(void)doubleClick:(id)arg1 ;
@end

