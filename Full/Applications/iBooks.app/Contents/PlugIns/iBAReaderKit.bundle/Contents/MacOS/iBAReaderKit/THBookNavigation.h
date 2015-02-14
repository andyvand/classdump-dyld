/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THBookNavigation <THLinkTraversalDelegate>
@optional
-(void)didJumpToPageLocation:(id)arg1;
-(void)willJumpToPageLocation:(id)arg1;

@required
-(id)bookLinkResolver;
-(id)anchorFromLink:(id)arg1;
-(char)isNotesFullscreenVisible;
-(void)showOverlayScrim;
-(void)hideOverlayScrim;
-(void)closeDocument;
-(void)showTOC;
-(void)showCoverPage;
-(void)showGlossaryViewWithAnchor:(id)arg1;
-(char)isGlossaryVisible;
-(void)navigationUnitDidChange:(id)arg1;
-(void)showGlossaryView;
-(void)followAbsolutePageIndex:(unsigned long long)arg1;
-(void)showIntroMedia;
-(unsigned long long)currentAbsolutePageIndex;
-(void)recordOutgoingMajorNavigationJump;

@end

