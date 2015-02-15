/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Resources/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVAudioPlayerDelegate;
#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSData, NSURL, NSDictionary;

@interface AudioPlayerImpl : NSObject {

	id<AVAudioPlayerDelegate> _delegate;
	NSData* _data;
	NSURL* _url;
	NSDictionary* _actualSettings;
	BOOL _playRetain;
	AVAudioPlayerCpp* _localPlayer;
	dispatch_queue_sRef _gcd;

}
-(id)init;
-(void)dealloc;
@end

