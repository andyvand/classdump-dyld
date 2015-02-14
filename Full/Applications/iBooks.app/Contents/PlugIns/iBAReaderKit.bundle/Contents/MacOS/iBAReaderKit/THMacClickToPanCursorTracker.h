/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCursor, NSTrackingArea, NSView;

@interface THMacClickToPanCursorTracker : NSObject {

	char _isPannable;
	char _didSetCursor;
	char _didClickToPan;
	NSCursor* _originalCursor;
	NSTrackingArea* _trackingArea;
	NSView* _view;

}

@property (assign,nonatomic) char isPannable;                            //@synthesize isPannable=_isPannable - In the implementation block
@property (nonatomic,retain) NSCursor * originalCursor;                  //@synthesize originalCursor=_originalCursor - In the implementation block
@property (nonatomic,retain) NSTrackingArea * trackingArea;              //@synthesize trackingArea=_trackingArea - In the implementation block
@property (assign,nonatomic) char didSetCursor;                          //@synthesize didSetCursor=_didSetCursor - In the implementation block
@property (assign,nonatomic) char didClickToPan;                         //@synthesize didClickToPan=_didClickToPan - In the implementation block
@property (assign,nonatomic) NSView * view;                              //@synthesize view=_view - In the implementation block
-(void)setOriginalCursor:(NSCursor *)arg1 ;
-(void)setDidClickToPan:(char)arg1 ;
-(void)removeTrackingArea;
-(NSCursor *)originalCursor;
-(char)didSetCursor;
-(char)didClickToPan;
-(char)isPannable;
-(void)clickToPanEnded;
-(void)clickToPanBegan;
-(void)setDidSetCursor:(char)arg1 ;
-(void)setIsPannable:(char)arg1 ;
-(void)updateTrackingAreaWithOtherTrackingAreas:(id)arg1 ;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)teardown;
-(id)init;
-(void)dealloc;
-(NSView *)view;
-(NSTrackingArea *)trackingArea;
-(void)update;
-(void)setView:(NSView *)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
@end

