/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <BKPlatformCore/BKMarginNoteView.h>

@class NSTextView, BKNoteMarginScrollView;

@interface BKMarginNoteEditView : BKMarginNoteView {

	NSTextView* _textView;
	BKNoteMarginScrollView* _scrollView;
	CGSize _noteSize;

}

@property (nonatomic,retain,readonly) NSTextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain,readonly) BKNoteMarginScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) CGSize noteSize;                                         //@synthesize noteSize=_noteSize - In the implementation block
-(void)setTheme:(id)arg1 ;
-(CGSize)noteSize;
-(double)p_adjustHeightToText;
-(id)initWithFrame:(CGRect)arg1 side:(int)arg2 noteSize:(CGSize)arg3 theme:(id)arg4 wantsShadow:(char)arg5 delegate:(id)arg6 ;
-(void)closeViewAnimatedWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateLayer;
-(char)isEditable;
-(NSTextView *)textView;
-(BKNoteMarginScrollView *)scrollView;
@end

