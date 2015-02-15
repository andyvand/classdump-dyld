/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned long long _max;
	unsigned long long _count;
	unsigned long long _nestingLevel;
	_NSUndoObject* _head;

}
-(id)topUndoObject;
-(unsigned long long)nestingLevel;
-(void)markBegin;
-(id)popUndoObject;
-(void)markEnd;
-(char)popAndInvoke;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)push:(id)arg1 ;
-(void)_removeBottom;
-(id)_beginMark;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(void)removeObject:(id)arg1 ;
-(void)removeAllObjects;
-(char)isDiscardable;
-(void)setDiscardable:(char)arg1 ;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)max;
@end

