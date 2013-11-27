/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMetricsEventController, NSString;

@interface AnalyticsReportingOperation : ISOperation {

	SSMetricsEventController* _controller;
	NSString* _directory;
	long long _insertTimestamp;

}
-(id)_path;
-(void)_runForReportingURL:(id)arg1 ;
-(void)_destroyOutputFile:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)uniqueKey;
-(void)dealloc;
-(id)init;
-(void)run;
@end
