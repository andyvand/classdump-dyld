/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {

	void* _ptpCameraProperties;

}

@property (readonly) PTPInitiator * initiator; 
-(void)dealloc;
-(void)enumerateContent;
-(BOOL)eject;
-(id)initiator;
-(id)initWithUSBLocationID:(unsigned)arg1 ;
-(id)initWithTCPIPInfo:(id)arg1 ;
-(void)addToEventHandlerQ:(id)arg1 ;
-(void)finalize;
@end
