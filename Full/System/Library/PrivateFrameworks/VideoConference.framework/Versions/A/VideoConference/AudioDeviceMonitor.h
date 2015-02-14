/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AudioDeviceMonitor : NSObject {

	unsigned _inputDeviceCount;
	char _needsRecount;
	unsigned _deviceID;

}
+(id)sharedMonitor;
-(void)monitorCurrentDevice;
-(void)monitorDevice:(unsigned)arg1 ;
-(void)countInputDevices;
-(void)postMessage:(id)arg1 ;
-(char)hasMicrophone;
-(unsigned)inputDeviceCount;
-(char)isOutputMuted;
-(void)setOutputMute:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end

