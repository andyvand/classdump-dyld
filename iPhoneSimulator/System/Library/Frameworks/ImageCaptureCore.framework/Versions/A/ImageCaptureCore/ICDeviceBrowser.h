/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;

}

@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) char browsing; 
@property (assign) unsigned long long browsedDeviceTypeMask; 
@property (readonly) NSArray * devices; 
-(char)isBrowsing;
-(char)handleLaunchParams:(id)arg1 ;
-(id)preferredDevice;
-(char)queueLaunchAdd:(id)arg1 ;
-(void)addDevice:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(char)containsDevice:(id)arg1 ;
-(unsigned long long)browsedDeviceTypeMask;
-(void)setBrowsedDeviceTypeMask:(unsigned long long)arg1 ;
-(id)init;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id<ICDeviceBrowserDelegate>)delegate;
-(NSArray *)devices;
@end

