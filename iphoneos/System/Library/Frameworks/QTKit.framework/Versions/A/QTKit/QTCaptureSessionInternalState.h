/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTCaptureSessionInternalState : NSObject {

	OpaqueCMIOGraphRef _graph;
	CFDictionaryRef _supportUnitsForConnections;
	char _hasAudioMixerNode;
	int _audioMixerNode;
	char _hasAudioMixerFanOutNode;
	int _audioMixerFanOutNode;
	char _masterSynchronizerSet;
	int _candidateMasterSynchronizerNode;

}
-(CFDictionaryRef)supportUnitsForConnections;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
-(OpaqueCMIOGraphRef)graph;
@end

