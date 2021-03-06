/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class NSMutableArray, NSMutableSet, NSError;

@interface QTCaptureSessionInternal : NSObject {

	NSMutableArray* inputs;
	NSMutableArray* outputs;
	CFDictionaryRef outputToInputConnections;
	CFDictionaryRef outputToMixerConnections;
	NSMutableSet* activeConnections;
	NSError* stopError;
	char running;

}
@end

