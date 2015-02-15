/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TDrawRectView.h>

@class NSAttributedString;

@interface TDesktopTitleBubbleView : TDrawRectView {

	TDesktopTitleMetrics* _textMetrics;
	TString* _toolTip;
	CGSize _idealSize;
	BOOL _isSelected;
	BOOL _isDragItem;
	vector<int, std::__1::allocator<int> >* _tagColorIndexes;
	TNotificationCenterObserver* _desktopWindowMainStateChangedObserver;

}

@property (retain) NSAttributedString * attrString; 
@property (assign) unsigned long long maxLines; 
@property (getter=isSelected) BOOL selected; 
@property (getter=isDragItem) BOOL dragItem; 
-(void)setTagColorIndexes:(const vector<int, std::__1::allocator<int> >*)arg1 ;
-(BOOL)isDragItem;
-(NSAttributedString *)attrString;
-(void)setAttrString:(NSAttributedString *)arg1 ;
-(void)setDragItem:(BOOL)arg1 ;
-(void)setFrameOrBoundsSizeHelper:(const CGSize*)arg1 oldSize:(const CGSize*)arg2 sizeChangerBlock:(/*^block*/id)arg3 ;
-(void)invalidateIdealSize;
-(BOOL)showBubble;
-(unsigned long long)linesToDrawNotTruncated;
-(void)desktopWindowMainStateChanged;
-(void)initCommon;
-(CGSize)idealSize;
-(unsigned long long)maxLines;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(CGRect)bubbleFrame;
-(CGRect)titleFrame;
-(void)drawRect:(CGRect)arg1 ;
-(long long)userInterfaceLayoutDirection;
-(id)hitTest:(CGPoint)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(BOOL)intersectsRect:(CGRect)arg1 ;
-(id)toolTip;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(void)setToolTip:(id)arg1 ;
-(void)updateTrackingAreas;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
@end
