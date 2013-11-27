/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VideoCaptureProtocol.h>

@interface CMVideoCapture : NSObject <VideoCaptureProtocol> {

	tagHANDLE* _handle;

}
-(void)dealloc;
-(long)startPreview;
-(long)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(long)stop:(bool)arg1 ;
-(long)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(long)copyColorInfo:(const _CFDictionary*)arg1 ;
-(BOOL)isPreviewRunning;
-(long)setCameraType:(int)arg1 ;
-(long)getCameraType:(int*)arg1 ;
-(long)setFrameRatePercentage:(double)arg1 newFramerate:(int*)arg2 ;
-(long)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3 ;
-(id)initWithOptions:(void*)arg1 callback:(/*function pointer*/ void*)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraType:(int)arg6 withError:(int*)arg7 ;
@end
