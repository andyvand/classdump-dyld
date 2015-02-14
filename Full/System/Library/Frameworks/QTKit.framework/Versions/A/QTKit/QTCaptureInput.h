/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTCaptureSession;

@interface QTCaptureInput : NSObject {

	QTCaptureSession* _session;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;

}
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(id)notReadyError;
-(void)graphWillStartForSession:(id)arg1 ;
-(void)removeInputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)clockProviderNodeForConnection:(id)arg1 ;
-(char)addInputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(unsigned)connectionUnitOutputNumberForConnection:(id)arg1 ;
-(void)sessionWillUseOutputDecompressionOptions:(id)arg1 forConnection:(id)arg2 ;
-(void)graphWillStopForSession:(id)arg1 dueToError:(id)arg2 ;
-(id)connectionsForMediaType:(id)arg1 ;
-(void)_setSession:(id)arg1 ;
-(id)defaultConnectionForMediaType:(id)arg1 ;
-(id)init;
-(id)connections;
-(id)session;
@end

