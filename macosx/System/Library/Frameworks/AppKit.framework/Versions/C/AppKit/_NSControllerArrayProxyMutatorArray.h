/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSObjectController, NSString;

@interface _NSControllerArrayProxyMutatorArray : NSMutableArray {

	NSObjectController* _controller;
	NSString* _keyPath;

}
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)_referenceArray;
-(void)_performMutatorOperation:(long long)arg1 object:(id)arg2 index:(unsigned long long)arg3 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 ;
-(void)removeLastObject;
@end

