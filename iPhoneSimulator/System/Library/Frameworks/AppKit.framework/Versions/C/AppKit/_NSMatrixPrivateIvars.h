/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSColor, NSCell;

@interface _NSMatrixPrivateIvars : NSObject {

	long long _keyCol;
	NSColor* _cellBackgroundColor;
	long long _drawingRow;
	long long _drawingCol;
	long long _matrixMDFlags;
	struct {
		unsigned RESERVED : 32;
	}  _mFlags2;
	long long _keyRow;
	long long _getRowColumnOfCellLastFoundIndexCache;
	NSCell* _clickedCell;

}
@end

