/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString;

@interface _NSSoundAux : NSObject {

	OpaqueAudioConverterRef _audioConverter;
	AudioBuffer* _converterBuffer;
	ComponentInstanceRecord* _outputUnit;
	OpaqueAudioFileIDRef _audioFile;
	AudioStreamBasicDescription _audioFormat;
	long long _audioDataReadHeadPosition;
	unsigned long long _audioDataLength;
	long long _audioValidFrameCount;
	unsigned _maximumPackets;
	AudioStreamPacketDescription* _audioPacketDescriptions;
	NSString* audioDeviceUID;
	float _volume;
	int _spinLock;
	unsigned char _ivarFlags;
	unsigned _systemSoundID;
	/*^block*/id _systemSoundCompletionHandler;

}
@end

