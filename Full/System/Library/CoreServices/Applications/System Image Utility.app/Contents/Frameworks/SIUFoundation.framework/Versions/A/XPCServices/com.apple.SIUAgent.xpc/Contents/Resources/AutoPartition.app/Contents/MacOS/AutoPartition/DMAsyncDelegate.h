/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Frameworks/SIUFoundation.framework/Versions/A/XPCServices/com.apple.SIUAgent.xpc/Contents/Resources/AutoPartition.app/Contents/MacOS/AutoPartition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DMAsyncDelegate
@optional
-(void)dmInterruptibilityChanged:(char)arg1;

@required
-(void)dmAsyncStartedForDisk:(DADiskRef)arg1;
-(void)dmAsyncProgressForDisk:(DADiskRef)arg1 barberPole:(char)arg2 percent:(float)arg3;
-(void)dmAsyncMessageForDisk:(DADiskRef)arg1 string:(id)arg2 dictionary:(id)arg3;
-(void)dmAsyncFinishedForDisk:(DADiskRef)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(id)arg4;

@end

