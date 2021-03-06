/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/NSWindowDelegate.h>

@protocol TShrinkToFitDelegateProtocol;
@class FI_TShrinkToFitTextView, NSWindow, NSTimer, NSString, NSFont, FI_TRenameOperation;

@interface FI_TShrinkToFitController : NSObject <NSWindowDelegate> {

	FI_TShrinkToFitTextView* _stfTextView;
	NSWindow* _parentWindow;
	NSTimer* _delayTimer;
	NSString* _initialText;
	NSFont* _font;
	NSRange _selectionRange;
	CGRect _maxGlobalFrame;
	unsigned long long _maxUniChars;
	long long _maxNumLines;
	unsigned long long _alignment;
	long long _baseWritingDirection;
	FI_TRenameOperation* _renameOp;
	id<TShrinkToFitDelegateProtocol> _delegate;

}

@property (nonatomic,retain,readonly) FI_TShrinkToFitTextView * stfTextView;              //@synthesize stfTextView=_stfTextView - In the implementation block
@property (nonatomic,retain,readonly) NSWindow * parentWindow;                            //@synthesize parentWindow=_parentWindow - In the implementation block
@property (nonatomic,retain,readonly) FI_TRenameOperation * renameOp;                     //@synthesize renameOp=_renameOp - In the implementation block
@property (nonatomic,retain) NSFont * font;                                               //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGRect maxGlobalFrame;                                       //@synthesize maxGlobalFrame=_maxGlobalFrame - In the implementation block
@property (assign,nonatomic) unsigned long long maxUniChars;                              //@synthesize maxUniChars=_maxUniChars - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                                //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long baseWritingDirection;                              //@synthesize baseWritingDirection=_baseWritingDirection - In the implementation block
@property (nonatomic,readonly) BOOL isEditing; 
@property (assign,nonatomic) long long maxNumLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopEditing:(BOOL)arg1 ;
-(void)setMaxGlobalFrame:(CGRect)arg1 ;
-(CGRect)globalFrame;
-(CGRect)maxGlobalFrame;
-(void)setMaxNumLines:(long long)arg1 ;
-(BOOL)shrinkToFitTextViewAboutToOpen;
-(void)shrinkToFitTextViewAboutToClose;
-(FI_TRenameOperation *)renameOp;
-(void)shrinkToFitTextViewEditingComplete:(id)arg1 ;
-(long long)maxNumLines;
-(unsigned long long)maxUniChars;
-(void)setMaxUniChars:(unsigned long long)arg1 ;
-(void)setText:(id)arg1 selectionRange:(const NSRange*)arg2 ;
-(void)startEditingViaDelayTimer:(id)arg1 ;
-(id)initWithParentWindow:(id)arg1 renameOp:(id)arg2 delegate:(id)arg3 ;
-(void)configureForNode:(const TFENode*)arg1 ;
-(FI_TShrinkToFitTextView *)stfTextView;
-(void)startEditing:(BOOL)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(long long)baseWritingDirection;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(NSWindow *)parentWindow;
-(BOOL)isEditing;
-(void)setAlignment:(unsigned long long)arg1 ;
-(unsigned long long)alignment;
-(void)windowDidResignKey:(id)arg1 ;
@end

