/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateTracking.framework/DevMateTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DMTrackingReporterInfoProvider, DMTrackingReporterDelegate;
@interface DMTrackingReporter : NSObject {

	id<DMTrackingReporterInfoProvider> _infoProvider;
	id<DMTrackingReporterDelegate> _delegate;

}

@property (readonly) id<DMTrackingReporterInfoProvider> infoProvider;              //@synthesize infoProvider=_infoProvider - In the implementation block
@property (assign) id<DMTrackingReporterDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)applicationLaunchCount;
+(id)reporterWithInfoProvider:(id)arg1 ;
+(void)load;
-(void)sendReport:(char)arg1 ;
-(id)initWithInfoProvider:(id)arg1 ;
-(id)prepareReportInfo;
-(id<DMTrackingReporterInfoProvider>)infoProvider;
-(void)setDelegate:(id<DMTrackingReporterDelegate>)arg1 ;
-(id<DMTrackingReporterDelegate>)delegate;
@end
