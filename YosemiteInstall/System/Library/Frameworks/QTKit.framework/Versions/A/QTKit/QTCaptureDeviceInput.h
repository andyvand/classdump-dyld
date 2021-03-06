/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTCaptureInput.h>

@class QTCaptureDeviceInputInternal;

@interface QTCaptureDeviceInput : QTCaptureInput {

	QTCaptureDeviceInputInternal* _internal;
	long long _reserved4;
	long long _reserved5;
	long long _reserved6;

}
+(id)deviceInputWithDevice:(id)arg1 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(id)notReadyError;
-(char)automaticallyConfiguresDevice;
-(void)setAutomaticallyConfiguresDevice:(char)arg1 ;
-(void)_setDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)removeInputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)clockProviderNodeForConnection:(id)arg1 ;
-(char)addInputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(unsigned)connectionUnitOutputNumberForConnection:(id)arg1 ;
-(void)sessionWillUseOutputDecompressionOptions:(id)arg1 forConnection:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)connections;
-(id)device;
@end

