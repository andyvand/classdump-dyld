/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUAudioController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSArray;

@interface TUAudioSystemController : TUAudioController {

	NSObject*<OS_dispatch_queue> _uplinkMutedQueue;
	NSObject*<OS_dispatch_queue> _downlinkMutedQueue;
	NSObject*<OS_dispatch_queue> _ttyQueue;
	NSObject*<OS_dispatch_queue> _pickableRoutesQueue;
	NSNumber* _isUplinkMutedCached;
	NSNumber* _isDownlinkMutedCached;
	NSNumber* _isTTYCached;
	NSArray* _pickableRoutesForTTY;
	NSArray* _pickableRoutesForPhoneCall;
	NSArray* _pickableRoutesForPlayAndRecordVideo;
	NSArray* _pickableRoutesForPlayAndRecordVoice;
	NSArray* _pickableRoutesForPlayAndRecordRemoteVoice;
	char _isRequestingUplinkMuted;
	char _isRequestingDownlinkMuted;
	char _isRequestingTTY;
	char _isRequestingPickableRoutesForTTY;
	char _isRequestingPickableRoutesForPhoneCall;
	char _isRequestingPickableRoutesForPlayAndRecordVideo;
	char _isRequestingPickableRoutesForPlayAndRecordVoice;
	char _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
	unsigned long long _lastUplinkMutedRequestScheduleTime;
	unsigned long long _lastDownlinkMutedRequestScheduleTime;
	unsigned long long _lastTTYRequestScheduleTime;
	unsigned long long _lastTTYPickableRoutesScheduleTime;
	unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;

}
+(id)sharedSystemController;
+(id)sharedAudioSystemController;
-(void)_handleCallStatusChanged;
-(char)isUplinkMuted;
-(char)isDownlinkMuted;
-(char)isTTY;
-(id)pickableRoutesForTTY;
-(id)_pickableRoutesForPhoneCallWithForceNewRequest:(char)arg1 ;
-(id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(char)arg1 ;
-(id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(char)arg1 ;
-(id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(char)arg1 ;
-(id)_pickableRoutesForTTYWithForceNewRequest:(char)arg1 ;
-(char)setUplinkMuted:(char)arg1 ;
-(char)setDownlinkMuted:(char)arg1 ;
-(void)_handleUplinkMuteDidChangeNotification:(id)arg1 ;
-(void)_handleDownlinkMuteDidChangeNotification:(id)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2 ;
-(id)pickableRoutesForPhoneCallCategory;
-(id)pickableRoutesForFaceTimeAudioCategory;
-(id)pickableRoutesForFaceTimeVideoCategory;
-(id)init;
-(void)dealloc;
@end

