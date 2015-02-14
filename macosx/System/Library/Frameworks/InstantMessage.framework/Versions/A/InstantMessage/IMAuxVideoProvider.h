/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InstantMessage/IMAuxVideoProvider.h>

@protocol IMAuxVideoProvider
@required
-(oneway void)provideFrameAtFramerate:(double)arg1;
-(oneway void)setBufferPoolDescription:(id)arg1 audioDeviceUID:(id)arg2 channels:(id)arg3;
-(oneway void)disconnectAndActivate:(char)arg1;
-(oneway void)performActionForControlWithDictionaryRepresentation:(id)arg1;

@end


@class NSString, NSThread, IMSharedPixelBufferPool;

@interface IMAuxVideoProvider : NSObject <IMAuxVideoProvider> {

	unsigned long long _clientState;
	NSString* _providerID;
	char _didConnect;
	char _willUpdateSettings;
	NSThread* _callbackThread;
	IMSharedPixelBufferPool* _sharedBufferPool;
	double _frameRate;
	unsigned long long _shouldExit;
	unsigned long long _isAboutToExitThread;

}
-(id)auxVideoReceiverTarget;
-(void)_setClientState:(unsigned long long)arg1 ;
-(void)deactivateVideoProvider;
-(void)_connectToReceiver;
-(void)_processWorkItem:(id)arg1 ;
-(void)deliverFrameWithBufferID:(long long)arg1 attachments:(id)arg2 ;
-(double)_fillBufferFromPool:(id)arg1 atRate:(double)arg2 ;
-(void)_createBufferPoolWithDescription:(id)arg1 ;
-(void)_callbackThreadMain;
-(void)stopClient;
-(oneway void)provideFrameAtFramerate:(double)arg1 ;
-(oneway void)setBufferPoolDescription:(id)arg1 audioDeviceUID:(id)arg2 channels:(id)arg3 ;
-(oneway void)disconnectAndActivate:(char)arg1 ;
-(oneway void)performActionForControlWithDictionaryRepresentation:(id)arg1 ;
-(void)updateVideoProvider;
-(void)startClient;
-(void)makeInactive;
-(void)updateControlBarFromDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)clientState;
@end

