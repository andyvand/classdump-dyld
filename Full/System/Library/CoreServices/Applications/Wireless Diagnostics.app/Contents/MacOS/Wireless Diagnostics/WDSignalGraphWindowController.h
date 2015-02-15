/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Wireless Diagnostics.app/Contents/MacOS/Wireless Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class GRChartView, GRXYDataSet, NSMutableArray, NSTimer, NSManagedObjectContext, NSFileHandle, WDXPCClient, SFAuthorization, CWInterface;

@interface WDSignalGraphWindowController : NSWindowController {

	GRChartView* _signalChartView;
	GRChartView* _snrChartView;
	GRChartView* _txRateChartView;
	GRXYDataSet* _snrDataSet;
	GRXYDataSet* _rssiDataSet;
	GRXYDataSet* _noiseDataSet;
	GRXYDataSet* _txRateDataSet;
	NSMutableArray* _samples;
	NSTimer* _sampleTimer;
	long long _minSignalSampleIndex;
	long long _maxSignalSampleIndex;
	long long _minTxRateSampleIndex;
	long long _maxTxRateSampleIndex;
	long long _minSNRSampleIndex;
	long long _maxSNRSampleIndex;
	NSManagedObjectContext* _moc;
	double _lastSaveTimestamp;
	NSFileHandle* _writeHandle;
	char _isSetup;
	WDXPCClient* _xpcClient;
	SFAuthorization* _authorization;
	CWInterface* _interface;

}

@property (retain) WDXPCClient * xpcClient;                      //@synthesize xpcClient=_xpcClient - In the implementation block
@property (retain) SFAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (retain) CWInterface * interface;                      //@synthesize interface=_interface - In the implementation block
-(unsigned long long)chart:(id)arg1 numberOfElementsForDataSet:(id)arg2 ;
-(double)chart:(id)arg1 yValueForDataSet:(id)arg2 element:(unsigned long long)arg3 ;
-(double)chart:(id)arg1 xValueForDataSet:(id)arg2 element:(unsigned long long)arg3 ;
-(WDXPCClient *)xpcClient;
-(void)setXpcClient:(WDXPCClient *)arg1 ;
-(void)__updateGraphScale;
-(void)querySignalInfo:(id)arg1 ;
-(SFAuthorization *)authorization;
-(void)setAuthorization:(SFAuthorization *)arg1 ;
-(CWInterface *)interface;
-(void)setInterface:(CWInterface *)arg1 ;
-(void)teardown;
-(void)showWindow:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowWillClose:(id)arg1 ;
-(void)setup;
@end

