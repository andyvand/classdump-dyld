/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THWPagedCanvasControllerDelegate <NSObject>
@optional
-(char)pagedCanvasControllerAllowBackgroundLayerHost:(id)arg1;
-(void)pagedCanvasControllerDidScroll:(id)arg1;
-(void)pagedCanvasControllerDidLayout:(id)arg1;
-(void)pagedCanvasController:(id)arg1 mostVisiblePageChangedToPageIndex:(unsigned long long)arg2;
-(id)bookNavigationForPagedCanvasController:(id)arg1;
-(id)documentNavigatorForPagedCanvasController:(id)arg1;
-(char)pagedCanvasController:(id)arg1 shouldDisableScrollingAtContentEdgesForScrollView:(id)arg2;
-(char)pagedCanvasController:(id)arg1 shouldDisableScrollingWhenCursorIsHiddenForScrollView:(id)arg2;
-(void)pagedCanvasController:(id)arg1 customizeLayerHost:(id)arg2;
-(double)pagedCanvasControllerVerticalOverflow:(id)arg1;
-(double)pagedCanvasController:(id)arg1 adjustScale:(double)arg2 andFrame:(CGRect*)arg3;
-(void)pagedCanvasController:(id)arg1 willUpdateWithInfosToDisplay:(id)arg2;
-(id)pagedCanvasController:(id)arg1 renderedPageIndexSetFromReps:(id)arg2;
-(char)pagedCanvasControllerRestrictVisibleToRenderedContent:(id)arg1;
-(void)pagedCanvasControllerDidStopScrolling:(id)arg1;
-(id)pagedCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3;
-(void)pagedCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg1;
-(CGRect*)pagedCanvasController:(id)arg1 expandBoundsForScrollViewHitTesting:(CGRect)arg2;
-(char)pagedCanvasController:(id)arg1 canvasViewShouldBecomeFirstResponder:(id)arg2;
-(char)pagedCanvasControllerIsRelatedCanvasScrolling:(id)arg1;

@required
-(unsigned long long)pageCountForPagedCanvasController:(id)arg1;
-(void)pagedCanvasController:(id)arg1 didScrollToPageIndex:(unsigned long long)arg2;
-(char)pagedCanvasControllerDeferViewCreation:(id)arg1;
-(double)pagedCanvasControllerContentsScale:(id)arg1;
-(id)pagedCanvasController:(id)arg1 infosToDisplayForPageRange:(NSRange)arg2;
-(id)pagedCanvasController:(id)arg1 geometryProviderForLayout:(id)arg2;
-(id)pagedCanvasController:(id)arg1 primaryTargetForGesture:(id)arg2;
-(char)pagedCanvasController:(id)arg1 allowsEditMenuForRep:(id)arg2;
-(char)pagedCanvasController:(id)arg1 allowsHyperlinkWithGesture:(id)arg2 forRep:(id)arg3;
-(char)allowSelectionPopoverForPagedCanvasController:(id)arg1;
-(char)pagedCanvasController:(id)arg1 shouldBeginEditingTHWPRep:(id)arg2 withGesture:(id)arg3;

@end

