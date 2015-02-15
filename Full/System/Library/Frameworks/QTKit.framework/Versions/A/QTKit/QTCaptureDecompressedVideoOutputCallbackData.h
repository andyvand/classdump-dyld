/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QTCaptureDecompressedVideoOutput, QTCaptureConnection, QTBackgroundQueue;

@interface QTCaptureDecompressedVideoOutputCallbackData : NSObject {

	QTCaptureDecompressedVideoOutput* _output;
	QTCaptureConnection* _connection;
	QTBackgroundQueue* _backgroundQueue;

}
+(id)callbackDataWithOutput:(id)arg1 connection:(id)arg2 backgroundQueue:(id)arg3 ;
-(id)output;
-(id)connection;
-(id)initWithOutput:(id)arg1 connection:(id)arg2 backgroundQueue:(id)arg3 ;
-(id)backgroundQueue;
-(void)dealloc;
@end

