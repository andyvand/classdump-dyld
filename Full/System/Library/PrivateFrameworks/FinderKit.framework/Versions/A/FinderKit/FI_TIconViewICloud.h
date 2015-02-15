/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TIconView.h>

@interface FI_TIconViewICloud : FI_TIconView {

	BOOL _forceScrollToTop;
	TNSRef<FIIconViewICloudSortViewController *> _sortViewController;

}
+(id)IKOpenGLDefaultPixelFormat;
-(id)sortButtons;
-(id)sortView;
-(void)updateSortControlLayout;
-(void)sortChanged:(id)arg1 ;
-(long long)sortButtonIndex;
-(void)setSelectedSortSegment:(long long)arg1 ;
-(void)addSortControls;
-(void)drawOverlays;
-(void)adjustDocumentSize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)didEndScrollInScrollView:(id)arg1 ;
-(void)didBeginScrollInScrollView:(id)arg1 ;
@end

