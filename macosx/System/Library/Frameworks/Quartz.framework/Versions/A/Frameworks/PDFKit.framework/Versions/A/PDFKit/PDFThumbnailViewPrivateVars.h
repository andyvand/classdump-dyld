/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFThumbnailDisplayView, NSScrollView, NSMutableArray, NSImage, NSColor, NSFont, NSMutableIndexSet, NSOperationQueue;

@interface PDFThumbnailViewPrivateVars : NSObject {

	PDFView* pdfView;
	id delegate;
	PDFThumbnailDisplayView* thumbView;
	NSScrollView* scrollView;
	NSMutableArray* thumbnails;
	unsigned long long thumbnailCount;
	NSImage* defaultImage;
	NSColor* backgroundColor;
	NSFont* labelFont;
	CGSize thumbnailSize;
	unsigned long long numColumns;
	unsigned long long maxColumns;
	unsigned long long numRows;
	int numVisibleRows;
	unsigned long long topPriority;
	NSMutableIndexSet* selectedPageSet;
	NSMutableArray* selectedPages;
	unsigned long long lastSelectedIndex;
	unsigned long long wasSelectedIndex;
	unsigned long long draggedPageIndex;
	double shadowThickness;
	char draggingToSelf;
	char active;
	char bezeled;
	char allowsDragging;
	char multipleSelection;
	char ignoreLayoutNotification;
	CGRect insertionRect;
	NSOperationQueue* thumbnailQueue;

}
@end

