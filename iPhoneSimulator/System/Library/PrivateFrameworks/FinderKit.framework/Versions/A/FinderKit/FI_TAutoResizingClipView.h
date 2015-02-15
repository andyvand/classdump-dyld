/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSClipView.h>

@interface FI_TAutoResizingClipView : NSClipView {

	CGSize _globalDocumentViewSize;
	BOOL _autoResizeWidth;
	BOOL _autoResizeHeight;

}

@property (assign) BOOL autoResizeWidth;               //@synthesize autoResizeWidth=_autoResizeWidth - In the implementation block
@property (assign) BOOL autoResizeHeight;              //@synthesize autoResizeHeight=_autoResizeHeight - In the implementation block
-(BOOL)autoResizeWidth;
-(void)setAutoResizeWidth:(BOOL)arg1 ;
-(BOOL)autoResizeHeight;
-(void)setAutoResizeHeight:(BOOL)arg1 ;
-(char)isFlipped;
-(void)setDocumentView:(id)arg1 ;
-(void)viewFrameChanged:(id)arg1 ;
@end

