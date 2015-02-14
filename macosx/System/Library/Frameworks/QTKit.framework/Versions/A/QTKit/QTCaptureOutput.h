/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTCaptureSession;

@interface QTCaptureOutput : NSObject {

	QTCaptureSession* _session;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)notReadyError;
-(void)graphWillStartForSession:(id)arg1 ;
-(char)prefersMixedAudio;
-(int)videoDecompressionRequirementForConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(char)getAudioMixerNode:(int*)arg1 andUnitElement:(unsigned*)arg2 forConnection:(id)arg3 ;
-(void)graphWillStopForSession:(id)arg1 dueToError:(id)arg2 ;
-(id)videoDecompressionAttributesForVideoConnection:(id)arg1 ;
-(void)_setSession:(id)arg1 ;
-(id)init;
-(id)connections;
-(id)session;
@end

