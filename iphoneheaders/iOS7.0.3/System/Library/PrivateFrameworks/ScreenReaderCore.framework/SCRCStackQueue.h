/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCStackQueue : NSObject {

	SCRCStackNode* _firstNode;
	SCRCStackNode* _lastNode;
	unsigned _count;

}
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(id)description;
-(BOOL)isEmpty;
-(id)objectEnumerator;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObjectRetained;
-(void)pushObject:(id)arg1 ;
-(id)popObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)popObject;
-(id)topObject;
-(id)dequeueObject;
@end
