/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, NSMutableArray, FBMultiPreviewController, NSPrintOperation;

@interface FBReportView : NSView {

	int _reportType;
	NSArray* _fonts;
	NSMutableArray* _faces;
	NSMutableArray* _stamps;
	FBMultiPreviewController* _previewController;
	char _isMiniView;
	CGSize _pageSize;
	CGSize _oldPageSize;
	id _delegate;
	NSPrintOperation* _printOperation;
	CGColorRef _redColor;
	CGColorRef _greenColor;
	CGColorRef _lightGrayColor;
	CGColorRef _grayForGrid;

}
-(void)setPrintOperation:(id)arg1 ;
-(void)setupPreviewPageSize;
-(CGColorRef)lightGray;
-(CGColorRef)grayForGrid;
-(void)setReportType:(int)arg1 fonts:(id)arg2 previewController:(id)arg3 ;
-(CGSize)pageFrameSize;
-(char)isMiniView;
-(void)_reflowPages;
-(void)setIsMiniView:(char)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
-(void)mouseDown:(id)arg1 ;
-(CGRect)rectForPage:(long long)arg1 ;
-(id)printJobTitle;
-(long long)numberOfPages;
-(char)knowsPageRange:(NSRange*)arg1 ;
-(CGColorRef)red;
-(CGColorRef)green;
@end

