/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:28 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSColor, NSArray, NSDictionary;

@interface _NSToolbarAuxiliary : NSObject {

	NSColor* backgroundColor;
	NSArray* draggedTypes;
	double windowOriginOffsetWhenHidingHint;
	_NSToolbarMetrics* savedMetrics;
	NSDictionary* identifiedItems;
	NSArray* defaultItems;
	NSArray* allowedItems;
	NSArray* selectableItems;
	struct {
		unsigned wiringNibConnections : 1;
		unsigned firstMoveableItemIndex : 6;
		unsigned reserved : 25;
	}  _tbaFlags;
	unsigned short _fullScreenAuxiliaryViewForceVisibleCounter;
	double auxMinHeight;
	double auxMaxHeight;
	double autohideHeight;
	unsigned long long originalAutoresizingMask;

}
@end

