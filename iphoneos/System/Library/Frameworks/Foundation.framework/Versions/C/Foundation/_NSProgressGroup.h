/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSProgress, NSMutableSet, _NSProgressFraction;

@interface _NSProgressGroup : NSObject {

	NSProgress* _parent;
	long long _portionOfParent;
	NSMutableSet* _children;
	_NSProgressFraction* _childrenFraction;
	unsigned long long _finishedChildrenCount;
	char _closed;

}
-(void)prioritize;
-(id)_indentedDescription:(unsigned long long)arg1 ;
-(id)initWithParent:(id)arg1 portion:(long long)arg2 ;
-(void)updateChildWithOldFraction:(id)arg1 newFraction:(id)arg2 ;
-(void)stopNotifications;
-(void)dealloc;
-(id)description;
-(void)cancel;
-(void)close;
-(id)parent;
-(void)addChild:(id)arg1 ;
-(void)pause;
@end

