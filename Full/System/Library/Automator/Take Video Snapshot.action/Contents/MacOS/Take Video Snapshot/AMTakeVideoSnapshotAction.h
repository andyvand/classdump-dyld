/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:58:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Take Video Snapshot.action/Contents/MacOS/Take Video Snapshot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class IKPictureTakerController;

@interface AMTakeVideoSnapshotAction : AMBundleAction {

	IKPictureTakerController* controller;

}
-(void)pictureTakerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_runTakePictureAction;
-(void)saveImage:(id)arg1 toFile:(id)arg2 ;
-(void)pictureAborted:(id)arg1 ;
-(void)pictureTaken:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)dealloc;
@end

