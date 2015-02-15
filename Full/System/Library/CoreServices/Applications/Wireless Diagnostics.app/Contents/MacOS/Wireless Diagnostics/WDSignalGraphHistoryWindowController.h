/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Wireless Diagnostics.app/Contents/MacOS/Wireless Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class GRChartView, GRXYDataSet, NSMutableArray, NSManagedObjectContext, NSDate, NSDateFormatter;

@interface WDSignalGraphHistoryWindowController : NSWindowController {

	GRChartView* _signalChartView;
	GRChartView* _snrChartView;
	GRChartView* _txRateChartView;
	GRXYDataSet* _snrDataSet;
	GRXYDataSet* _rssiDataSet;
	GRXYDataSet* _noiseDataSet;
	GRXYDataSet* _txRateDataSet;
	NSMutableArray* _samples;
	NSManagedObjectContext* _moc;
	char _isSetup;
	NSDate* _firstTimestamp;
	NSDateFormatter* _formatter;
	NSDateFormatter* _simpleFormatter;

}
-(unsigned long long)chart:(id)arg1 numberOfElementsForDataSet:(id)arg2 ;
-(double)chart:(id)arg1 yValueForDataSet:(id)arg2 element:(unsigned long long)arg3 ;
-(id)chart:(id)arg1 calloutForDataSet:(id)arg2 element:(unsigned long long)arg3 ;
-(double)chart:(id)arg1 xValueForDataSet:(id)arg2 element:(unsigned long long)arg3 ;
-(id)chart:(id)arg1 xLabelForAxes:(id)arg2 value:(double)arg3 defaultLabel:(id)arg4 ;
-(void)__updateGraphScale;
-(void)teardown;
-(id)init;
-(void)showWindow:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowWillClose:(id)arg1 ;
-(void)setup;
@end

