/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateFeedback.framework/DevMateFeedback
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DMReportManagerDelegate <NSObject>
@optional
-(void)reportManagerDidFinishGatheringData:(id)arg1;
-(void)reportManagerDidStartGatheringData:(id)arg1;
-(void)reportManagerDidUpdateLogInfo:(id)arg1;
-(void)reportManagerDidUpdateAppPreferencesInfo:(id)arg1;
-(void)reportManagerDidUpdateSystemInfo:(id)arg1;
-(void)reportManagerDidStartUploadingData:(id)arg1;
-(void)reportManager:(id)arg1 didHandleReport:(id)arg2 success:(char)arg3;
-(void)reportManagerDidFailUpload:(id)arg1 errorDescription:(id)arg2;
-(void)reportManagerDidFinishUpload:(id)arg1;

@end

