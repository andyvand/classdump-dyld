/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:12:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Activity Monitor.app/Contents/MacOS/Activity Monitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMenuItem, NSMenu, SMCPUMonitor, SMCPUInfo, SMNetworkInfo, SMDiskInfo, SMProcessController, NSWindow, NSNumberFormatter, GRChartView, NSMutableArray, GRPieDataSet, GRDataSet, NSColor, NSArray;

@interface SMBase : NSObject {

	NSMenuItem* _showExtendedInIcon;
	NSMenuItem* _showStandardInIcon;
	NSMenuItem* _showNetworkInIcon;
	NSMenuItem* _showDiskInIcon;
	NSMenuItem* _showMemoryInIcon;
	NSMenuItem* _showApplicationIcon;
	NSMenuItem* _showExtendedInIconDock;
	NSMenuItem* _showStandardInIconDock;
	NSMenuItem* _showNetworkInIconDock;
	NSMenuItem* _showDiskInIconDock;
	NSMenuItem* _showMemoryInIconDock;
	NSMenuItem* _showApplicationIconDock;
	NSMenu* _dockMenu;
	SMCPUMonitor* _cpuController;
	SMCPUInfo* _cpuInfo;
	SMNetworkInfo* _networkInfo;
	SMDiskInfo* _diskInfo;
	SMProcessController* _processController;
	NSWindow* _processWindow;
	int _iconType;
	NSNumberFormatter* _sizeFormatter;
	NSNumberFormatter* _bytesFormatter;
	NSNumberFormatter* _secondsFormatter;
	NSNumberFormatter* _minutesFormatter;
	GRChartView* _dockView;
	NSMutableArray* _inArray;
	NSMutableArray* _outArray;
	GRPieDataSet* _pieSet;
	GRDataSet* _inSet;
	GRDataSet* _outSet;
	NSColor* _inColor;
	NSColor* _outColor;
	int _dockIconType;
	NSArray* _pieArray;
	NSArray* _pieColorArray;

}

@property (retain) NSArray * pieArray;                   //@synthesize pieArray=_pieArray - In the implementation block
@property (retain) NSArray * pieColorArray;              //@synthesize pieColorArray=_pieColorArray - In the implementation block
@property (readonly) int dockIconType;                   //@synthesize dockIconType=_dockIconType - In the implementation block
+(id)sharedInstance;
-(unsigned long long)chart:(id)arg1 numberOfElementsForDataSet:(id)arg2 ;
-(double)chart:(id)arg1 yValueForDataSet:(id)arg2 element:(unsigned long long)arg3 ;
-(id)chart:(id)arg1 colorForDataSet:(id)arg2 element:(unsigned long long)arg3 ;
-(void)selectMenu:(id)arg1 ;
-(void)selectDockMenu:(id)arg1 ;
-(void)showNetworkInDockIcon:(id)arg1 ;
-(void)showDiskInDockIcon:(id)arg1 ;
-(void)showExtendedInDockIcon:(id)arg1 ;
-(void)showStandardInDockIcon:(id)arg1 ;
-(void)updateDockIcon;
-(id)sizeDescriptionForSize:(unsigned long long)arg1 ;
-(NSArray *)pieArray;
-(NSArray *)pieColorArray;
-(id)descriptionForTimeInterval:(double)arg1 ;
-(id)descriptionForSize:(id)arg1 delta:(id)arg2 ;
-(id)descriptionForBytesPerSecond:(unsigned long long)arg1 ;
-(void)showExtendedWindow:(id)arg1 ;
-(void)showStandardWindow:(id)arg1 ;
-(void)clearHistory:(id)arg1 ;
-(void)showProcessWindow:(id)arg1 ;
-(void)showNetworkStats:(id)arg1 ;
-(void)showDiskStats:(id)arg1 ;
-(int)dockIconType;
-(id)monitoredView;
-(void)showNothingInDockIcon:(id)arg1 ;
-(void)setupDockIconForLineChart;
-(void)showMemoryInDockIcon:(id)arg1 ;
-(void)setInColor:(id)arg1 ;
-(void)setOutColor:(id)arg1 ;
-(void)setInArray:(id)arg1 ;
-(void)setOutArray:(id)arg1 ;
-(void)setPieArray:(NSArray *)arg1 ;
-(void)setPieColorArray:(NSArray *)arg1 ;
-(id)init;
-(void)awakeFromNib;
@end
