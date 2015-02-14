/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayer, CALayer, NSString, FigSubtitleCALayer, AVPlayerItem;

@interface AVPlayerLayerInternal : NSObject {

	AVPlayer* _player;
	CALayer* maskLayer;
	CALayer* videoLayer;
	CALayer* closedCaptionLayer;
	NSString* videoGravity;
	NSString* subtitleGravity;
	FigSubtitleCALayer* subtitleLayer;
	CGRect latestPlayerLayerBoundsAtRendering;
	CGRect latestSubtitleLayoutAtRendering;
	char shouldObservePlayer;
	char isObservingPlayer;
	char hasPlayerToObserve;
	dispatch_queue_sRef serialQueue;
	char isPresentationLayer;
	char isReadyForDisplay;
	OpaqueFigSimpleMutexRef isReadyForDisplayMutex;
	AVPlayerItem* itemMarkedReadyForDisplay;
	CGSize presentationSize;
	CGSize latestPresentationSizeAtRendering;
	char isInPIPMode;

}
@end

