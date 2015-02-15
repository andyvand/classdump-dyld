/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface DepressedLeatherFrameView : NSView {

	NSImage* _listEdgeTop;
	NSImage* _listEdgeLeft;
	NSImage* _listEdgeRight;
	NSImage* _listEdgeBottom;
	NSImage* _listCornerTopLeft;
	NSImage* _listCornerTopRight;
	NSImage* _listCornerBottomLeft;
	NSImage* _listCornerBottomRight;

}

@property (retain) NSImage * listEdgeTop;                        //@synthesize listEdgeTop=_listEdgeTop - In the implementation block
@property (retain) NSImage * listEdgeLeft;                       //@synthesize listEdgeLeft=_listEdgeLeft - In the implementation block
@property (retain) NSImage * listEdgeRight;                      //@synthesize listEdgeRight=_listEdgeRight - In the implementation block
@property (retain) NSImage * listEdgeBottom;                     //@synthesize listEdgeBottom=_listEdgeBottom - In the implementation block
@property (retain) NSImage * listCornerTopLeft;                  //@synthesize listCornerTopLeft=_listCornerTopLeft - In the implementation block
@property (retain) NSImage * listCornerTopRight;                 //@synthesize listCornerTopRight=_listCornerTopRight - In the implementation block
@property (retain) NSImage * listCornerBottomLeft;               //@synthesize listCornerBottomLeft=_listCornerBottomLeft - In the implementation block
@property (retain) NSImage * listCornerBottomRight;              //@synthesize listCornerBottomRight=_listCornerBottomRight - In the implementation block
-(NSImage *)listEdgeTop;
-(void)setListEdgeTop:(NSImage *)arg1 ;
-(NSImage *)listEdgeLeft;
-(void)setListEdgeLeft:(NSImage *)arg1 ;
-(NSImage *)listEdgeRight;
-(void)setListEdgeRight:(NSImage *)arg1 ;
-(NSImage *)listEdgeBottom;
-(void)setListEdgeBottom:(NSImage *)arg1 ;
-(NSImage *)listCornerTopLeft;
-(void)setListCornerTopLeft:(NSImage *)arg1 ;
-(NSImage *)listCornerTopRight;
-(void)setListCornerTopRight:(NSImage *)arg1 ;
-(NSImage *)listCornerBottomLeft;
-(void)setListCornerBottomLeft:(NSImage *)arg1 ;
-(NSImage *)listCornerBottomRight;
-(void)setListCornerBottomRight:(NSImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(char)isFlipped;
-(char)acceptsFirstMouse:(id)arg1 ;
@end
