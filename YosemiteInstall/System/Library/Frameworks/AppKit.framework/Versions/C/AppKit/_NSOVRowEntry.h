/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSOVRowEntry : NSObject {

	_NSOVRowEntry* parent;
	long long childIndex;
	id item;
	long long childCount;
	id* children;
	long long* rowCounts;
	short lvl;
	struct {
		unsigned expandable : 1;
		unsigned expanded : 1;
		unsigned initedIsExpandableData : 1;
		unsigned shouldLimitChildren : 1;
		unsigned limitingChildren : 1;
		unsigned isShowMoreRow : 1;
	}  _REFlags;

}
@end

