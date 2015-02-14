/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <AppKit/NSView.h>
#import <PDFKit/NSCoding.h>

@class PDFThumbnailViewPrivateVars;

@interface PDFThumbnailView : NSView <NSCoding> {

	PDFThumbnailViewPrivateVars* _pdfPriv;

}
-(void)commonInit;
-(void)setMaximumNumberOfColumns:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfColumns;
-(id)labelFont;
-(void)setLabelFont:(id)arg1 ;
-(CGSize)thumbnailSize;
-(id)pdfView;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)visibleThumbnails;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)delegate;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)isOpaque;
-(id)backgroundColor;
-(id)documentView;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(unsigned long long)numberOfRows;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(void)selectAll:(id)arg1 ;
-(char)allowsMultipleSelection;
-(char)becomeFirstResponder;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)setBezeled:(char)arg1 ;
-(char)isBezeled;
-(void)delete:(id)arg1 ;
-(void)adjustSubviews;
-(char)active;
-(void)scrollSelectionToVisible:(id)arg1 ;
-(void)documentChanged:(id)arg1 ;
-(void)setPDFView:(id)arg1 ;
-(void)selfDidResize:(id)arg1 ;
-(char)allowsDragging;
-(id)PDFView;
-(void)destroyArrays;
-(void)replaceSelectedPagesWithPage:(unsigned long long)arg1 drawNow:(char)arg2 ;
-(void)documentUnlocked:(id)arg1 ;
-(void)pageChanged:(id)arg1 ;
-(void)displayChanged:(id)arg1 ;
-(void)usePageLabelsChanged:(id)arg1 ;
-(void)didLayoutDocumentView:(id)arg1 ;
-(void)annotationsDidChange:(id)arg1 ;
-(id)thumbnailAtIndex:(unsigned long long)arg1 ;
-(CGRect)boundsForThumbnail:(unsigned long long)arg1 ;
-(void)trackMouseDragAllowed:(id)arg1 ;
-(void)trackMouseDragDisallowed:(id)arg1 ;
-(unsigned long long)numberOfThumbnails;
-(unsigned long long)selectedPageIndex;
-(void)redrawSelectedPagesDrawNow:(char)arg1 ;
-(id)selectedPages;
-(void)removePages:(id)arg1 ;
-(void)replaceSelectedPagesWithPageRange:(unsigned long long)arg1 drawNow:(char)arg2 ;
-(void)setAllowsDragging:(char)arg1 ;
-(void)setShadowThickness:(double)arg1 ;
-(double)shadowThickness;
-(void)initInternalViews;
-(void)createArrays;
-(unsigned long long)thumbnailAtPoint:(CGPoint)arg1 ;
-(char)selectedPagesContainsPage:(unsigned long long)arg1 ;
-(void)togglePageMembershipInSelectedPages:(unsigned long long)arg1 drawNow:(char)arg2 ;
-(void)appendSelectedPagesWithPageRange:(unsigned long long)arg1 drawNow:(char)arg2 ;
-(char)shouldBeginDrag:(id)arg1 ;
-(void)initiateDrag:(id)arg1 ;
-(void)clearSelectedPagesDrawNow:(char)arg1 ;
-(void)addPageToSelectedPages:(unsigned long long)arg1 drawNow:(char)arg2 ;
-(char)selectedPagesAreContiguous;
-(void)calculateRowsAndColumnsForBlankSize:(CGSize)arg1 frameSize:(CGSize)arg2 ;
-(void)reloadThumbnails;
-(void)removeThumbnailAtIndex:(unsigned long long)arg1 ;
-(void)addThumbnail:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)reloadThumbnailAtIndex:(unsigned long long)arg1 ;
-(void)makeThumbnailTopPriority:(id)arg1 ;
-(void)generateThumbnailAsync;
-(void)generateDefaultThumbnail;
-(void)enqueueThumbnailCreationForIndex:(id)arg1 ;
-(id)thumbnailQueue;
-(void)generateThumbnailForIndex:(id)arg1 ;
-(id)getImageForDrag;
-(CGRect)boundsForSelectedPages;
-(CGRect)insertionRectFromPoint:(CGPoint)arg1 ;
-(unsigned long long)thumbnailToRightOfPoint:(CGPoint)arg1 ;
-(void)insertPages:(id)arg1 ;
-(char)documentChangedIfDragSelectedPagesToIndex:(unsigned long long)arg1 ;
-(void)movePages:(id)arg1 ;
-(id)createPageFromImage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeThumbnailsAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)insertThumbnailsAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)insertThumbnailAtIndex:(unsigned long long)arg1 ;
-(CGRect)insertionRect;
-(void)selectThumbnailAtIndex:(unsigned long long)arg1 ;
-(void)removePageFromSelectedPages:(unsigned long long)arg1 drawNow:(char)arg2 ;
-(id)labelForPage:(unsigned long long)arg1 ;
-(void)setPdfView:(id)arg1 ;
-(id)getThumbnailImage:(unsigned long long)arg1 ;
-(char)thumbnailIsVisible:(unsigned long long)arg1 ;
-(char)draggingToSelf;
-(unsigned long long)draggedPageIndex;
-(void)moveThumbnailFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

