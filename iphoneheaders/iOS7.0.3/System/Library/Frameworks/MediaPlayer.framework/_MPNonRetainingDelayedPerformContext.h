/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSRunLoop, NSArray;

@interface _MPNonRetainingDelayedPerformContext : NSObject {

	id target;
	SEL selector;
	id argument;
	NSRunLoop* rl;
	NSArray* modes;
	CFRunLoopTimerRef dperf;
	CFArrayRef dperfs;

}
@end
