/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString;

@interface QCSCN_MorpherReserved : NSObject {

	_C3DMorpher* _morpher;
	char _normalized;
	_C3DScene* _sceneRef;
	unsigned _presentationInstance : 1;
	NSMutableDictionary* _animations;
	NSMutableArray* _weights;
	NSString* _name;
	NSString* _identifier;

}
-(void)finalize;
-(void)dealloc;
@end
